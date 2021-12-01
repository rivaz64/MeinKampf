// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneSwordItemTool_CPP.h"

AStoneSwordItemTool_CPP::AStoneSwordItemTool_CPP()
{
  eToolType = SWORD;
  eMaterialType = STONE;
  MaxDurablity = 131;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Stone_SwordItem_SM.Stone_SwordItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/StoneSword_image.StoneSword_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

