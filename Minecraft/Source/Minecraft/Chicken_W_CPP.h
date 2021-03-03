// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Chicken_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UChicken_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Chicken_Full;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Chicken_Halfed;

	UFUNCTION(BlueprintCallable)
		void UpdateHunger(int saturation);
};
