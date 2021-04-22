// Fill out your copyright notice in the Description page of Project Settings.


#include "B_CraftingTable_CPP.h"
#include "Blueprint/UserWidget.h"
#include "CraftingTable_W_CPP.h"

int AB_CraftingTable_CPP::getid()
{
	return 6;
}

AB_CraftingTable_CPP::AB_CraftingTable_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxLife = 1;
	Life = 1;
}

bool AB_CraftingTable_CPP::Interacted(TSubclassOf<class ABaseItem_CPP> item, FVector NormalFace)
{
	/*if (InsideMenuClass == nullptr) return false;

	InsideMenu = CreateWidget<UCraftingTable_W_CPP>(InsideMenu, InsideMenuClass);
	if (InsideMenu == nullptr) return false;

	InsideMenu->AddToViewport();

	// Set the reference to the interface object
	//InsideMenu->SetMenuInteraface(this);*/
	OpenWidget = true;
	return false;
}
