// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Grass_CPP.h"

int AB_Grass_CPP::getid()
{
	return 1;
}

AB_Grass_CPP::AB_Grass_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 1;
	Life = 1;
}
