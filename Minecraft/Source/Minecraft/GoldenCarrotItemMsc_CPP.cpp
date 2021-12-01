// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenCarrotItemMsc_CPP.h"

AGoldenCarrotItemMsc_CPP::AGoldenCarrotItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/GoldenCarrot_SM.GoldenCarrot_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/GoldenCarrot_image.GoldenCarrot_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

