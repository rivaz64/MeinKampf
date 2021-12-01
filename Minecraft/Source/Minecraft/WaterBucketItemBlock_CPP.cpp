// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterBucketItemBlock_CPP.h"

AWaterBucketItemBlock_CPP::AWaterBucketItemBlock_CPP()
{
  MaxStack = 1;
  Singled = true;

  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/Blocks/WaterBucket_SM.WaterBucket_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/WaterBucket_image.WaterBucket_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

