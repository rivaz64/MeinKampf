// Fill out your copyright notice in the Description page of Project Settings.


#include "RawPorkchopItemMsc_CPP.h"

ARawPorkchopItemMsc_CPP::ARawPorkchopItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/RawPorkchop_SM.RawPorkchop_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/RawPorkchop_image.RawPorkchop_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

