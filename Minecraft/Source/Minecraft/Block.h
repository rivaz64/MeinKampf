// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>

using std::vector;
/**
vector<Block*> bloks = { 
new B_grass,
new B_stone,
new B_bedRock, 
new B_cobblestone,
new B_wood ,
new B_leaves,
new B_sand};
 */

enum class TYPE{
	BLOCK,
	PLANT,
	QUAD,
	CROPS,
	SMALLBLOCK,
	ATTACHED
};

enum class CHUNK_BLOCK{
	AIR=0,
	GRASS,
	DIRT,
	STONE,
	BEDROCK,
	COBBLESTONE,
	WOOD,
	PLANK,
	LEAVES,
	SAND,
	RED_FLOWER,
	YELLOW_FLOWER,
	SUGAR_CANE,
	FARMLAND_DRY,
	FARMLAND_WET,
	CROP,
	CROP1,
	CROP2,
	CROP3,
	CROP4,
	CROP5,
	CROP6,
	CROP7,
	CRAFTING_TABLE,
	DOOR_UP,
	DOOR_DOWN,
	DOOR_UP_OPEN,
	DOOR_DOWN_OPEN,
	CARROT,
	CARROT1,
	CARROT2,
	CARROT3,
	MELON,
	MELON_STEM,
	MELON_ATTACHED_STEM,
	WATTER
};

class MINECRAFT_API Block
{
	
public:
	FVector2D textures[6];
	float life = 0;
	TSubclassOf<class ABaseItem_CPP> item;
	char breaked;
	TYPE type;
	bool update = false;
	bool needSpace = false;
	CHUNK_BLOCK blockForSpawn;
	Block();
	~Block();
};
