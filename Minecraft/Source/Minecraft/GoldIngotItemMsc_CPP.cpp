// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldIngotItemMsc_CPP.h"

AGoldIngotItemMsc_CPP::AGoldIngotItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/GoldIngot_SM.GoldIngot_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/GoldIngot_image.GoldIngot_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

