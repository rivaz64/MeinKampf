// Fill out your copyright notice in the Description page of Project Settings.


#include "UIHUDState_CPP.h"

UIHUDState_CPP::UIHUDState_CPP()
{
}

UIHUDState_CPP::~UIHUDState_CPP()
{
}

void UIHUDState_CPP::Start()
{
}

eSTATE UIHUDState_CPP::Update(eINPUT_TYPE input)
{
  if (input == INPUT_DIE)
  {
    return eSTATE::DEATH;
  }
  if (input == INPUT_E)
  {
    return eSTATE::INVENTORY;
  }
  if (input == INPUT_ESC)
  {
    return eSTATE::PAUSE;
  }
  if (input == INPUT_OPEN_CRAFTING)
  {
    return eSTATE::CRAFTING;
  }
  return eSTATE::HUD;
}

void UIHUDState_CPP::End()
{
}
