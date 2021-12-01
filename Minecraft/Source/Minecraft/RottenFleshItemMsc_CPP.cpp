// Fill out your copyright notice in the Description page of Project Settings.


#include "RottenFleshItemMsc_CPP.h"

ARottenFleshItemMsc_CPP::ARottenFleshItemMsc_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/RottenFlesh_SM.RottenFlesh_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/RottenFlesh_image.RottenFlesh_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

