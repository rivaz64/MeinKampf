// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDroped_CPP.generated.h"

UCLASS()
class MINECRAFT_API AItemDroped_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemDroped_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class ABaseItem_CPP> Item;
	UPROPERTY(BlueprintReadWrite)
		uint8 Count = 0;

	UPROPERTY()
		class USphereComponent* ItemCollider;
	UPROPERTY()
		class USphereComponent* CollectiorCollider;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeTillCollected = 3.f;
};
