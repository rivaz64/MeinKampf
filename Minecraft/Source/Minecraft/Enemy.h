// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "mob.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API AEnemy : public Amob
{
	GENERATED_BODY()
	
	public:

	void 
	newPoint() override;

	void
	vision() override;

	virtual void
	attack();

	bool detected = false;
};
