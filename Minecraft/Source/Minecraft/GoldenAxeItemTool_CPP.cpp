// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldenAxeItemTool_CPP.h"

AGoldenAxeItemTool_CPP::AGoldenAxeItemTool_CPP()
{
  eToolType = AXE;
  eMaterialType = GOLD;
  MaxDurablity = 32;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Golden_AxeItem_SM.Golden_AxeItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/GoldenAxe_image.GoldenAxe_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

