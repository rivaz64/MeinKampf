// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "mob.h"
#include "follower.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API Afollower : public Amob
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ClassToFind;
	UPROPERTY(EditAnywhere)
		float separation;
	UPROPERTY(EditAnywhere)
		bool tevio=false;
	virtual void choiserotation();
	//virtual void choiseaction();
};
