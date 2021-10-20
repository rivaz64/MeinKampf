// Fill out your copyright notice in the Description page of Project Settings.


#include "b_leaves.h"

B_leaves::B_leaves()
{
  textures[0] = FVector2D(4, 3);
  textures[1] = FVector2D(4, 3);
  textures[2] = FVector2D(4, 3);
  textures[3] = FVector2D(4, 3);
  textures[4] = FVector2D(4, 3);
  textures[5] = FVector2D(4, 3);
  life = 8;
  breaked = 4;
  type = TYPE::BLOCK;
}

B_leaves::~B_leaves()
{
}
