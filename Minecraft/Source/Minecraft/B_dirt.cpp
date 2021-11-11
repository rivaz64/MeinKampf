// Fill out your copyright notice in the Description page of Project Settings.


#include "B_dirt.h"

B_dirt::B_dirt()
{
  textures[0] = FVector2D(2, 0);
  textures[1] = FVector2D(2, 0);
  textures[2] = FVector2D(2, 0);
  textures[3] = FVector2D(2, 0);
  textures[4] = FVector2D(2, 0);
  textures[5] = FVector2D(2, 0);
  life = 1;
  breaked = (int)CHUNK_BLOCK::DIRT;
  type = TYPE::BLOCK;
}

B_dirt::~B_dirt()
{
}
