// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOakLogItemBlock_CPP.h"

ABaseOakLogItemBlock_CPP::ABaseOakLogItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/OakLogItem_SM.OakLogItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}
}