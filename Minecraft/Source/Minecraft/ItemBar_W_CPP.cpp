// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBar_W_CPP.h"
#include "Components/HorizontalBox.h"
#include "ItemFrame_W_CPP.h"

void UItemBar_W_CPP::SetSelected(int itemSelected)
{
	auto slots = Bar->GetSlots();
	for (int i = 0; i < slots.Num(); i++)
	{
		auto frame = Cast<UItemFrame_W_CPP>(slots[i]->Content);
		if (frame != nullptr)
		{
			frame->SetSelected(i == itemSelected);
		}
	}
}

