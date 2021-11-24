// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOakLogItemBlock_CPP.h"

ABaseOakLogItemBlock_CPP::ABaseOakLogItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/OakLogItem_SM.OakLogItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/OakLog_image.OakLog_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}