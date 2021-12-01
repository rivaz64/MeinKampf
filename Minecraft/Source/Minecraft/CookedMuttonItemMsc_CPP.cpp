// Fill out your copyright notice in the Description page of Project Settings.


#include "CookedMuttonItemMsc_CPP.h"

ACookedMuttonItemMsc_CPP::ACookedMuttonItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/CookedMutton_SM.CookedMutton_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/CookedMutton_image.CookedMutton_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

