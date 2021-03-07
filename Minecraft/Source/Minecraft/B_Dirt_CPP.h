// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBlock_CPP.h"
#include "B_Dirt_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API AB_Dirt_CPP : public ABaseBlock_CPP
{
	GENERATED_BODY()

public:
	AB_Dirt_CPP();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
