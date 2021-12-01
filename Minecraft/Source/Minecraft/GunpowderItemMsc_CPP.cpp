// Fill out your copyright notice in the Description page of Project Settings.


#include "GunpowderItemMsc_CPP.h"

AGunpowderItemMsc_CPP::AGunpowderItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/Gunpowder_SM.Gunpowder_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/Gunpowder_image.Gunpowder_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

