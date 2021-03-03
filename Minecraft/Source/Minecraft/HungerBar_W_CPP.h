// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HungerBar_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UHungerBar_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UHorizontalBox* Bar;

	UFUNCTION(BlueprintCallable)
		void UpdateHunger(int saturation);
	
};
