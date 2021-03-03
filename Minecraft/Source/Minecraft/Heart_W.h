// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Heart_W.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API UHeart_W : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Heart_left;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Heart_right;

	UFUNCTION(BlueprintCallable)
		void UpdateLife(int life);
};
