// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondHoeItemTool_CPP.h"

ADiamondHoeItemTool_CPP::ADiamondHoeItemTool_CPP()
{
  eToolType = HOE;
  eMaterialType = DIAMOND;
  MaxDurablity = 1561;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Diamond_HoeItem_SM.Diamond_HoeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/DiamondHoe_image.DiamondHoe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

