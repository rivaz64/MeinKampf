// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockOfIronItemBlock_CPP.h"

ABlockOfIronItemBlock_CPP::ABlockOfIronItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/BlockOfIron_SM.BlockOfIron_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/BlockOfIron_image.BlockOfIron_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

