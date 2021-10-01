// Fill out your copyright notice in the Description page of Project Settings.


#include "B_wood.h"

B_wood::B_wood()
{
  textures[0] = FVector2D(4, 1);
  textures[1] = FVector2D(4, 1);
  textures[2] = FVector2D(5, 1);
  textures[3] = FVector2D(4, 1);
  textures[4] = FVector2D(4, 1);
  textures[5] = FVector2D(5, 1);
  life = .5;
  breaked = 5;
}

B_wood::~B_wood()
{
}
