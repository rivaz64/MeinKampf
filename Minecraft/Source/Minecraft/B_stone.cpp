// Fill out your copyright notice in the Description page of Project Settings.


#include "B_stone.h"

B_stone::B_stone()
{
  textures[0] = FVector2D(1, 0);
  textures[1] = FVector2D(1, 0);
  textures[2] = FVector2D(1, 0);
  textures[3] = FVector2D(1, 0);
  textures[4] = FVector2D(1, 0);
  textures[5] = FVector2D(1, 0);
  life = .5;
  breaked = 4;
  type = TYPE::BLOCK;
}

B_stone::~B_stone()
{
}
