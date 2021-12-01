// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockOfGoldItemBlock_CPP.h"

ABlockOfGoldItemBlock_CPP::ABlockOfGoldItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/BlockOfGold_SM.BlockOfGold_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/BlockOfGold_image.BlockOfGold_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

