// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "tree.generated.h"

UCLASS()
class MINECRAFT_API Atree : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> tronco;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> hojas;
	virtual void Tick(float DeltaTime) override;

};
