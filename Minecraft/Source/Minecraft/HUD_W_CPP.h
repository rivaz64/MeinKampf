// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUD_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UHUD_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UHungerBar_W_CPP* HungerBar;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class ULifeBar_W_CPP* LifeBar;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UItemBar_W_CPP* ItemBar;

	UFUNCTION(BlueprintCallable)
		void UpdateHunger(int saturation);

	UFUNCTION(BlueprintCallable)
		void UpdateLife(int life, int maxLife);

	UFUNCTION(BlueprintCallable)
		void SetSelected(int itemSelected);
	UFUNCTION(BlueprintCallable)
		bool UpdateItems(uint8 _index, TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count);
	
};
