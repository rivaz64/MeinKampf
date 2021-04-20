// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include<vector>
#include <mutex>
#include "Async/AsyncWork.h"
#include "generator.generated.h"

using std::vector;

class Agenerator;
class subtask : public FNonAbandonableTask {
public:
	subtask(int32 num, vector<vector<int>>* ch, Agenerator* s,int x);
	int32 n;
	int X;
	
	vector<vector<int>>* chunk;
	Agenerator* self;
	FORCEINLINE TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(subtask, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork();
};

class task : public FNonAbandonableTask {
public:
	task(int32 num, vector<vector<vector<int>>>* ch, bool* v, Agenerator* s);
	int32 n;
	
	bool* b;
	Agenerator* self;
	vector<vector<vector<int>>>* chunk;
	vector<FAsyncTask<subtask>*> threads;
	FORCEINLINE TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(task, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork();
};
UCLASS()
class MINECRAFT_API Agenerator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Agenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame

	int rand2d(int x, int y);
	
	int lx, ly;
	int rands[125];
	bool init = false;
	std::mutex mu;
	vector<vector<float>> gausean;
	UPROPERTY(EditAnywhere)
	int seed;
	UPROPERTY(EditAnywhere)
		int randomnes;
	UPROPERTY(EditAnywhere)
		int alt;
	UPROPERTY(EditAnywhere)
		TArray<int> capas;
	int altnoised(int x, int y);
	int altura(int x, int y);
	int power(int b, int e, int m);
	int interpolation(float ini, float end, float aki);
	virtual void Tick(float DeltaTime) override;
	void spawntrees(vector<vector<vector<int>>>* chunk);
	FAsyncTask<task>* runtask(int32 n, vector<vector<vector<int>>>* chunk, bool* vf,int x,int y);
};


