// Fill out your copyright notice in the Description page of Project Settings.


#include "HungerBar_W_CPP.h"
#include "Components/HorizontalBox.h"
#include "Chicken_W_CPP.h"

void UHungerBar_W_CPP::UpdateHunger(int saturation)
{
	auto slots = Bar->GetSlots();
	for (int i = slots.Num() - 1; i >= 0; i--)
	{
		auto chicken = Cast<UChicken_W_CPP>(slots[i]->Content);
		if (chicken != nullptr)
		{
			chicken->UpdateHunger(saturation);
			saturation -= 2;
		}
	}
}