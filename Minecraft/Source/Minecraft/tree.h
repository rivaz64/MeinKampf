// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>
#include "GameFramework/Actor.h"
#include "tree.generated.h"
using std::vector;
UCLASS()
class MINECRAFT_API Atree : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Atree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> tronco;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> hojas;
	vector<void*> cubes;
	static void spawn(int x, int y, int z,  vector<vector<vector<int>>>* chunk);
	virtual void Tick(float DeltaTime) override;
	virtual void Destroy();
	~Atree();
};
