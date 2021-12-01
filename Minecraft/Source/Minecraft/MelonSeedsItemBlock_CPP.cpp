// Fill out your copyright notice in the Description page of Project Settings.


#include "MelonSeedsItemBlock_CPP.h"

AMelonSeedsItemBlock_CPP::AMelonSeedsItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/MelonSeeds_SM.MelonSeeds_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/MelonSeeds_image.MelonSeeds_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

