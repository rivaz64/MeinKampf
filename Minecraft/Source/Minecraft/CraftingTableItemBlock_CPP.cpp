// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftingTableItemBlock_CPP.h"

ACraftingTableItemBlock_CPP::ACraftingTableItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/CraftingTable_SM.CraftingTable_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}
}