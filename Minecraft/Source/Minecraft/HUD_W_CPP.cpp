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
