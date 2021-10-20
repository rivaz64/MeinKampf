// Fill out your copyright notice in the Description page of Project Settings.


#include "B_cobblestone.h"

B_cobblestone::B_cobblestone()
{
  textures[0] = FVector2D(0, 1);
  textures[1] = FVector2D(0, 1);
  textures[2] = FVector2D(0, 1);
  textures[3] = FVector2D(0, 1);
  textures[4] = FVector2D(0, 1);
  textures[5] = FVector2D(0, 1);
  life = .5;
  breaked = 4;
  type = TYPE::BLOCK;
}

B_cobblestone::~B_cobblestone()
{
}
