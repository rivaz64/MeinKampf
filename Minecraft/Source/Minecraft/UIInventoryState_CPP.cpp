// Fill out your copyright notice in the Description page of Project Settings.


#include "UIInventoryState_CPP.h"

UIInventoryState_CPP::UIInventoryState_CPP()
{
}

UIInventoryState_CPP::~UIInventoryState_CPP()
{
}

void UIInventoryState_CPP::Start()
{
}

eSTATE UIInventoryState_CPP::Update(eINPUT_TYPE input)
{
  if (input == INPUT_DIE)
  {
    return eSTATE::DEATH;
  }
  if (input == INPUT_E || input == INPUT_ESC)
  {
    return eSTATE::HUD;
  }
  return eSTATE::INVENTORY;
}

void UIInventoryState_CPP::End()
{
}
