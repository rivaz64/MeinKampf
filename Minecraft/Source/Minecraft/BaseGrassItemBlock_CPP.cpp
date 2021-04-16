// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGrassItemBlock_CPP.h"

ABaseGrassItemBlock_CPP::ABaseGrassItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/GrassItem_SM.GrassItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}
}