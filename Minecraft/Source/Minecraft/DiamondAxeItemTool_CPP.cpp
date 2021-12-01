// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondAxeItemTool_CPP.h"

ADiamondAxeItemTool_CPP::ADiamondAxeItemTool_CPP()
{
  eToolType = AXE;
  eMaterialType = DIAMOND;
  MaxDurablity = 1561;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Diamond_AxeItem_SM.Diamond_AxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/DiamondAxe_image.DiamondAxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

