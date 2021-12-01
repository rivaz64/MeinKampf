// Fill out your copyright notice in the Description page of Project Settings.


#include "CookedPorkchopItemMsc_CPP.h"

ACookedPorkchopItemMsc_CPP::ACookedPorkchopItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/CookedPorkchop_SM.CookedPorkchop_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/CookedPorkchop_image.CookedPorkchop_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

