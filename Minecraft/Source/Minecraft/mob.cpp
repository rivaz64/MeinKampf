// Fill out your copyright notice in the Description page of Project Settings.


#include "mob.h"
#include "Kismet/GameplayStatics.h"
#include<algorithm>
#include"mundo.h"
// Sets default values
Amob::Amob()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Amob::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Amob::Tick(float DeltaTime)
{
	if (atakado) {
		uyendo = true;
		timer = durcor + 1;

	}
	timer += DeltaTime;
	if (uyendo) {
		fintime = durcor;
		vel = velcor;
		noise = 5;
	}
	else if (caminando) {
		fintime = durcam;
		vel = velcam;
		noise = 10;
	}
	else {
		fintime = durcomer;
		vel = 0;
	}
	if (timer > fintime) {
		
		timer = 0;
		if (atakado) {
			uyendo = true;
			atakado = false;
			return;
		}
		caminando=!caminando;
		uyendo = false;
		vel = velcam;
		if (rand() % 2 == 0) {
			angle += rand() % 3 * noise + 2 * noise;
		}
		else {
			angle -= rand() % 3 * noise + 2 * noise;
		}
	}
	
	
	Super::Tick(DeltaTime);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Amundo::StaticClass(), FoundActors);
	Amundo* wor=Cast<Amundo>(FoundActors[0]);
	float alt = std::max(std::max( (int(wor->randcord(round(GetActorLocation().X / 100.f+dondedetecta), round(GetActorLocation().Y / 100.f+dondedetecta))) + wor->reacomodar + altu), (int(wor->randcord(round(GetActorLocation().X / 100.f - 1 + dondedetecta), round(GetActorLocation().Y / 100.f + dondedetecta))) + wor->reacomodar + altu)),std::max( (int(wor->randcord(round(GetActorLocation().X / 100.f + dondedetecta), round(GetActorLocation().Y / 100.f - 1 + dondedetecta))) + wor->reacomodar + altu), (int(wor->randcord(round(GetActorLocation().X / 100.f - 1 + dondedetecta), round(GetActorLocation().Y / 100.f - 1 + dondedetecta))) + wor->reacomodar + altu))) * 100.f;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT(" %d"), int(wor->randcord(int(GetActorLocation().X / 100.f), int(GetActorLocation().Y / 100.f)))));
	SetActorLocation(FVector(GetActorLocation().X + vel* DeltaTime*cos(angle), GetActorLocation().Y + vel * DeltaTime*sin(angle), alt));
}

// Called to bind functionality to input
void Amob::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

