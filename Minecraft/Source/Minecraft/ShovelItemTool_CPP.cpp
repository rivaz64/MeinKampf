// Fill out your copyright notice in the Description page of Project Settings.


#include "ShovelItemTool_CPP.h"

AShovelItemTool_CPP::AShovelItemTool_CPP()
{
  eToolType = SHOVEL;
  eMaterialType = WOOD;
  MaxDurablity = 59;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Wooden_ShovelItem_SM.Wooden_ShovelItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/WoodenShovel_image.WoodenShovel_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}
