// Fill out your copyright notice in the Description page of Project Settings.


#include "B_grass.h"

B_grass::B_grass()
{
  textures[0] = FVector2D(3, 0);
  textures[1] = FVector2D(3, 0);
  textures[2] = FVector2D(2, 0);
  textures[3] = FVector2D(3, 0);
  textures[4] = FVector2D(3, 0);
  textures[5] = FVector2D(0, 0);
  life = 1;
}

B_grass::~B_grass()
{
}
