// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

void AEnemy::newPoint()
{
		if(detected){
		timerPoint = 0;
		searchPerTime = .1;
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
		if (FoundActors.Num() == 0) {
			return;
		}
		pointToGo = FVector2D(FoundActors[0]->GetActorLocation().X,FoundActors[0]->GetActorLocation().Y);
	}
	else{
		Super::newPoint();
	}
}