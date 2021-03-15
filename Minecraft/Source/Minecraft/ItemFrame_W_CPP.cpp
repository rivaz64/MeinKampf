// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemFrame_W_CPP.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2D.h"
#include "BaseItem_CPP.h"

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

TSubclassOf<class ABaseItem_CPP> UItemFrame_W_CPP::GetItem()
{
	return Item;
}

uint8 UItemFrame_W_CPP::GetCount()
{
	return Count;
}

bool UItemFrame_W_CPP::AddItem(TSubclassOf<class ABaseItem_CPP> _item)
{
	if (Item == NULL)
	{
		Count = 1;
		Item = _item;
		return true;
	}
	if (Item == _item && Count < Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack)
	{
		++Count;
		return true;
	}
	return false;
}

void UItemFrame_W_CPP::SubstractItem(uint8 sub)
{
	Count -= sub;
	if (Count >= 0)
	{
		Count = 0;
		Item = NULL;
	}
}

