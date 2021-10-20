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

bool UItemFrame_W_CPP::AddItem(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count)
{
	if (_count != 0 && _item != NULL)
	{
		if (Item == NULL)
		{
			Count = _count;
			_count = 0;
			Item = _item;
			return true;
		}
		if (Item == _item)
		{
			if (Count + _count <= Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack)
			{
				Count += _count;
				_count = 0;
				return true;
			}
			else
			{
				Count = Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
				_count -= Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
				return false;
			}
		}
	}
	return false;
}

bool UItemFrame_W_CPP::AddItemR(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount)
{
	if (_count != 0 && _item != NULL)
	{
		if (Item == NULL)
		{
			Item = _item;
			if (_count <= Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack)
			{
				Count = _count;
				_oCount = 0;
				return true;
			}
			else
			{
				_oCount = _count - Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
				Count = Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
				return false;
			}
		}
		if (Item == _item)
		{
			if (Count + _count <= Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack)
			{
				Count += _count;
				_oCount = 0;
				return true;
			}
			else
			{
				_oCount = _count + Count - Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
				Count = Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
				return false;
			}
		}
	}
	return false;
}

void UItemFrame_W_CPP::SubstractItem(uint8 sub)
{
	if (Count != 0)
	{
		Count -= sub;
		if (Count == 0)
		{
			Count = 0;
			Item = NULL;
			return;
		}
	}
}

bool UItemFrame_W_CPP::UpdateItems(TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count)
{
	Count = _count;
	if (_count == 0)
	{
		Item = NULL;
	}
	else
	{
		Item = _itemType;
	}
	return true;
}

bool UItemFrame_W_CPP::UpdateItemsR(TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count, uint8& _oCount)
{
  if (_count <= Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack)
	{
    Count = _count;
    if (_count == 0)
    {
      Item = NULL;
    }
    else
    {
      Item = _itemType;
    }
		_oCount = 0;
	  return true;
	}
	else
	{
	  Count = Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
    _oCount = _count - Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
    Item = _itemType;
		return false;
	}
  return true;
}

