// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MINECRAFT_API UIStateMachine_CPP
{
public:
	UIStateMachine_CPP();
	~UIStateMachine_CPP();

  void Init();
  void Update(class AMinecraftCharacter* player);

 private:
   TArray<class UIState_CPP*> States;
};
