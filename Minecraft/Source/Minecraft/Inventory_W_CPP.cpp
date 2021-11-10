// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory_W_CPP.h"
#include "Engine/Canvas.h"
#include "HUD_W_CPP.h"
#include "ItemFrame_W_CPP.h"
#include "Containers/Array.h"
#include "MinecraftCharacter.h"

#include <string>

bool UInventory_W_CPP::AddItem(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count)
{
	for (int i = 0; i < Slots.Num(); i++)
	{
		if (Slots[i]->AddItem(_item, _count))
		{
			if (i < 9)
			{
				HUD->UpdateItems(i, Slots[i]->GetItem(), Slots[i]->GetCount());
			}
			return true;	
		}
  }
	return false;
}
bool UInventory_W_CPP::AddItemR(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount)
{
	for (int i = 0; i < Slots.Num(); i++)
	{
		if (Slots[i]->AddItemR(_item, _count, _oCount))
		{
			if (i < 9)
			{
				HUD->UpdateItems(i, Slots[i]->GetItem(), Slots[i]->GetCount());
			}
			return true;
		}

		_count = _oCount;
	}
	return false;
}

void UInventory_W_CPP::SubstractItem(uint8 sub, uint8 slot_num)
{
	Slots[slot_num]->SubstractItem(sub);
	if (slot_num < 9)
	{
		HUD->UpdateItems(slot_num, Slots[slot_num]->GetItem(), Slots[slot_num]->GetCount());
	}
}

void UInventory_W_CPP::SetHUD(UHUD_W_CPP* _hud)
{
	HUD = _hud;
}

void UInventory_W_CPP::SetOwnerPlayer(AMinecraftCharacter* _player)
{
  Player = _player;
}

void UInventory_W_CPP::UpdateItems()
{
  if (Player)
  {
    int numSlots = Player->GetItemsCountC();
    numSlots = numSlots < Slots.Num() ? numSlots : Slots.Num();
    for (int i = 0; i < numSlots; ++i)
    {
      TSubclassOf<class ABaseItem_CPP> Type;
      uint8 Count;
      Player->GetItemC(i, Type, Count);
      Slots[i]->UpdateItems(Type, Count);
    }
  }
}

bool UInventory_W_CPP::AddItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 & _oCount)
{
  if (Player)
  {
    bool r = Player->AddItemC(_item, _count, _oCount);
    UpdateItems();
    return r;
  }
  return false;
}

bool UInventory_W_CPP::SubstractItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 & _oCount)
{
  if (Player)
  {
    bool r = Player->SubstractItemC(_item, _count, _oCount);
    UpdateItems();
    return r;
  }
  return false;
}

bool UInventory_W_CPP::AddSlotItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 _index, uint8 & _oCount)
{
  if (Player)
  {
    bool r = Player->AddSlotItemC(_item, _count, _index, _oCount);
    UpdateItems();
    return r;
  }
  return false;
}

bool UInventory_W_CPP::SubstractSlotItemC(uint8 _count, uint8 _index, uint8 & _oCount)
{
  if (Player)
  {
    bool r = Player->SubstractSlotItemC(_count, _index, _oCount);
    UpdateItems();
    return r;
  }
  return false;
}

bool UInventory_W_CPP::UpdateSlotItemC(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8 _index, uint8& _oCount)
{
  if (Player)
  {
    bool r = Player->SetItemC(_item, _count, _index, _oCount);
    UpdateItems();
    return r;
  }
  return false;
}
