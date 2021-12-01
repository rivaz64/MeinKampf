// Fill out your copyright notice in the Description page of Project Settings.


#include "IronPickaxeItemTool_CPP.h"

AIronPickaxeItemTool_CPP::AIronPickaxeItemTool_CPP()
{
  eToolType = PICKAXE;
  eMaterialType = IRON;
  MaxDurablity = 250;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Iron_PickaxeItem_SM.Iron_PickaxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/IronPickaxe_image.IronPickaxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

