// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemFrame_W_CPP.h"
#include "Components/Image.h"

void UItemFrame_W_CPP::SetSelected(bool selected)
{
	if (selected)
	{
		FrameSelected->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		FrameSelected->SetVisibility(ESlateVisibility::Hidden);
	}
}

