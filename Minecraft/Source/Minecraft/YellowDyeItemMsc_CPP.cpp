// Fill out your copyright notice in the Description page of Project Settings.


#include "YellowDyeItemMsc_CPP.h"

AYellowDyeItemMsc_CPP::AYellowDyeItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/YellowDye_SM.YellowDye_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/YellowDye_image.YellowDye_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

