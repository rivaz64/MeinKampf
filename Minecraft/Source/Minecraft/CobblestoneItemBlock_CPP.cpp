// Fill out your copyright notice in the Description page of Project Settings.


#include "CobblestoneItemBlock_CPP.h"

ACobblestoneItemBlock_CPP::ACobblestoneItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/CobblestoneItem_SM.CobblestoneItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Cobblestone_image.Cobblestone_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}
