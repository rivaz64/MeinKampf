// Fill out your copyright notice in the Description page of Project Settings.


#include "ShearsItemTool_CPP.h"

AShearsItemTool_CPP::AShearsItemTool_CPP()
{
  eToolType = SHEARS;
  eMaterialType = IRON;
  MaxDurablity = 238;
  Durablity = MaxDurablity;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Tools/Shears_SM.Shears_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Tools/Shears_image.Shears_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

