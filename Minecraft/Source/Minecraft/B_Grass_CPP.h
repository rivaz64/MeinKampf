// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBlock_CPP.h"
#include "B_Grass_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API AB_Grass_CPP : public ABaseBlock_CPP
{
	GENERATED_BODY()

public:
	int id = 1;
	int getid();
	AB_Grass_CPP();
	
};
