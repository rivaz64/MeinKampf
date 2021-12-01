// Fill out your copyright notice in the Description page of Project Settings.


#include "RawMuttonItemMsc_CPP.h"

ARawMuttonItemMsc_CPP::ARawMuttonItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/RawMutton_SM.RawMutton_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/RawMutton_image.RawMutton_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

