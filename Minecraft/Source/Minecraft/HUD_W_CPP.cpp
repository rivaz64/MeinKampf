// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD_W_CPP.h"
#include "HungerBar_W_CPP.h"
#include "LifeBar_W_CPP.h"
#include "ItemBar_W_CPP.h"

void UHUD_W_CPP::UpdateHunger(int saturation)
{
	HungerBar->UpdateHunger(saturation);
}

void UHUD_W_CPP::UpdateLife(int life, int maxLife)
{
	LifeBar->UpdateLife(life, maxLife);
}

void UHUD_W_CPP::SetSelected(int itemSelected)
{
	ItemBar->SetSelected(itemSelected);
}

TSubclassOf<class ABaseItem_CPP> UHUD_W_CPP::GetItem(uint8 slot_num)
{
	return ItemBar->GetItem(slot_num);
}

uint8 UHUD_W_CPP::GetCount(uint8 slot_num)
{
	return ItemBar->GetCount(slot_num);
}

bool UHUD_W_CPP::AddItem(TSubclassOf<class ABaseItem_CPP> item)
{
	return ItemBar->AddItem(item);
}

void UHUD_W_CPP::SubstractItem(uint8 sub, uint8 slot_num)
{
	ItemBar->SubstractItem(sub, slot_num);
}
