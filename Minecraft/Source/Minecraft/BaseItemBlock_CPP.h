// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem_CPP.h"
#include "BaseItemBlock_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ABaseItemBlock_CPP : public ABaseItem_CPP
{
	GENERATED_BODY()
	
public:
	ABaseItemBlock_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void UseItem(class ABaseBlock_CPP* blockPointing, FVector NormalFace, UWorld* world);

	virtual void PlaceBlock(FVector* pos, UWorld* world);

	virtual void Colected(class AMinecraftCharacter* Player);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
		TSubclassOf<class ABaseBlock_CPP> BlockClass;

};
