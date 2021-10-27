// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Door.h"

B_Door_Up::B_Door_Up()
{
  textures[0] = FVector2D(1, 5);
  textures[1] = FVector2D(1, 5);
  textures[2] = FVector2D(1, 5);
  textures[3] = FVector2D(1, 5);
  textures[4] = FVector2D(1, 5);
  textures[5] = FVector2D(1, 5);
  life = 1;
  type = TYPE::QUAD;
}

B_Door_Up::~B_Door_Up()
{
}

B_Door_Down::B_Door_Down()
{
  textures[0] = FVector2D(1, 6);
  textures[1] = FVector2D(1, 6);
  textures[2] = FVector2D(1, 6);
  textures[3] = FVector2D(1, 6);
  textures[4] = FVector2D(1, 6);
  textures[5] = FVector2D(1, 6);
  life = 1;
  type = TYPE::QUAD;
}

B_Door_Down::~B_Door_Down()
{
}
