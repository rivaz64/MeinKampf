// Fill out your copyright notice in the Description page of Project Settings.


#include "WhiteWoolItemBlock_CPP.h"

AWhiteWoolItemBlock_CPP::AWhiteWoolItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/WhiteWool_SM.WhiteWool_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/WhiteWool_image.WhiteWool_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

