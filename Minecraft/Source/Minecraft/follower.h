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
	public:
	Afollower();

	virtual void 
	BeginPlay() override;

	virtual void 
	Tick(float DeltaTime) override;

	void 
	newPoint();

	UPROPERTY(EditAnywhere)
		float separation;
	UPROPERTY(EditAnywhere)
		bool tevio = false;
	//virtual void choiseaction();
};