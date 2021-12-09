// Fill out your copyright notice in the Description page of Project Settings.


#include "UIPauseState_CPP.h"

UIPauseState_CPP::UIPauseState_CPP()
{
}

UIPauseState_CPP::~UIPauseState_CPP()
{
}

void UIPauseState_CPP::Start()
{
}

eSTATE UIPauseState_CPP::Update(eINPUT_TYPE input)
{
  if (input == INPUT_ESC)
  {
    return eSTATE::HUD;
  }
  return eSTATE::PAUSE;
}

void UIPauseState_CPP::End()
{
}

