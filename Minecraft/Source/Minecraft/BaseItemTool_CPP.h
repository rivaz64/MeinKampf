// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem_CPP.h"
#include "BaseItemTool_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ABaseItemTool_CPP : public ABaseItem_CPP
{
	GENERATED_BODY()
	

public:
	ABaseItemTool_CPP();

	virtual bool UseItem(class ABaseBlock_CPP* block, FVector NormalFace, UWorld* world){ return false; }

public:
	float MiningSpeed = 1.5f	;
};
