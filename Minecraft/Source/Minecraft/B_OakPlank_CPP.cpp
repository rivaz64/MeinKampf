// Fill out your copyright notice in the Description page of Project Settings.


#include "B_OakPlank_CPP.h"

AB_OakPlank_CPP::AB_OakPlank_CPP()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 1;
	Life = 1;
}

int AB_OakPlank_CPP::getid()
{
	return 5;
}
