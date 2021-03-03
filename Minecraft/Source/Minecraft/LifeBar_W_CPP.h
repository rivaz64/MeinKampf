// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LifeBar_W_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ULifeBar_W_CPP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UHorizontalBox* Bar;
	
	UFUNCTION(BlueprintCallable)
		void UpdateLife(int life, int maxLife);
};
