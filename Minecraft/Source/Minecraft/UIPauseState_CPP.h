// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UIState_CPP.h"

/**
 *
 */
class MINECRAFT_API UIPauseState_CPP : public UIState_CPP
{
public:
  UIPauseState_CPP();
  ~UIPauseState_CPP();

  void Start() override;
  eSTATE Update(eINPUT_TYPE input) override;
  void End() override;
};