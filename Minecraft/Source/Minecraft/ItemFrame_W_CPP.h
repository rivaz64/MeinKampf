// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemFrame_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UItemFrame_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Frame;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* FrameSelected;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Imagen;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* Count_number;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UProgressBar* DurablityBar;

	UPROPERTY(BlueprintReadOnly)
		TSubclassOf<class ABaseItem_CPP> Item;
	UPROPERTY(BlueprintReadOnly)
		uint8 Count = 0;

	UFUNCTION(BlueprintCallable)
		void SetSelected(bool selected);
	UFUNCTION(BlueprintCallable)
		TSubclassOf<class ABaseItem_CPP> GetItem();
	UFUNCTION(BlueprintCallable)
		uint8 GetCount();
	UFUNCTION(BlueprintCallable)
		bool AddItem(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count);
	UFUNCTION(BlueprintCallable)
		bool AddItemR(TSubclassOf<class ABaseItem_CPP> _item, uint8 _count, uint8& _oCount);
	UFUNCTION(BlueprintCallable)
		void SubstractItem(uint8 sub);
	UFUNCTION(BlueprintCallable)
    bool UpdateItems(TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count);
  UFUNCTION(BlueprintCallable)
    bool UpdateItemsR(TSubclassOf<class ABaseItem_CPP> _itemType, uint8 _count, uint8& _oCount);
};
