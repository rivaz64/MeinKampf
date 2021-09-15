// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBlock_CPP.h"
#include "B_Oak_Leaves_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API AB_Oak_Leaves_CPP : public ABaseBlock_CPP
{
	GENERATED_BODY()

public:
	int id = 7;
	int getid();
	AB_Oak_Leaves_CPP();
	
};
