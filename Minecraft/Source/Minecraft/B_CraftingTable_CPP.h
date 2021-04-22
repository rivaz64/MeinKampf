// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBlock_CPP.h"
#include "B_CraftingTable_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API AB_CraftingTable_CPP : public ABaseBlock_CPP
{
	GENERATED_BODY()
	
public:
	int id = 6;
	int getid();
	AB_CraftingTable_CPP();
	virtual bool Interacted(TSubclassOf<class ABaseItem_CPP> item, FVector NormalFace);
};
