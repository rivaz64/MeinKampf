// Fill out your copyright notice in the Description page of Project Settings.


#include "mob.h"
#include "Kismet/GameplayStatics.h"
#include<algorithm>
#include"mundo.h"
// Sets default values
float pi = 3.141592653589793238462;
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
	delta = DeltaTime;
	timer += DeltaTime;
	if (atakado) {
		uyendo = true;
		timer = durcor + 1;

	}
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
		choiseaction();
		vel = velcam;
		choiserotation();

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%f"), angle));
	}


	Super::Tick(DeltaTime);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Amundo::StaticClass(), FoundActors);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT(" %d"), FoundActors.Num()));
	if (FoundActors.Num() > 0) {
		Amundo* wor = Cast<Amundo>(FoundActors[0]);
		alt = std::max(std::max((int(wor->randcord(round(GetActorLocation().X / 100.f + dondedetecta), round(GetActorLocation().Y / 100.f + dondedetecta))) + wor->reacomodar + altu), (int(wor->randcord(round(GetActorLocation().X / 100.f - 1 + dondedetecta), round(GetActorLocation().Y / 100.f + dondedetecta))) + wor->reacomodar + altu)), std::max((int(wor->randcord(round(GetActorLocation().X / 100.f + dondedetecta), round(GetActorLocation().Y / 100.f - 1 + dondedetecta))) + wor->reacomodar + altu), (int(wor->randcord(round(GetActorLocation().X / 100.f - 1 + dondedetecta), round(GetActorLocation().Y / 100.f - 1 + dondedetecta))) + wor->reacomodar + altu))) * 100.f;
		if (wor->istree(round(GetActorLocation().X / 100.f + dondedetecta + distfromtree * vel * DeltaTime * sin(angle / 180 * pi)), round(GetActorLocation().Y / 100.f + dondedetecta + distfromtree * vel * DeltaTime * cos(angle / 180 * pi))) || wor->istree(round(GetActorLocation().X / 100.f + dondedetecta + distfromtree * vel * DeltaTime * sin(angle / 180 * pi)), round(GetActorLocation().Y / 100.f - 1 + dondedetecta + distfromtree * vel * DeltaTime * cos(angle / 180 * pi))) || wor->istree(round(GetActorLocation().X / 100.f - 1 + dondedetecta + distfromtree * vel * DeltaTime * sin(angle / 180 * pi)), round(GetActorLocation().Y / 100.f + dondedetecta + distfromtree * vel * DeltaTime * cos(angle / 180 * pi))) || wor->istree(round(GetActorLocation().X / 100.f - 1 + dondedetecta + distfromtree * vel * DeltaTime * sin(angle / 180 * pi)), round(GetActorLocation().Y / 100.f - 1 + dondedetecta + distfromtree * vel * DeltaTime * cos(angle / 180 * pi)))) {
			choka();
		}
		else//*/
			SetActorLocation(FVector(GetActorLocation().X + vel * DeltaTime * sin(angle / 180 * pi), GetActorLocation().Y + vel * DeltaTime * cos(angle / 180 * pi), alt));

	}
	
	
	SetActorRotation(FRotator(0, -angle + plusangl, 0));
}

void Amob::choiserotation()
{
	if (rand() % 2 == 0) {
		angle += rand() % 3 * noise + 2 * noise;
	}
	else {
		angle -= rand() % 3 * noise + 2 * noise;
	}
}

void Amob::choiseaction()
{
	if (atakado) {
		uyendo = true;
		atakado = false;
		return;
	}
	caminando = !caminando;
	uyendo = false;
}

void Amob::choka()
{
	angle += 180;
	vel *= 2;
	SetActorLocation(FVector(GetActorLocation().X + vel * delta * cos(angle), GetActorLocation().Y + vel * delta * sin(angle), alt));
	vel /= 2;
}

// Called to bind functionality to input
void Amob::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

