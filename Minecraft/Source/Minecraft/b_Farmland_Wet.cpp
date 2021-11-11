// Fill out your copyright notice in the Description page of Project Settings.


#include "b_Farmland_Wet.h"

B_Farmland_Wet::B_Farmland_Wet()
{
  textures[0] = FVector2D(2, 0);
  textures[1] = FVector2D(2, 0);
  textures[2] = FVector2D(2, 0);
  textures[3] = FVector2D(2, 0);
  textures[4] = FVector2D(2, 0);
  textures[5] = FVector2D(6,5);
  life = 1;
  breaked = (int)CHUNK_BLOCK::DIRT;
  type = TYPE::BLOCK;
}

B_Farmland_Wet::~B_Farmland_Wet()
{
}
