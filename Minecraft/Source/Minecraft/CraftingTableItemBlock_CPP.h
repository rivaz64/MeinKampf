// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItemBlock_CPP.h"
#include "CraftingTableItemBlock_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ACraftingTableItemBlock_CPP : public ABaseItemBlock_CPP
{
	GENERATED_BODY()
	
public:

  int
	getId();

	ACraftingTableItemBlock_CPP();

};
