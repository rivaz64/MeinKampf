// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOakPlankItemBlock_CPP.h"

ABaseOakPlankItemBlock_CPP::ABaseOakPlankItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/OakPlankItem_SM.OakPlankItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/OakPlank_image.OakPlank_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}