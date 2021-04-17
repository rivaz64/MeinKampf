// Fill out your copyright notice in the Description page of Project Settings.


#include "blockspawner.h"

// Sets default values
Ablockspawner::Ablockspawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void Ablockspawner::deletechunk(string coord)
{
	for (std::pair<string, AActor*> c : cubes[coord]) {
		c.second->Destroy();
	}
	cubes.erase(coord);
}

// Called when the game starts or when spawned
void Ablockspawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablockspawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FTransform trans;
	for (int i = 0; i < spawnsPerFrame; i++) {
		if (posis.size() > 0) {
			for (vector<int> a : posis.front()) {
				if (a.size() == 4) {
					trans = FTransform(FVector(a[0], a[1], a[2]) * 100);
					cubes["x" + std::to_string(int(floor(float(a[0]) / 16.f))) + "y" + std::to_string(int(floor(float(a[1]) / 16.f)))].insert({ "x" + std::to_string(a[0]) + "y" + std::to_string(a[1]) + "z" + std::to_string(a[2]),GetWorld()->SpawnActor<AActor>(capas[a[3]-1], trans) });
				}
			}
			posis.pop();
			begin = true;
		}
		
		//cubes.insert({ "x" + std::to_string(x) + "y" + std::to_string(y) + "z" + std::to_string(z), });

	}//*/
	for (int i = 0; i < deletesPerFrame; i++){
		if (deletes.size() > 0) {
			string local = "x" + std::to_string(int(floor(float(deletes.front()[0]) / 16.f))) + "y" + std::to_string(int(floor(float(deletes.front()[1]) / 16.f)));
			string cords = "x" + std::to_string(deletes.front()[0]) + "y" + std::to_string(deletes.front()[1]) + "z" + std::to_string(deletes.front()[2]);
			cubes[local][cords]->Destroy();
			cubes[local].erase(cords);
			deletes.pop();
			begin = true;
		}
	}
	if (posis.size() == 0 && deletes.size() == 0) {
		*building = false;
	}
}


