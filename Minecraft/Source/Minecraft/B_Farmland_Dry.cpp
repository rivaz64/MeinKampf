// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Farmland_Dry.h"

B_Farmland_Dry::B_Farmland_Dry()
{
  textures[0] = FVector2D(0, 0);
  textures[1] = FVector2D(0, 0);
  textures[2] = FVector2D(0, 0);
  textures[3] = FVector2D(0, 0);
  textures[4] = FVector2D(0, 0);
  textures[5] = FVector2D(0, 0);
  life = 1;
  type = TYPE::BLOCK;
}

B_Farmland_Dry::~B_Farmland_Dry()
{
}
