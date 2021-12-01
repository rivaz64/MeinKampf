// Fill out your copyright notice in the Description page of Project Settings.


#include "WheatSeedsItemBlock_CPP.h"

AWheatSeedsItemBlock_CPP::AWheatSeedsItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/WheatSeeds_SM.WheatSeeds_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/WheatSeeds_image.WheatSeeds_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

