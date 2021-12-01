// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondOreItemBlock_CPP.h"

ADiamondOreItemBlock_CPP::ADiamondOreItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/DiamondOre_SM.DiamondOre_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/DiamondOre_image.DiamondOre_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

