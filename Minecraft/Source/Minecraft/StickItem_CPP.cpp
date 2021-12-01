// Fill out your copyright notice in the Description page of Project Settings.


#include "StickItem_CPP.h"

AStickItem_CPP::AStickItem_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/StickItem_SM.StickItem_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/Stick_image.Stick_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}