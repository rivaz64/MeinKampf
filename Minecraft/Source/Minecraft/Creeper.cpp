// Fill out your copyright notice in the Description page of Project Settings.


#include "Creeper.h"
#include "ChunkRenderer.h"
#include "MinecraftCharacter.h"
#include "Kismet/GameplayStatics.h"

void ACreeper::attack()
{
  TArray<AActor*> FoundActors;
	TArray<AActor*> FoundActors1;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors1);
	if (FoundActors1.Num() == 0) {
		return;
	}
	((AMinecraftCharacter*)FoundActors1[0])->Life -= 3;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AChunkRenderer::StaticClass(), FoundActors);
	if (FoundActors.Num() == 0) {
		return;
	}
	auto v = GetActorLocation();
	((AChunkRenderer*)FoundActors[0])->explodeAt(FVector(floor(v.X/100.f),floor(v.Y/100.f),floor(v.Z/100.f)),3.f);
  Destroy();
}