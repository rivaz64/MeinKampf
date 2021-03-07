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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
		class ABaseBlock_CPP* BlockMesh;

	UPROPERTY()
		class UStaticMeshComponent* UpCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* DownCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* LeftCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* RightCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* FrontCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* BackCubeMesh;
};
