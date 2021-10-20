// Fill out your copyright notice in the Description page of Project Settings.


#include "B_sand.h"

B_sand::B_sand()
{
  textures[0] = FVector2D(2, 1);
  textures[1] = FVector2D(2, 1);
  textures[2] = FVector2D(2, 1);
  textures[3] = FVector2D(2, 1);
  textures[4] = FVector2D(2, 1);
  textures[5] = FVector2D(2, 1);
  life = 1;
  breaked = 7;
  type = TYPE::BLOCK;
}

B_sand::~B_sand()
{
}
