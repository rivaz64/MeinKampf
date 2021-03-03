// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItemBlock_CPP.h"
#include "BaseBlock_CPP.h"
#include "Engine/World.h"

ABaseItemBlock_CPP::ABaseItemBlock_CPP()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/GrassItem_SM.GrassItem_SM"));

	if (BlockAsset.Succeeded())
	{
		ItemMesh->SetStaticMesh(BlockAsset.Object);
	}

	eItemType = BLOCK;
}

void ABaseItemBlock_CPP::BeginPlay()
{
	Super::BeginPlay();

}

void ABaseItemBlock_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseItemBlock_CPP::UseItem(ABaseBlock_CPP* blockPointing, FVector NormalFace, UWorld* world)
{
	FVector a = blockPointing->GetActorLocation() + NormalFace * 100;
	PlaceBlock(&a, world);
}

void ABaseItemBlock_CPP::PlaceBlock(FVector* pos, UWorld* world)
{
	FRotator rot = { 0,0,0 };
	world->SpawnActor(BlockClass, pos, &rot);
}
