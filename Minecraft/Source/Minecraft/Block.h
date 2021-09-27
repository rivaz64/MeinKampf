// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>

using std::vector;
/**
 * 
 */
class MINECRAFT_API Block
{
	
public:
	FVector2D textures[6];
	float life = 0;
	TSubclassOf<class ABaseItem_CPP> item;
	char breaked;
	Block();
	~Block();
};
