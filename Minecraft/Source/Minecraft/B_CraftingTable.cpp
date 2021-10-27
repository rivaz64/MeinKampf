// Fill out your copyright notice in the Description page of Project Settings.


#include "B_CraftingTable.h"

B_CraftingTable::B_CraftingTable()
{
  textures[0] = FVector2D(11, 3);
  textures[1] = FVector2D(12, 3);
  textures[2] = FVector2D(4, 0);
  textures[3] = FVector2D(11, 3);
  textures[4] = FVector2D(12, 3);
  textures[5] = FVector2D(11, 2);
  life = 1;
  breaked = 1;
  //item = ABaseGrassItemBlock_CPP::StaticClass();
  type = TYPE::BLOCK;
}

B_CraftingTable::~B_CraftingTable()
{
}
