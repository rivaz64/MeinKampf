// Fill out your copyright notice in the Description page of Project Settings.


#include "CobblestoneItemBlock_CPP.h"
#include "Block.h"

ACobblestoneItemBlock_CPP::ACobblestoneItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/CobblestoneItem_SM.CobblestoneItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/Cobblestone_image.Cobblestone_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

int
ACobblestoneItemBlock_CPP::getId(){
  return (int)CHUNK_BLOCK::COBBLESTONE;
}
