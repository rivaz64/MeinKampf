// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <queue>
#include<vector>
#include <string>
#include<map>
#include "GameFramework/Actor.h"
#include "blockspawner.generated.h"
using std::queue;
using std::vector;
using std::string;
using std::map;
UCLASS()
class MINECRAFT_API Ablockspawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Ablockspawner();
	queue<vector<vector<int>>> posis;
	queue<vector<int>> deletes;
	UPROPERTY(EditAnywhere)
		int spawnsPerFrame = 1;
	UPROPERTY(EditAnywhere)
		int deletesPerFrame = 1;
	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<AActor>> capas;//*/
	map <string, map <string, AActor*>>cubes;
	bool* building;
	bool begin = false;
	void deletechunk(string coord);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
