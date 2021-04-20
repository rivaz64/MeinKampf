// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "mob.generated.h"

UCLASS()
class MINECRAFT_API Amob : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Amob();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	bool falling=true;
	bool mov = false;
	float* actual,*velmov;
	int distrec = 0;
	int distrecor = 0;
	FVector dir = FVector(0, 0, 0);
	FRotator rot;
	FVector dirs[4] = { FVector(0, 1, 0),FVector(1, 0, 0),FVector(0, -1, 0),FVector(-1, 0, 0) };
	FRotator rots[4]= { FRotator(0, 0, 0),FRotator(0, -90, 0),FRotator(0, 180, 0),FRotator(0, 90, 0) };

	int ndir=0;
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
		float gravity = 216;
	UPROPERTY(EditAnywhere)
		float velcam = 36;
	UPROPERTY(EditAnywhere)
		float camdist = 6;
	UPROPERTY(EditAnywhere)
		float waitime = 3;
	UPROPERTY(EditAnywhere)
		float velcor = 432;
	UPROPERTY(EditAnywhere)
		float cordist = 36;
	UPROPERTY(EditAnywhere)
		float vidas = 3;
	UPROPERTY(EditAnywhere)
		bool uyendo = false;
	UPROPERTY(EditAnywhere)
		bool hit = false;
	UPROPERTY(EditAnywhere)
		float dondedetecta = 0;
	UPROPERTY(EditAnywhere)
		float plusangl = 0;
	UPROPERTY(EditAnywhere)
		float distfromtree = 0;
	float noise;
	bool eating = true;
	bool caminando;
	float timer = 0;
	float fintime = 0;
	float vel;
	float delta;
	float alt;
	virtual void choiserotation();
	virtual void choiseaction();
	virtual void choka();
	void hitted();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
