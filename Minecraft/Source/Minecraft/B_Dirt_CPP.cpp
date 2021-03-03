// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Dirt_CPP.h"

AB_Dirt_CPP::AB_Dirt_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 1;
	Life = 1;
}

void AB_Dirt_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}
