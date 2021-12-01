// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenShovelItemTool_CPP.h"

AGoldenShovelItemTool_CPP::AGoldenShovelItemTool_CPP()
{
  eToolType = SHOVEL;
  eMaterialType = GOLD;
  MaxDurablity = 32;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Golden_ShovelItem_SM.Golden_ShovelItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/GoldenShovel_image.GoldenShovel_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

