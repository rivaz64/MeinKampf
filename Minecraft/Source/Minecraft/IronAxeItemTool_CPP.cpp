// Fill out your copyright notice in the Description page of Project Settings.


#include "IronAxeItemTool_CPP.h"

AIronAxeItemTool_CPP::AIronAxeItemTool_CPP()
{
  eToolType = AXE;
  eMaterialType = IRON;
  MaxDurablity = 250;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Iron_AxeItem_SM.Iron_AxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/IronAxe_image.IronAxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

