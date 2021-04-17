// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDirtItemBlock_CPP.h"

ABaseDirtItemBlock_CPP::ABaseDirtItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/DirtItem_SM.DirtItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh = BlockAsset.Object;
	}
}