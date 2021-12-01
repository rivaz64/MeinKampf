// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenHoeItemTool_CPP.h"

AGoldenHoeItemTool_CPP::AGoldenHoeItemTool_CPP()
{
  eToolType = HOE;
  eMaterialType = GOLD;
  MaxDurablity = 32;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Golden_HoeItem_SM.Golden_HoeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/GoldenHoe_image.GoldenHoe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

