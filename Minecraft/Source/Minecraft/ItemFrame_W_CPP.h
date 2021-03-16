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

	UFUNCTION(BlueprintCallable)
		void SetSelected(bool selected);
};
