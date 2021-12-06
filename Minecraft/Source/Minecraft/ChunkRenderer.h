// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ChunckMesh.h"
#include "HashTable2d.h"
#include <list>
#include <vector>
#include "ChunkManager.h"
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
		TSubclassOf<AActor> sand;
	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<AActor>> quad;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> ClassOfPlayer;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> item;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> sheep;

	UPROPERTY(EditAnywhere)
		int cual;

	UPROPERTY(EditAnywhere)
	bool load = false;


	int isinchunckx = 0;
	int isinchuncky = 0;
	char actualBlock;
	//int actualStep = -1;
	void spawnChuncks(int x, int y, int dis);
	void despawnChunks(int x, int y, int dis,int dir);

	std::map<int,std::shared_ptr<std::map<int,AChunckMesh*>>> world;

	void
	spawnChunkAt(int x, int y);

	void 
	despawnChunk(int x, int y);

	/**
	 * @brief spawns the chunk
	*/
	AChunckMesh*
	getChunkAt(int x, int y);

	int step = 0;
	AActor *actualQuad=nullptr;
	FVector PointingBlock;
	float life = 0;
	float blockLife=0;
	
	bool sandFall = false;
	FVector sandFallingAt;

	bool watter = false;
  std::list<FVector4> watterAt;
	std::vector<FVector2D> forRegen;

	std::list<FVector> farmlands;
	std::list<FVector> crops;
	std::list<FVector> updates;

	std::vector<FVector> waitingForRemake;

	int watterLevel = 8;

	float watterUpdate = 0;

	float cropUpdate = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void destroyBlock(FVector pos);
	void desPoint();
	void destroingAt(FVector pos, FVector nor, float delta);
	void placeBlock(FVector pos, FVector nor);
	void placeBlock(FVector pos, FVector nor,char type);

	
	

	UFUNCTION(BlueprintCallable)
	void placeSand(FVector pos);

  bool watterCheck(FVector& v);

	bool checkForSpawn(FVector& v);

	void 
	explodeAt(const FVector& place, float radius);

	void 
	regenerate(const FVector2D& place);
	void 
	regenerate(int x,int y);

	std::shared_ptr<ChunkManager> manager;

	bool inPlay = false;
	
	FVector playerPos;


};
