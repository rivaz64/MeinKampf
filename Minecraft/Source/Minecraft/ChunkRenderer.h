// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent/Public/ProceduralMeshComponent.h"
#include "ChunckMesh.h"
#include "HashTable2d.h"
#include "ChunkRenderer.generated.h"

UCLASS()
class MINECRAFT_API AChunkRenderer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AChunkRenderer();
	~AChunkRenderer();
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//ChunckMesh* c;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> mesh;
	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<AActor>> quad;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> ClassOfPlayer;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> item;
	int isinchunckx = 0;
	int isinchuncky = 0;
	char actualBlock;
	//int actualStep = -1;
	void spawnChuncks(int x, int y, int dis);
	void despawnChunks(int x, int y, int dis,int dir);
	HashTable2d* world=nullptr;
	int step = 0;
	AActor *actualQuad=nullptr;
	FVector PointingBlock;
	float life = 0;
	float blockLife=0;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void destroyBlock(FVector pos);
	void desPoint();
	void destroingAt(FVector pos, FVector nor, float delta);
	void placeBlock(FVector pos, FVector nor);
};
