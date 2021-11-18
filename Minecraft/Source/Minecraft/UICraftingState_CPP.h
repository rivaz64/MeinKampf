// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UIState_CPP.h"

/**
 *
 */
class MINECRAFT_API UICraftingState_CPP : public UIState_CPP
{
public:
  UICraftingState_CPP();
  ~UICraftingState_CPP();

  void Start() override;
  eSTATE Update(eINPUT_TYPE input) override;
  void End() override;
};
