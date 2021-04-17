// Fill out your copyright notice in the Description page of Project Settings.


#include "generator.h"

// Sets default values
Agenerator::Agenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Agenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Agenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FAsyncTask<task>* Agenerator::runtask(int32 n, vector<vector<vector<int>>>* chunk,  bool* vf)
{
	FAsyncTask<task>* at = new FAsyncTask<task>(n, chunk, vf,this);
	at->StartBackgroundTask();
	return at;
}
task::task(int32 num, vector<vector<vector<int>>>* ch, bool* vf, Agenerator* s) {
	n = num;
	chunk = ch;
	b = vf;
	self = s;
}
void task::DoWork() {
	chunk->resize(n);
	FAsyncTask<subtask>* thre;
	
	for (int X = 0; X < n; X++) {
		(*chunk)[X].resize(n);
		//threads.push_back(new FAsyncTask<subtask>((n, &(*chunk)[X])));
		//threads[X]->StartBackgroundTask();
		thre=(new FAsyncTask<subtask>(n, &(*chunk)[X], self));
		thre->StartBackgroundTask();
		threads.push_back(thre);

		//((FAutoDeleteAsyncTask<subtask>*)threads[X])
		//(new FAutoDeleteAsyncTask<subtask>(n, &(*chunk)[X],b))->StartBackgroundTask();
	}
	volatile int x = 0;
	for (int X = 0; X < n; X++) {

		threads[X]->EnsureCompletion();
	}
	*b = true;
}

subtask::subtask(int32 num, vector<vector<int>>* ch, Agenerator* s)
{
	n = num;
	chunk = ch;
	self=s;
}

void subtask::DoWork() {
	chunk->resize(n);
	for (int Y = 0; Y < n; Y++) {
		(*chunk)[Y].resize(n);
		for (int Z = 0; Z < n; Z++) {
			for (int i = 0; i < self->capas.Num(); i++) {
				if (Z > 6 - self->capas[i]) {
					(*chunk)[Y][Z] = i;
					break;
				}
			}
		}
	}
}
