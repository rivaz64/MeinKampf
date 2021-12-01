// Fill out your copyright notice in the Description page of Project Settings.


#include "follower.h"
#include "Kismet/GameplayStatics.h"

/*void Afollower::choiseaction()
{

}*/

Afollower::Afollower()
{
 PrimaryActorTick.bCanEverTick = true;

}

void Afollower::BeginPlay()
{
  searchPerTime = .01;
}

void Afollower::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
}

void Afollower::newPoint()
{
  timerPoint = 0;
  TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
	if (FoundActors.Num() == 0) {
		return;
	}
  pointToGo = FVector2D(FoundActors[0]->GetActorLocation().X,FoundActors[0]->GetActorLocation().Y);
}
