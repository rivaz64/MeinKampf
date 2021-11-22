// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Melon.h"

B_Melon::B_Melon()
{
  textures[0] = FVector2D(8,8);
  textures[1] = FVector2D(8,8);
  textures[2] = FVector2D(8,8);
  textures[3] = FVector2D(8,8);
  textures[4] = FVector2D(8,8);
  textures[5] = FVector2D(8,8);
  life = 1;
  //breaked = 4;
  type = TYPE::BLOCK;
}

B_Melon::~B_Melon()
{
}


B_MStem::B_MStem()
{
  textures[0] = FVector2D(8,8);
  life = 7;
  //breaked = 4;
  type = TYPE::PLANT;
  update = true;
  blockForSpawn = CHUNK_BLOCK::MELON;
}

B_MStem::~B_MStem()
{
}


B_MAtachedStem::B_MAtachedStem()
{
  textures[0] = FVector2D(8,8);
  life = 14;
  //breaked = 4;
  type = TYPE::ATTACHED;
  needSpace = true;
}

B_MAtachedStem::~B_MAtachedStem()
{
}