// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockOfDiamondItemBlock_CPP.h"

ABlockOfDiamondItemBlock_CPP::ABlockOfDiamondItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/BlockOfDiamond_SM.BlockOfDiamond_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/BlockOfDiamond_image.BlockOfDiamond_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

