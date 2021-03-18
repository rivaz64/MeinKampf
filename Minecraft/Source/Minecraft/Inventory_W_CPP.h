// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inventory_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UInventory_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
		TArray<class UItemFrame_W_CPP*> Slots;
	UPROPERTY(BlueprintReadWrite)
		class UHUD_W_CPP* HUD;

	UFUNCTION(BlueprintCallable)
		bool AddItem(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count);
	UFUNCTION(BlueprintCallable)
		void SubstractItem(uint8 sub, uint8 slot_num);
	UFUNCTION(BlueprintCallable)
		void SetHUD(class UHUD_W_CPP* _hud);

};
