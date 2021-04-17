// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBlock_CPP.h"
#include "Containers/EnumAsByte.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"
#include"mundo.h"
#include "BaseItemBlock_CPP.h"
#include "BaseItemTool_CPP.h"

//#include "Niagara/Public/NiagaraComponent.h"
//#include "Niagara/Public/NiagaraFunctionLibrary.h"

#include <string>

// Sets default values
ABaseBlock_CPP::ABaseBlock_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("Collider");
	BoxCollider ->SetupAttachment(RootComponent);
	RootComponent = BoxCollider;

	BoxCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	BoxCollider->InitBoxExtent({50.f, 50.f, 50.f});


	UpCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("UpCubeMesh");
	UpCubeMesh->SetupAttachment(RootComponent);

	UpCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Blocks/UpCube_SM.UpCube_SM"));

	if (BlockAsset.Succeeded())
	{
		UpCubeMesh->SetStaticMesh(BlockAsset.Object);
	}
	

	DownCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("DownCubeMesh");
	DownCubeMesh->SetupAttachment(RootComponent);

	DownCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset2(TEXT("/Game/Mara/Meshes/Blocks/DownCube_SM.DownCube_SM"));

	if (BlockAsset2.Succeeded())
	{
		DownCubeMesh->SetStaticMesh(BlockAsset2.Object);
	}


	LeftCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("LeftCubeMesh");
	LeftCubeMesh->SetupAttachment(RootComponent);

	LeftCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset3(TEXT("/Game/Mara/Meshes/Blocks/LeftCube_SM.LeftCube_SM"));

	if (BlockAsset3.Succeeded())
	{
		LeftCubeMesh->SetStaticMesh(BlockAsset3.Object);
	}


	RightCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("RightCubeMesh");
	RightCubeMesh->SetupAttachment(RootComponent);

	RightCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset4(TEXT("/Game/Mara/Meshes/Blocks/RightCube_SM.RightCube_SM"));

	if (BlockAsset4.Succeeded())
	{
		RightCubeMesh->SetStaticMesh(BlockAsset4.Object);
	}


	FrontCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("FrontCubeMesh");
	FrontCubeMesh->SetupAttachment(RootComponent);

	FrontCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset5(TEXT("/Game/Mara/Meshes/Blocks/FrontCube_SM.FrontCube_SM"));

	if (BlockAsset5.Succeeded())
	{
		FrontCubeMesh->SetStaticMesh(BlockAsset5.Object);
	}


	BackCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("BackCubeMesh");
	BackCubeMesh->SetupAttachment(RootComponent);

	BackCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset6(TEXT("/Game/Mara/Meshes/Blocks/BackCube_SM.BackCube_SM"));

	if (BlockAsset6.Succeeded())
	{
		BackCubeMesh->SetStaticMesh(BlockAsset6.Object);
	}


	FrameCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("FrameCubeMesh");
	FrameCubeMesh->SetupAttachment(RootComponent);

	FrameCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset7(TEXT("/Game/Mara/Meshes/FrameBlock_SM.FrameBlock_SM"));

	if (BlockAsset7.Succeeded())
	{
		FrameCubeMesh->SetStaticMesh(BlockAsset7.Object);
	}
	FrameCubeMesh->SetVisibility(false);
}

// Called when the game starts or when spawned
void ABaseBlock_CPP::BeginPlay()
{
	Super::BeginPlay();

	if (UpMaterial != nullptr)
	{
		UpCubeMesh->SetMaterial(0, UpMaterial);
	}
	if (DownMaterial != nullptr)
	{
		DownCubeMesh->SetMaterial(0, DownMaterial);
	}
	if (LeftMaterial != nullptr)
	{
		LeftCubeMesh->SetMaterial(0, LeftMaterial);
	}
	if (RightMaterial != nullptr)
	{
		RightCubeMesh->SetMaterial(0, RightMaterial);
	}
	if (FrontMaterial != nullptr)
	{
		FrontCubeMesh->SetMaterial(0, FrontMaterial);
	}
	if (BackMaterial != nullptr)
	{
		BackCubeMesh->SetMaterial(0, BackMaterial);
	}

	TArray<ABaseBlock_CPP*> arrays;
	/*LanzarRayo(arrays);

	for (int i = 0; i < arrays.Num(); i++)
	{
		SetFaceVisibility(i, arrays[i] == nullptr);

		if (arrays[i] != nullptr)
		{
			arrays[i]->SetFaceVisibility(i % 2 == 0 ? i + 1 : i - 1, false);
		}
	}*/
}

void ABaseBlock_CPP::LanzarRayo(TArray<ABaseBlock_CPP*>& arrays)
{
	for (int i = 0; i < 6; i++)
	{
		arrays.Add(nullptr);
		FVector Loc = GetActorLocation();
		FHitResult Hit;

		float size = 51;
		float distance = 75;

		FVector Start = Loc + (FVector(i == RightCube ? size : (i == LeftCube ? -size : 0),
									   i == FrontCube ? size : (i == BackCube ? -size : 0),
									   i == UpCube ? size : (i == DownCube ? -size : 0)));
		FVector End = Loc + (FVector(i == RightCube ? distance : (i == LeftCube ? -distance : 0), 
									 i == FrontCube ? distance : (i == BackCube ? -distance : 0), 
									 i == UpCube ? distance : (i == DownCube ? -distance : 0)));

		FCollisionQueryParams TraceParams;

		bool hited = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

		/*DrawDebugLine(
			GetWorld(),
			Start,
			End,
			FColor(255, 0, 0),
			false, 10, 0,
			1
		);*/

		auto blocks = Cast<ABaseBlock_CPP>(Hit.Actor);
		if (blocks != nullptr && blocks != this)
		{
			arrays[i] = blocks;
		}
	}
}

void ABaseBlock_CPP::UpdateAdjacents()
{
	TArray<ABaseBlock_CPP*> arrays;
	LanzarRayo(arrays);
	//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, ("OnUpdate(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = " + std::to_string(arrays.Num())).c_str());

	if (arrays.Num() == 6)
	{
		UpCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Black, ("     OnUpdate(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = Si").c_str());
	}
	else
	{
		UpCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Black, ("     OnUpdate(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = No").c_str());
	}
}

void ABaseBlock_CPP::Pointed()
{
	FrameCubeMesh->SetVisibility(true);
}

void ABaseBlock_CPP::Unpointed()
{
	FrameCubeMesh->SetVisibility(false);
}

void ABaseBlock_CPP::Hitted(float DeltaTime, TSubclassOf<class ABaseItem_CPP> handedItem)
{
	if (handedItem != NULL && handedItem->GetDefaultObject<ABaseItem_CPP>()->eItemType == TOOL)
	{
		Life -= DeltaTime * handedItem->GetDefaultObject<ABaseItemTool_CPP>()->MiningSpeed;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, ("With speed: " + std::to_string(handedItem->GetDefaultObject<ABaseItemTool_CPP>()->MiningSpeed)).c_str());
	}
	else
	{
		Life -= DeltaTime;
	}
	if (Life <= 0)
		Breaked();
}

void ABaseBlock_CPP::Unhitted()
{
	Life = MaxLife;
}

bool ABaseBlock_CPP::Interacted(TSubclassOf<class ABaseItem_CPP> item, FVector NormalFace)
{
	return true;
}

void ABaseBlock_CPP::Breaked()
{
	TArray<ABaseBlock_CPP*> arrays;
	//LanzarRayo(arrays);

	/*for (int i = 0; i < arrays.Num(); i++)
	{
		if (arrays[i] != nullptr)
		{
			arrays[i]->SetFaceVisibility(i % 2 == 0 ? i + 1 : i - 1, true);
		}
	}*/
	
	FVector a = GetActorLocation();
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Amundo::StaticClass(), FoundActors);
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, (std::to_string(a.X) + ", " + std::to_string(a.Y)).c_str());
	((Amundo*)FoundActors[0])->destroyblockat((int)a.X / 100, (int)a.Y / 100);
	isAlive = false;
	//Destroy();
}

void ABaseBlock_CPP::SetFaceVisibility(unsigned char face, bool visibility)
{
	if (face == UpCube)
		UpCubeMesh->SetVisibility(visibility);
	if (face == DownCube)
		DownCubeMesh->SetVisibility(visibility);
	if (face == LeftCube)
		LeftCubeMesh->SetVisibility(visibility);
	if (face == RightCube)
		RightCubeMesh->SetVisibility(visibility);
	if (face == FrontCube)
		FrontCubeMesh->SetVisibility(visibility);
	if (face == BackCube)
		BackCubeMesh->SetVisibility(visibility);
}

// Called every frame
void ABaseBlock_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, "BaseBlock");
}

