// Fill out your copyright notice in the Description page of Project Settings.


#include "tree.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
Atree::Atree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atree::BeginPlay()
{
	Super::BeginPlay();
	float x = GetActorLocation().X;
	float y = GetActorLocation().Y;
	float z = GetActorLocation().Z;
	int alt = rand() % 3;
	int i;
	int o;
	for ( i = 0; i < alt + 5; i++) {
		cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(tronco, FTransform(FVector(x, y, z+i*100)))));
	}
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x, y, z + (alt+5) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x+100, y, z + (alt + 5) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x, y+100, z + (alt + 5) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x-100, y, z + (alt + 5) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x, y-100, z + (alt + 5) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x+100, y, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x+100, y+100, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x+100, y-100, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x, y+100, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x, y-100, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x-100, y, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x-100, y+100, z + (alt + 4) * 100)))));
	cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x-100, y-100, z + (alt + 4) * 100)))));
	for (i = -2; i < 3; i++) {
		for (o = -2; o < 3; o++) {
			if (i != 0 || o != 0) {
				cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x+i*100, y+o*100, z + (alt + 3) * 100)))));
			}
		}
	}
	for (i = -2; i < 3; i++) {
		for (o = -2; o < 3; o++) {
			if (i != 0 || o != 0) {
				cubes.push_back((void*)(GetWorld()->SpawnActor<AActor>(hojas, FTransform(FVector(x + i * 100, y + o * 100, z + (alt + 2) * 100)))));
			}
		}
	}
	
}

// Called every frame
void Atree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Atree::Destroy()
{
	for (void* i : cubes) {
		((AActor*)i)->Destroy();
	}
	Super::Destroy();
}

Atree::~Atree()
{
	
	
}

