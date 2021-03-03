// Fill out your copyright notice in the Description page of Project Settings.


#include "Heart_W.h"
#include "Components/Image.h"

void UHeart_W::UpdateLife(int life)
{
	if (life >= 2)
	{
		Heart_right->SetVisibility(ESlateVisibility::Visible);
		Heart_left->SetVisibility(ESlateVisibility::Visible);
	}
	else if (life == 1)
	{
		Heart_right->SetVisibility(ESlateVisibility::Hidden);
		Heart_left->SetVisibility(ESlateVisibility::Visible);
	}
	else if (life <= 0)
	{
		Heart_right->SetVisibility(ESlateVisibility::Hidden);
		Heart_left->SetVisibility(ESlateVisibility::Hidden);
	}
}
