// Fill out your copyright notice in the Description page of Project Settings.

#include "ChunkRenderer.h"
#include <vector>
#include <algorithm>
#include "BreakingQuad.h"
#include "Kismet/GameplayStatics.h"

//float TEXTURESIZE = 1.f/16.f;
//std::vector<FVector2D> textcords = { FVector2D(0, 0),FVector2D(TEXTURESIZE, 0),FVector2D(0, TEXTURESIZE) };
			
// Sets default values
AChunkRenderer::AChunkRenderer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

AChunkRenderer::~AChunkRenderer()
{
	/*
	if(Chunk::savedData)
	delete Chunk::savedData;
	if(world)
	delete world;*/
}

// Called when the game starts or when spawned
void AChunkRenderer::BeginPlay()
{
	Super::BeginPlay();
	world = new HashTable2d(512);
	Chunk::savedData = new HashTable2d(512);
	//((AChunckMesh*)me)->c.generate(0, 0);
	spawnChuncks(0, 0, 2);
}


void AChunkRenderer::spawnChuncks(int x,int y, int dis)
{
	int rad = dis * 2 + 1;
	for (int i = x - dis; i < x + dis + 1; ++i) {
		for (int o = y - dis; o < y + dis + 1; ++o) {
			if (!world->getNodeAt(i, o)) {
				FTransform trans = FTransform(FVector(i * 1600, o * 1600, 0));
				world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), i, o);
			}
		}
	}
	

}

void AChunkRenderer::despawnChunks(int x, int y, int dis)
{
	for (int i = x - dis; i < x + dis + 1; ++i) {
		for (int o = y - dis; o < y + dis + o; ++i) {
			if (std::max(abs(i - isinchunckx), abs(isinchuncky)) > dis) {
				auto actual = (AChunckMesh*)world->getNodeAt(i, o);
				if (actual) {
					actual->Destroy();
				}
			}
		}
	}
}

void AChunkRenderer::destroingAt(FVector pos, FVector nor, float delta)
{
	//GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, TEXT("Simple message"));
	pos.X = int((pos.X-nor.X) / 100.f);
	pos.Y = int((pos.Y - nor.Y) / 100.f);
	pos.Z = int((pos.Z - nor.Z) / 100.f);
	//auto actualChunk = ((AChunckMesh*)world->getNodeAt(pos.X / 16, pos.Y / 16));
	//actualChunk->destroingAt(pos, nor);
	if(PointingBlock!=pos){
		if(actualQuad != nullptr ){
			actualQuad->Destroy();
		}
		step = 0;
		life = 0;
		PointingBlock = pos;
		auto actualChunk = ((AChunckMesh*)world->getNodeAt(pos.X / 16, pos.Y / 16));
		blockLife = actualChunk->lifeOf(int(pos.X),int(pos.Y),int(pos.Z));
	}
	
	FVector4 data = FVector4(nor.X, nor.Y, nor.Z, 0);
	life += delta*blockLife;
	if (life >= 1) {
		destroyBlock(pos);
		life = 0;
		step = 0;
		actualQuad->Destroy();
	}
	else if(life*quad.Num()>step){
		if(actualQuad != nullptr ){
			actualQuad->Destroy();
		}
		FTransform trans = FTransform(FRotator(-nor.X*90,nor.Z*90,nor.Y*90),pos*100.f+FVector(50,50,50)+nor*51.f,FVector(1,1,1));
		actualQuad = GetWorld()->SpawnActor<AActor>(quad[step], trans);
		step +=1;
	}
		
	
		
}

// Called every frame
void AChunkRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassOfPlayer, FoundActors);
	if (FoundActors.Num()) {
		if (floor(FoundActors[0]->GetActorLocation().X / 1600) != isinchunckx || floor(FoundActors[0]->GetActorLocation().Y / 1600) != isinchuncky) {

			isinchunckx = floor(FoundActors[0]->GetActorLocation().X / 1600);
			isinchuncky = floor(FoundActors[0]->GetActorLocation().Y / 1600);

			spawnChuncks(isinchunckx, isinchuncky,2);
		}
	}


	
}

void AChunkRenderer::destroyBlock(FVector pos)
{
	
	auto actualChunk = ((AChunckMesh*)world->getNodeAt(pos.X / 16, pos.Y / 16));
	world->eraseAt(pos.X / 16, pos.Y / 16);
	actualChunk->destroyBlock((int)pos.X % 16, (int)pos.Y% 16, (int)pos.Z% 16);
	actualChunk->Destroy();
	FTransform trans = FTransform(FVector(((int)pos.X / 16) * 1600, ((int)pos.Y/ 16) * 1600, 0));
	world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), ((int)pos.X / 16), ((int)pos.Y/ 16));
	}

void AChunkRenderer::desPoint()
{
	if(actualQuad != nullptr ){
		actualQuad->Destroy();
	}
	step = 0;
	life = 0;
	PointingBlock = FVector(0,0,0);

}

