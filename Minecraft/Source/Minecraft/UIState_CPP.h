// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

enum class eSTATE
{
  NONE = 0,
  HUD,
  INVENTORY,
  CRAFTING,
  OVEN,
  PAUSE,
  DEATH,
  COUNT
};

UENUM()
enum eINPUT_TYPE
{
  INPUT_NONE = 0,
  INPUT_E,
  INPUT_ESC,
  INPUT_OPEN_CRAFTING,
  INPUT_OPEN_OVEM,
  INPUT_DIE,
  INPUT_RESPAWN
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
