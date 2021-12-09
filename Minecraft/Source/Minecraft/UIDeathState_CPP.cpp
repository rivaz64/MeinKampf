// Fill out your copyright notice in the Description page of Project Settings.


#include "UIDeathState_CPP.h"

UIDeathState_CPP::UIDeathState_CPP()
{
}

UIDeathState_CPP::~UIDeathState_CPP()
{
}

void UIDeathState_CPP::Start()
{
}

eSTATE UIDeathState_CPP::Update(eINPUT_TYPE input)
{
  if (input == INPUT_RESPAWN)
  {
    return eSTATE::HUD;
  }
  return eSTATE::DEATH;
}

void UIDeathState_CPP::End()
{
}
