// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldNuggetItemMsc_CPP.h"

AGoldNuggetItemMsc_CPP::AGoldNuggetItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/GoldNugget_SM.GoldNugget_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/GoldNugget_image.GoldNugget_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

