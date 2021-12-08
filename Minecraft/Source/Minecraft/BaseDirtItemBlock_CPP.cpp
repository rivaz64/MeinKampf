// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDirtItemBlock_CPP.h"
#include "Block.h"

int ABaseDirtItemBlock_CPP::getId()
{
	return (int)CHUNK_BLOCK::DIRT;
}

ABaseDirtItemBlock_CPP::ABaseDirtItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/DirtItem_SM.DirtItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/Dirt_image.Dirt_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}