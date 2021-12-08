// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Plank.h"

B_Plank::B_Plank()
{
  textures[0] = FVector2D(4, 0);
  textures[1] = FVector2D(4, 0);
  textures[2] = FVector2D(4, 0);
  textures[3] = FVector2D(4, 0);
  textures[4] = FVector2D(4, 0);
  textures[5] = FVector2D(4, 0);
  life = 1;
  breaked = (int)CHUNK_BLOCK::PLANK;
  type = TYPE::BLOCK;
}

B_Plank::~B_Plank()
{
}
