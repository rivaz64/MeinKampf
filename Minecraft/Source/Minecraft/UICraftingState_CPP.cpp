// Fill out your copyright notice in the Description page of Project Settings.


#include "UICraftingState_CPP.h"

UICraftingState_CPP::UICraftingState_CPP()
{
}

UICraftingState_CPP::~UICraftingState_CPP()
{
}

void UICraftingState_CPP::Start()
{
}

eSTATE UICraftingState_CPP::Update(eINPUT_TYPE input)
{
  if (input == INPUT_E || input == INPUT_ESC)
  {
    return eSTATE::HUD;
  }
  return eSTATE::INVENTORY;
}

void UICraftingState_CPP::End()
{
}