// Fill out your copyright notice in the Description page of Project Settings.


#include "StonePickaxeItemTool_CPP.h"

AStonePickaxeItemTool_CPP::AStonePickaxeItemTool_CPP()
{
  eToolType = PICKAXE;
  eMaterialType = STONE;
  MaxDurablity = 131;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Stone_PickaxeItem_SM.Stone_PickaxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/StonePickaxe_image.StonePickaxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

