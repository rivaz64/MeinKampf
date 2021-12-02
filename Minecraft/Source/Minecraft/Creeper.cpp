// Fill out your copyright notice in the Description page of Project Settings.


#include "Creeper.h"
#include "ChunkRenderer.h"
#include "Kismet/GameplayStatics.h"

void ACreeper::attack()
{
  TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AChunkRenderer::StaticClass(), FoundActors);
	if (FoundActors.Num() == 0) {
		return;
	}
	auto v = GetActorLocation();
	((AChunkRenderer*)FoundActors[0])->explodeAt(FVector(floor(v.X/100.f),floor(v.Y/100.f),floor(v.Z/100.f)),3.f);
  Destroy();
}