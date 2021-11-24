// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOkaLeavesItemBlock_CPP.h"

ABaseOkaLeavesItemBlock_CPP::ABaseOkaLeavesItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/OakLeavesItem_SM.OakLeavesItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
  }

  static ConstructorHelpers::FObjectFinder<UTexture2D> ImageAsset(TEXT("/Game/Mara/Materials/Images/Items/Blocks/OakLeaves_image.OakLeaves_image"));
  if (ImageAsset.Succeeded())
  {
    Image = ImageAsset.Object;
  }
}

