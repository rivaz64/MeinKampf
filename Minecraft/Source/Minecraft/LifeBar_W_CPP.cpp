// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeBar_W_CPP.h"
#include "Components/HorizontalBox.h"
#include "Heart_W.h"

void ULifeBar_W_CPP::UpdateLife(int life, int maxLife)
{
	auto slots = Bar->GetSlots();
	for (int i = 0; i < slots.Num(); i++)
	{
		auto heart = Cast<UHeart_W>(slots[i]->Content);
		if (heart != nullptr)
		{
			heart->UpdateLife(life);
			life -= 2;
		}
	}
}
