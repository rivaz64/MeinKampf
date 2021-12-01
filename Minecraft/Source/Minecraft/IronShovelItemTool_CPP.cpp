// Fill out your copyright notice in the Description page of Project Settings.


#include "IronShovelItemTool_CPP.h"

AIronShovelItemTool_CPP::AIronShovelItemTool_CPP()
{
  eToolType = SHOVEL;
  eMaterialType = IRON;
  MaxDurablity = 250;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Iron_ShovelItem_SM.Iron_ShovelItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/IronShovel_image.IronShovel_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

