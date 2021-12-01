// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenSwordItemTool_CPP.h"

AGoldenSwordItemTool_CPP::AGoldenSwordItemTool_CPP()
{
  eToolType = SWORD;
  eMaterialType = GOLD;
  MaxDurablity = 32;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Golden_SwordItem_SM.Golden_SwordItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/GoldenSword_image.GoldenSword_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

