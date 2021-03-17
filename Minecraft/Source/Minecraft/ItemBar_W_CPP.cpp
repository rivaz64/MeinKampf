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

TSubclassOf<class ABaseItem_CPP> UItemBar_W_CPP::GetItem(uint8 slot_num)
{
	auto slots = Bar->GetSlots();
	auto frame = Cast<UItemFrame_W_CPP>(slots[slot_num]->Content);
	if (frame != NULL)
		return frame->GetItem();
	return NULL;
}

uint8 UItemBar_W_CPP::GetCount(uint8 slot_num)
{
	auto slots = Bar->GetSlots();
	auto frame = Cast<UItemFrame_W_CPP>(slots[slot_num]->Content);
	if (frame != NULL)
		return frame->GetCount();
	return 0;
}

bool UItemBar_W_CPP::AddItem(TSubclassOf<class ABaseItem_CPP> _item)
{
	auto slots = Bar->GetSlots();
	for (int i = 0; i < slots.Num(); i++)
	{
		auto frame = Cast<UItemFrame_W_CPP>(slots[i]->Content);
		if (frame != NULL && frame->AddItem(_item))
		{
			return true;
		}
	}
	return false;
}

void UItemBar_W_CPP::SubstractItem(uint8 sub, uint8 slot_num)
{
	auto slots = Bar->GetSlots();
	auto frame = Cast<UItemFrame_W_CPP>(slots[slot_num]->Content);
	if (frame != NULL)
		frame->SubstractItem(sub);
}

