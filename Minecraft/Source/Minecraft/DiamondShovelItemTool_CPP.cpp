// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondShovelItemTool_CPP.h"

ADiamondShovelItemTool_CPP::ADiamondShovelItemTool_CPP()
{
  eToolType = SHOVEL;
  eMaterialType = DIAMOND;
  MaxDurablity = 1561;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Diamond_ShovelItem_SM.Diamond_ShovelItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/DiamondShovel_image.DiamondShovel_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

