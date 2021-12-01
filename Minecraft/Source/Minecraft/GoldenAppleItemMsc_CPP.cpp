// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenAppleItemMsc_CPP.h"

AGoldenAppleItemMsc_CPP::AGoldenAppleItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/GoldenApple_SM.GoldenApple_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/GoldenApple_image.GoldenApple_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

