// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockOfCoalItemBlock_CPP.h"

ABlockOfCoalItemBlock_CPP::ABlockOfCoalItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/BlockOfCoal_SM.BlockOfCoal_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/BlockOfCoal_image.BlockOfCoal_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

