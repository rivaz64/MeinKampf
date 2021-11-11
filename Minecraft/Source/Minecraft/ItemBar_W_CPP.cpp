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

bool UItemBar_W_CPP::UpdateItems(uint8 _index, TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count)
{
	auto slots = Bar->GetSlots();
  if (_index < slots.Num())
  {
	  auto frame = Cast<UItemFrame_W_CPP>(slots[_index]->Content);
	  if (frame != NULL)
	  	return frame->UpdateItems(_itemType, _count);
	  return false;
  }
  return false;

}

