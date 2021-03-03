// Fill out your copyright notice in the Description page of Project Settings.


#include "Chicken_W_CPP.h"
#include "Components/Image.h"

void UChicken_W_CPP::UpdateHunger(int saturation)
{
	if (saturation >= 2)
	{
		Chicken_Full->SetVisibility(ESlateVisibility::Visible);
		Chicken_Halfed->SetVisibility(ESlateVisibility::Visible);
	}
	else if (saturation == 1)
	{
		Chicken_Full->SetVisibility(ESlateVisibility::Hidden);
		Chicken_Halfed->SetVisibility(ESlateVisibility::Visible);
	}
	else if (saturation <= 0)
	{
		Chicken_Full->SetVisibility(ESlateVisibility::Hidden);
		Chicken_Halfed->SetVisibility(ESlateVisibility::Hidden);
	}
}