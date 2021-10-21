// Fill out your copyright notice in the Description page of Project Settings.


#include "SandItemBlock_CPP.h"

ASandItemBlock_CPP::ASandItemBlock_CPP()
{
  static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/Items/SandItem_SM.SandItem_SM"));

  if (BlockAsset.Succeeded())
  {
    ItemMesh = BlockAsset.Object;
  }
}

