// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseItem_CPP.generated.h"

UENUM()
enum eITEM_TYPE
{
	NULL_ITEM_TYPE UMETA(DisplayName = "NULL_ITEM_TYPE"),
	TOOL UMETA(DisplayName = "TOOL"),
	EQUIPMENT UMETA(DisplayName = "EQUIPMENT"),
	BLOCK UMETA(DisplayName = "BLOCK"),
	FOOD UMETA(DisplayName = "FOOD"),
	MISC UMETA(DisplayName = "MISC")
};

UENUM()
enum eTOOL_TYPE
{
	NULL_TOOL_TYPE UMETA(DisplayName = "NULL_TOOL_TYPE"),
	SWORD UMETA(DisplayName = "SWORD"),
	AXE   UMETA(DisplayName = "AXE"),
	PICKAXE   UMETA(DisplayName = "PICKAXE"),
	SHOVEL   UMETA(DisplayName = "SHOVEL"),
	HOE   UMETA(DisplayName = "HOE")
};

UCLASS()
class MINECRAFT_API ABaseItem_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Colected();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
		TEnumAsByte<eITEM_TYPE> eItemType = NULL_ITEM_TYPE;

	UPROPERTY()
		class USphereComponent* ItemCollider;
	UPROPERTY()
		class UStaticMeshComponent* ItemMesh;

	/*TODO: Add image for the Inventory*/

};
