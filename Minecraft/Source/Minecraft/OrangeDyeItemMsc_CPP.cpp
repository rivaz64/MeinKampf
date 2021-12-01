// Fill out your copyright notice in the Description page of Project Settings.


#include "OrangeDyeItemMsc_CPP.h"

AOrangeDyeItemMsc_CPP::AOrangeDyeItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/OrangeDye_SM.OrangeDye_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/OrangeDye_image.OrangeDye_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

