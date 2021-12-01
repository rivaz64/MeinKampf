// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneAxeItemTool_CPP.h"

AStoneAxeItemTool_CPP::AStoneAxeItemTool_CPP()
{
  eToolType = AXE;
  eMaterialType = STONE;
  MaxDurablity = 131;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Stone_AxeItem_SM.Stone_AxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/StoneAxe_image.StoneAxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

