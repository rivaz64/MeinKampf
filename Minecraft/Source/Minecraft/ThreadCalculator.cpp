// Fill out your copyright notice in the Description page of Project Settings.


#include "ThreadCalculator.h"

// Sets default values
AThreadCalculator::AThreadCalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThreadCalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThreadCalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

