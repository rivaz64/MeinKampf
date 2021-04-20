// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItemBlock_CPP.h"
#include "BaseBlock_CPP.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include"terreno.h"
#include "MinecraftCharacter.h"

ABaseItemBlock_CPP::ABaseItemBlock_CPP()
{
	eItemType = BLOCK;
	Durablity = 1;
	MaxDurablity = 1;
	MaxStack = 64;
	Singled = false;
}

void ABaseItemBlock_CPP::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseItemBlock_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ABaseItemBlock_CPP::UseItem(ABaseBlock_CPP* blockPointing, FVector NormalFace, UWorld* world)
{
	if (blockPointing != NULL)
	{
		FVector a = blockPointing->GetActorLocation()/100 + NormalFace;
		PlaceBlock(&a, world);
		return true;
	}
	return false;
}

void ABaseItemBlock_CPP::PlaceBlock(FVector* pos, UWorld* world)
{
	FRotator rot = { 0,0,0 };
	//TSubclassOf<class ABaseBlock_CPP> BlockClass;
	//BlockClass.GetDefaultObject()
	//world->SpawnActor(BlockClass, pos, &rot);
	TArray<AActor*> FoundActors;
	ClassOf = Aterreno::StaticClass();
	UGameplayStatics::GetAllActorsOfClass(world, ClassOf, FoundActors);
	
	if (FoundActors.Num() > 0) {
		((Aterreno*)FoundActors[0])->createblockat(pos->X, pos->Y, pos->Z, BlockClass->GetDefaultObject<ABaseBlock_CPP>()->getid());
	}
}
