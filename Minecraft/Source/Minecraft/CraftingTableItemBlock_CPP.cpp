// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftingTableItemBlock_CPP.h"
#include "Block.h"

ACraftingTableItemBlock_CPP::ACraftingTableItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/CraftingTable_SM.CraftingTable_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/CraftingTable_image.CraftingTable_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

int
ACraftingTableItemBlock_CPP::getId(){
  return (int)CHUNK_BLOCK::CRAFTING_TABLE;
}