// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <string>
#include <vector>
#include<map>
#include "blockspawner.h"
#include "generator.h"
#include <mutex>
#include "terreno.generated.h"

class task;
using std::string;
using std::vector;
using std::map;
using std::mutex;
UCLASS()
class MINECRAFT_API Aterreno : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aterreno();
	UPROPERTY(EditAnywhere)
		int chunksize=0;
	
	vector<string> coords;
	vector<string> tempcoords;
	map<string, vector<vector<vector<int>>>> cubitos;
	map<string, bool> listos;
	vector<vector<vector<int>>>* actualchunk;
	map <string, AActor*>cubes;
	vector<string>spawnedchunks;
	mutex lok;
	bool building;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> ClassOfPlayer;
	int isinchunckx = 0;
	int isinchuncky = 0;
	UPROPERTY(EditAnywhere)
		Ablockspawner* spawner;
	UPROPERTY(EditAnywhere)
		Agenerator* generador;//*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	void deleteblock(int x, int y, int z);
	void createchuncks(int x,int y);
	bool createchunck(int x, int y);
	void spawnchunk(int x, int y);
	void usingchunk(int x, int y);
	void usingchunk(int x, int y, vector<vector<vector<int>>>** tc);
	bool checkifspawn( int x,  int y,  int z);
	void destroyblockat(int x,int y,int z);
	void createblockat(int x, int y, int z);
	bool checkifready(vector<vector<vector<int>>>* ch, int x, int y);
	virtual void Tick(float DeltaTime) override;

};

class sit : public FNonAbandonableTask {
public:
	sit(int chs, int tx, int px, int py, vector<vector<int>>* vpos, vector<vector<vector<int>>>* ac, Aterreno* t);
	int chunksize, X,x,y;
	vector<vector<int>>* posis;
	vector<vector<vector<int>>>* actualchunk;
	Aterreno* ter;
	FORCEINLINE TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(sit, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork();
};