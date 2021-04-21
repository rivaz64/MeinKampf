// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Oak_Log_CPP.h"

AB_Oak_Log_CPP::AB_Oak_Log_CPP()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 1.2f;
	Life = 1;
}

int AB_Oak_Log_CPP::getid()
{
	return 4;
}
