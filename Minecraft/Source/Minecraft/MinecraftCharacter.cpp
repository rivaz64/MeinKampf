// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinecraftCharacter.h"
#include "MinecraftProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"
#include <string>
#include "HUD_W_CPP.h"

#include "B_Grass_CPP.h"
#include "BaseItem_CPP.h"


//#include "NiagaraFunctionLibrary.h"

#include "BaseBlock_CPP.h"
#include "BaseItem_CPP.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AMinecraftCharacter

AMinecraftCharacter::AMinecraftCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	/*FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);*/

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	/*VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));*/

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
}

void AMinecraftCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	//FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		//VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		//VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}

	HUD = new TArray<TSubclassOf<class ABaseItem_CPP>>();
	for (int i = 0; i < 9; i++)
	{
		HUD->Add(nullptr);
	}
	(*HUD)[0] = HandedItem;
}

void AMinecraftCharacter::Tick(float DeltaTime)
{
	FVector Loc = FirstPersonCameraComponent->GetComponentLocation();
	FHitResult Hit;

	float distance = 500;

	FVector Start = Loc;
	FVector End = Loc + FirstPersonCameraComponent->GetComponentRotation().Vector() * distance;

	FCollisionQueryParams TraceParams;

	bool hited = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	/*DrawDebugLine(
		GetWorld(),
		Start,
		End,
		FColor(255, 0, 0),
		false, .1f, 0,
		1
	);*/

	auto Block = Cast<ABaseBlock_CPP>(Hit.Actor);

	if (Block != NULL)
	{
		PointingNormal = Hit.ImpactNormal;
		if (Block != PointingBlock && PointingBlock != NULL)
		{
			PointingBlock->Unpointed();
			PointingBlock->Unhitted();
			PointingBlock = Block;
			PointingBlock->Pointed();
		}
		if (PointingBlock == NULL)
		{
			PointingBlock = Block;
			PointingBlock->Pointed();
		}
	}
	else
	{
		if (PointingBlock != NULL)
		{
			PointingBlock->Unpointed();
			PointingBlock->Unhitted();
			PointingBlock = NULL;
		}
	}

	if (Hitting && PointingBlock != NULL)
	{
		PointingBlock->Hitted(DeltaTime);
		if (!PointingBlock->isAlive)
		{
			PointingBlock = NULL;
		}
	}

	if (hited)
	{
		PointingNormal = Hit.ImpactNormal;
	}
}

void AMinecraftCharacter::AddItem(TSubclassOf<class ABaseItem_CPP> item)
{
	(*HUD)[0] = item->StaticClass();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMinecraftCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMinecraftCharacter::OnFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AMinecraftCharacter::StopFire);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMinecraftCharacter::Interact);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMinecraftCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMinecraftCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMinecraftCharacter::MoveRight);

	PlayerInputComponent->BindAxis("ItemBarMove", this, &AMinecraftCharacter::ItemBarMove);
	PlayerInputComponent->BindAxis("ItemBarMoveNumeric", this, &AMinecraftCharacter::ItemBarMoveNumeric);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMinecraftCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMinecraftCharacter::LookUpAtRate);
}

void AMinecraftCharacter::OnFire()
{
	Hitting = true; 
}

void AMinecraftCharacter::StopFire()
{
	Hitting = false;
	if (PointingBlock != nullptr)
		PointingBlock->Unhitted();
}

void AMinecraftCharacter::Interact()
{
	TSubclassOf<class ABaseItem_CPP> Item = (*HUD)[HUDSlotActive];
	
	static bool CanUseItem = true;
	if (PointingBlock != NULL)
	{
		CanUseItem = PointingBlock->Interacted(Item, PointingNormal);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, ("PointngAtBlock: " + std::to_string(PointingNormal.X) + ", " + std::to_string(PointingNormal.Y) + ", " + std::to_string(PointingNormal.Z)).c_str());
	}
	if (CanUseItem && Item != NULL)
	{
		Item->GetDefaultObject<ABaseItem_CPP>()->UseItem(PointingBlock, PointingNormal, GetWorld());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, "CanUseItemInBlock");
	}
}

void AMinecraftCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMinecraftCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AMinecraftCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AMinecraftCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AMinecraftCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMinecraftCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMinecraftCharacter::ItemBarMove(float Val)
{
	if (Val != 0)
	{
		HUDSlotActive += Val + 9;
		HUDSlotActive %= 9;
		HUDWidget->SetSelected(HUDSlotActive);
	}
}

void AMinecraftCharacter::ItemBarMoveNumeric(float Val)
{
	if (Val != 0)
	{
		HUDSlotActive = Val - 1;
		HUDWidget->SetSelected(HUDSlotActive);
	}
}

void AMinecraftCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMinecraftCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AMinecraftCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AMinecraftCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AMinecraftCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AMinecraftCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}