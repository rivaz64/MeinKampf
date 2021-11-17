// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

enum class eSTATE
{
  NONE = -1,
  HUD,
  INVENTORY,
  CRAFTING,
  MENU,
  OVEN,
  COUNT
};

UENUM()
enum eINPUT_TYPE
{
  INPUT_NONE = -1,
  INPUT_E,
  INPUT_ESC,
  INPUT_OPEN_CRAFTING,
  INPUT_OPEN_OVEM
};

/**
 * 
 */
class MINECRAFT_API UIState_CPP
{
public:
	UIState_CPP();
	virtual ~UIState_CPP();

  virtual void Start() = 0;
  virtual eSTATE Update(eINPUT_TYPE input) = 0;
  virtual void End() = 0;
};
