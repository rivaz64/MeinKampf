// Fill out your copyright notice in the Description page of Project Settings.


#include "BucketItemMsc_CPP.h"

ABucketItemMsc_CPP::ABucketItemMsc_CPP()
{
  MaxStack = 16;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Misc/Bucket_SM.Bucket_SM"));
  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Misc/Bucket_image.Bucket_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

