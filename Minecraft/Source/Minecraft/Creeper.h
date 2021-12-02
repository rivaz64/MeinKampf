// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Creeper.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ACreeper : public AEnemy
{
	GENERATED_BODY()

	public:

	void
	attack() override;
	
};
