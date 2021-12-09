// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD_W_CPP.h"
#include "HungerBar_W_CPP.h"
#include "LifeBar_W_CPP.h"
#include "ItemBar_W_CPP.h"

void UHUD_W_CPP::SetOwnerPlayer(AMinecraftCharacter* _player)
{
  Player = _player;
}

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

bool UHUD_W_CPP::UpdateItems(uint8 _index, TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count)
{
	return ItemBar->UpdateItems(_index, _itemType, _count);
}
