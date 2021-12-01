// Fill out your copyright notice in the Description page of Project Settings.


#include "MelonSliceItemMsc_CPP.h"

AMelonSliceItemMsc_CPP::AMelonSliceItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/MelonSlice_SM.MelonSlice_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/MelonSlice_image.MelonSlice_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

