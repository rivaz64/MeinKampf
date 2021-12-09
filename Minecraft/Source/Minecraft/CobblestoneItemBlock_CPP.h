// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItemBlock_CPP.h"
#include "CobblestoneItemBlock_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ACobblestoneItemBlock_CPP : public ABaseItemBlock_CPP
{
	GENERATED_BODY()

public:
	ACobblestoneItemBlock_CPP();

	int
	getId();
	
};
