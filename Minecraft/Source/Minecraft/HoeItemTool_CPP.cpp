// Fill out your copyright notice in the Description page of Project Settings.


#include "HoeItemTool_CPP.h"

AHoeItemTool_CPP::AHoeItemTool_CPP()
{
  eToolType = HOE;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Wooden_HoeItem_SM.Wooden_HoeItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/WoodenHoe_image.WoodenHoe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

