// Fill out your copyright notice in the Description page of Project Settings.


#include "SugarCaneItemBlock_CPP.h"

ASugarCaneItemBlock_CPP::ASugarCaneItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/SugarCane_SM.SugarCane_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/SugarCane_image.SugarCane_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

