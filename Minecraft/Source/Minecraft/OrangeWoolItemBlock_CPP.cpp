// Fill out your copyright notice in the Description page of Project Settings.


#include "OrangeWoolItemBlock_CPP.h"

AOrangeWoolItemBlock_CPP::AOrangeWoolItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/OrangeWool_SM.OrangeWool_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/OrangeWool_image.OrangeWool_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

