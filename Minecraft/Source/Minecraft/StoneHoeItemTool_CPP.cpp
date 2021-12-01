// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneHoeItemTool_CPP.h"

AStoneHoeItemTool_CPP::AStoneHoeItemTool_CPP()
{
  eToolType = HOE;
  eMaterialType = STONE;
  MaxDurablity = 131;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Stone_HoeItem_SM.Stone_HoeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/StoneHoe_image.StoneHoe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

