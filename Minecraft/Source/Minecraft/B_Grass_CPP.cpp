// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Grass_CPP.h"

AB_Grass_CPP::AB_Grass_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 1;
	Life = 1;
}

bool AB_Grass_CPP::Interacted(TSubclassOf<class ABaseItem_CPP> item, FVector NormalFace)
{
	return true;
}
