// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneShovelItemTool_CPP.h"

AStoneShovelItemTool_CPP::AStoneShovelItemTool_CPP()
{
  eToolType = SHOVEL;
  eMaterialType = STONE;
  MaxDurablity = 131;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Stone_ShovelItem_SM.Stone_ShovelItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/StoneShovel_image.StoneShovel_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

