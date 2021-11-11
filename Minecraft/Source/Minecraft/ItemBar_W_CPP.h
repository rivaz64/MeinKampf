// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemBar_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UItemBar_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UHorizontalBox* Bar;

	UFUNCTION(BlueprintCallable)
		void SetSelected(int itemSelected);
	UFUNCTION(BlueprintCallable)
		bool UpdateItems(uint8 _index, TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count);
};
