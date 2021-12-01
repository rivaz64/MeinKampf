// Fill out your copyright notice in the Description page of Project Settings.


#include "IronIngotItemMsc_CPP.h"

AIronIngotItemMsc_CPP::AIronIngotItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/IronIngot_SM.IronIngot_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/IronIngot_image.IronIngot_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

