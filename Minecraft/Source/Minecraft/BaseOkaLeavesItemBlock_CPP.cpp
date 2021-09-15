// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOkaLeavesItemBlock_CPP.h"

ABaseOkaLeavesItemBlock_CPP::ABaseOkaLeavesItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/OakLeavesItem_SM.OakLeavesItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}
}

