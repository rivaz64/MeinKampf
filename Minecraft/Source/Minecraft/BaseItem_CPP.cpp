// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem_CPP.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"
#include "MinecraftCharacter.h"


// Sets default values
ABaseItem_CPP::ABaseItem_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseItem_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseItem_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ABaseItem_CPP::UseItem(ABaseBlock_CPP* block, FVector NormalFace, UWorld* world)
{
	return false;
}

