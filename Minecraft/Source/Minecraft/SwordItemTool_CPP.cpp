// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordItemTool_CPP.h"

ASwordItemTool_CPP::ASwordItemTool_CPP()
{
  eToolType = SWORD;
  eMaterialType = WOOD;
  MaxDurablity = 59;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Wooden_SwordItem_SM.Wooden_SwordItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/WoodenSword_image.WoodenSword_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}
