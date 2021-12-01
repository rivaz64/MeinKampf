// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondPickaxeItemTool_CPP.h"

ADiamondPickaxeItemTool_CPP::ADiamondPickaxeItemTool_CPP()
{
  eToolType = PICKAXE;
  eMaterialType = DIAMOND;
  MaxDurablity = 1561;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Diamond_PickaxeItem_SM.Diamond_PickaxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/DiamondPickaxe_image.DiamondPickaxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

