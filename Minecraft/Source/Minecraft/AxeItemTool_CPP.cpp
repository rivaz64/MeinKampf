// Fill out your copyright notice in the Description page of Project Settings.


#include "AxeItemTool_CPP.h"

AAxeItemTool_CPP::AAxeItemTool_CPP()
{
  eToolType = AXE;
  eMaterialType = WOOD;
  MaxDurablity = 59;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Wooden_AxeItem_SM.Wooden_AxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/WoodenAxe_image.WoodenAxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}