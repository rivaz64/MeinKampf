// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseStoneItemBlock_CPP.h"

ABaseStoneItemBlock_CPP::ABaseStoneItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/StoneItem_SM.StoneItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/Stone_image.Stone_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}