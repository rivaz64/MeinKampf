// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenPickaxeItemTool_CPP.h"

AGoldenPickaxeItemTool_CPP::AGoldenPickaxeItemTool_CPP()
{
  eToolType = PICKAXE;
  eMaterialType = GOLD;
  MaxDurablity = 32;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Golden_PickaxeItem_SM.Golden_PickaxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/GoldenPickaxe_image.GoldenPickaxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

