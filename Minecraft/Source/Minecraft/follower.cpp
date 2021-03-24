// Fill out your copyright notice in the Description page of Project Settings.


#include "follower.h"
#include "Kismet/GameplayStatics.h"
void Afollower::choiserotation()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
	if (FoundActors.Num() == 0) {
		return;
	}
	float dify = FoundActors[0]->GetActorLocation().Y - GetActorLocation().Y;
	float difx = FoundActors[0]->GetActorLocation().X - GetActorLocation().X;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%f      %f"), abs(difx), abs(dify)));
	float sep;
	if (difx == 0 || dify == 0)
		sep = separation;
	else {
		sep = abs(difx) / abs(dify);
		if (sep < 1)
			sep = 1 / sep;
	}
	
	if (abs(sep < separation)) {
		angle = 0;
		if (difx > 0) {
			angle += 90;
		}
		else
			angle += 270;
		if (dify > 0) {
			angle += 0;
		}
		else
			angle += 180;
		angle /= 2.f;
	}
	else {
		if (abs(difx) > abs(dify)) {
			if (difx > 0) {
				angle = 90;
			}
			else
				angle = -90;
		}
		else {
			if (dify > 0) {
				angle = 0;
			}
			else
				angle = 180;
		}
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%f"), angle));
}

void Afollower::choka()
{
	angle += 90;
	vel *= 2;
	SetActorLocation(FVector(GetActorLocation().X + vel * delta * cos(angle), GetActorLocation().Y + vel * delta * sin(angle), alt));
	vel /= 2;
}

/*void Afollower::choiseaction()
{

}*/
