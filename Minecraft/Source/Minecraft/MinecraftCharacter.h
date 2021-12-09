// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UIState_CPP.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MinecraftCharacter.generated.h"


class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;
class AChunkRenderer;

UCLASS(config=Game)
class AMinecraftCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* L_MotionController;


	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* HandItemMesh;

public:

	UPROPERTY(EditAnywhere)
		AChunkRenderer* m_world;

	AMinecraftCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime) override;

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AMinecraftProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint8 bUsingMotionControllers : 1;

	bool Hitting = false;

	class ABaseBlock_CPP* PointingBlock;
	FVector PointingNormal;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABaseItem_CPP> HandedItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UHUD_W_CPP* HUDWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UInventory_W_CPP* InventoryWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 HUDSlotActive = 0;
	class TArray<TSubclassOf<class ABaseItem_CPP>>* HUD;

	class UStaticMesh* DefaultItemMesh;
	class UStaticMesh* SteveArmMesh;

  TArray<TSubclassOf<class ABaseItem_CPP>> inventory_items;
  TArray<uint8> inventory_count;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedItem = false;
protected:
	
	/** Fires a projectile. */
	void OnFire();
	void StopFire();

	void Interact();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);


	void ItemBarMove(float Val);
	void ItemBarMoveNumeric(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	void TurnAtBefore(float Rate);
	void LookUpAtBefore(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;



  void UpdateStateMachine();

  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void toggleHUDWidget(bool active);
  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void toggleInventoryWidget(bool active);
  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void toggleCraftingWidget(bool active);
  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void togglePauseWidget(bool active);
  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void toggleDeadWidget(bool active);



  TMap<eSTATE, UIState_CPP*> UIStates;


 public:
    eSTATE CurrentState = eSTATE::NONE;
  UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<eINPUT_TYPE> CurrentInput = INPUT_NONE;


	bool FirtNotOnFloor = true;
	float ZAfterNotOnFloor = 0.0f;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);


public:

	UFUNCTION(BlueprintCallable)
		bool AddItem(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count);
	UFUNCTION(BlueprintCallable)
    bool AddItemR(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount);

  UFUNCTION(BlueprintCallable)
    bool AddItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool SubstractItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount);

  UFUNCTION(BlueprintCallable)
    bool AddSlotItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 _index, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool SubstractSlotItemC(uint8 _count, uint8 _index, uint8& _oCount);

  UFUNCTION(BlueprintCallable)
    void GetItemC(uint8 _index, TSubclassOf<class ABaseItem_CPP>& _oType, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    bool SetItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 _index, uint8& _oCount);
  UFUNCTION(BlueprintCallable)
    int GetItemsCountC();


	UFUNCTION(BlueprintCallable)
	  void Respawn();



  UPROPERTY(BlueprintReadWrite)
    int Life = 20;
  UPROPERTY(BlueprintReadWrite)
    int MaxLife = 20;

	FVector InitPosition;


	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	

	bool interacting = false;

	float timeSinceLast=0;

	float timeAttack=0.2;
};

