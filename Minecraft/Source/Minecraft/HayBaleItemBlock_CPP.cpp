// Fill out your copyright notice in the Description page of Project Settings.


#include "HayBaleItemBlock_CPP.h"

AHayBaleItemBlock_CPP::AHayBaleItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/HayBale_SM.HayBale_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/HayBale_image.HayBale_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

