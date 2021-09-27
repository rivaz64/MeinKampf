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

UENUM()
enum eMATERIAL_TYPE
{
	NULL_MATERIAL_TYPE UMETA(DisplayName = "NULL_MATERIAL_TYPE"),
	WOOD UMETA(DisplayName = "WOOD"),
	STONE   UMETA(DisplayName = "STONE"),
	IRON   UMETA(DisplayName = "IRON"),
	GOLD   UMETA(DisplayName = "GOLD"),
	DIAMOND   UMETA(DisplayName = "DIAMOND")
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

	virtual bool UseItem(class ABaseBlock_CPP*, FVector NormalFace, UWorld* world);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
		TEnumAsByte<eITEM_TYPE> eItemType = NULL_ITEM_TYPE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
		TEnumAsByte<eTOOL_TYPE> eToolType = NULL_TOOL_TYPE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
		TEnumAsByte<eMATERIAL_TYPE> eMaterialType = NULL_MATERIAL_TYPE;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UStaticMesh* ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UTexture2D* Image;	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int Durablity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int MaxDurablity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		uint8 MaxStack;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool Singled;

	

};
