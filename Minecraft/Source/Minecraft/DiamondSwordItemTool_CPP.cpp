// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondSwordItemTool_CPP.h"

ADiamondSwordItemTool_CPP::ADiamondSwordItemTool_CPP()
{
  eToolType = SWORD;
  eMaterialType = DIAMOND;
  MaxDurablity = 1561;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Diamond_SwordItem_SM.Diamond_SwordItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/DiamondSword_image.DiamondSword_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

