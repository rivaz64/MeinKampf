// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseStoneItemBlock_CPP.h"

ABaseStoneItemBlock_CPP::ABaseStoneItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/StoneItem_SM.StoneItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}
}