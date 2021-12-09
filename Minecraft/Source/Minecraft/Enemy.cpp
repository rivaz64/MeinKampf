// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "MinecraftCharacter.h"
#include "Kismet/GameplayStatics.h"

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

void AEnemy::vision()
{
	timeForAttack += delta;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
	if (FoundActors.Num() == 0) {
		return;
	}
	FVector2D vec(FoundActors[0]->GetActorLocation().X-GetActorLocation().X,FoundActors[0]->GetActorLocation().Y-GetActorLocation().Y);
	float angle = fmodf(fmodf(atan2(vec.X,vec.Y)-atan2(velocity.X,velocity.Y),PI*2.f)+PI*2.f,PI*2.f);
	if(!detected){
		if(vec.Size()<1200 && (angle < .75f || PI*2.f-angle <  .75f)){
		detected = true;
		searchPerTime = .1;
		}
	}
	else{
		
		if(delta>.2 && vec.Size()<200){
			attack();
		}
	}


}

void AEnemy::attack()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
	if (FoundActors.Num() == 0) {
		return;
	}
	((AMinecraftCharacter*)FoundActors[0])->Life -= 1;
}
