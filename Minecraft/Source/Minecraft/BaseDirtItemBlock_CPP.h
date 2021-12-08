// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItemBlock_CPP.h"
#include "BaseDirtItemBlock_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ABaseDirtItemBlock_CPP : public ABaseItemBlock_CPP
{
	GENERATED_BODY()
	
 public:

	int
	getId();

	ABaseDirtItemBlock_CPP();
};
