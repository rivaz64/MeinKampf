// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>

using std::vector;

/**
 * 
 */
class MINECRAFT_API Cube
{
public:
	vector<FVector2D> textures;
	Cube();
	~Cube();
};
