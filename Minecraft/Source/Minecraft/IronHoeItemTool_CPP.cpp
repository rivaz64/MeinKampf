// Fill out your copyright notice in the Description page of Project Settings.


#include "IronHoeItemTool_CPP.h"

AIronHoeItemTool_CPP::AIronHoeItemTool_CPP()
{
  eToolType = HOE;
  eMaterialType = IRON;
  MaxDurablity = 250;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Iron_HoeItem_SM.Iron_HoeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/IronHoe_image.IronHoe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

