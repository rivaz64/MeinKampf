// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Oak_Leaves_CPP.h"


int AB_Oak_Leaves_CPP::getid()
{
	return id;
}

AB_Oak_Leaves_CPP::AB_Oak_Leaves_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 0.5f;
	Life = MaxLife;
}