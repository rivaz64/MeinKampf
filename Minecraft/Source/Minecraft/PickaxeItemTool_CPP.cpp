// Fill out your copyright notice in the Description page of Project Settings.


#include "PickaxeItemTool_CPP.h"

APickaxeItemTool_CPP::APickaxeItemTool_CPP()
{
  eToolType = PICKAXE;
  eMaterialType = WOOD;
  MaxDurablity = 59;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Wooden_PickaxeItem_SM.Wooden_PickaxeItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/WoodenPickaxe_image.WoodenPickaxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}
