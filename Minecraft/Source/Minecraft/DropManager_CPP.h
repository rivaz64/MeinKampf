// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DropManager_CPP.generated.h"

UENUM()
enum eSPAWN_ITEM_TYPE
{
	SPAWN_NONE,
	SPAWN_BLOCK,
  SPAWN_TOOL,
  SPAWN_MISC
};

UCLASS()
class MINECRAFT_API ADropManager_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADropManager_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void SpawnItemFromType(FVector pos,
	                               eSPAWN_ITEM_TYPE type,
																 int subType, uint8 count,
																 float timeTillCollect);

	UFUNCTION(BlueprintCallable)
	virtual void SpawnItemFromClass(FVector pos,
	                                TSubclassOf<class ABaseItem_CPP> item,
																	uint8 count,
																  float timeTillCollect);
};
