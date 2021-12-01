// Fill out your copyright notice in the Description page of Project Settings.


#include "IronSwordItemTool_CPP.h"

AIronSwordItemTool_CPP::AIronSwordItemTool_CPP()
{
  eToolType = SWORD;
  eMaterialType = IRON;
  MaxDurablity = 250;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Iron_SwordItem_SM.Iron_SwordItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/IronSword_image.IronSword_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

