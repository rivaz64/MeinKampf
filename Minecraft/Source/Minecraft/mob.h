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
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
		float velcam = 1;
	UPROPERTY(EditAnywhere)
		float velcor = 2;
	UPROPERTY(EditAnywhere)
		float angle = 90;
	UPROPERTY(EditAnywhere)
		float altu = 0;
	UPROPERTY(EditAnywhere)
		float durcor = 5;
	UPROPERTY(EditAnywhere)
		float durcam = 6;
	UPROPERTY(EditAnywhere)
		float durcomer = 2;
	UPROPERTY(EditAnywhere)
		bool uyendo = false;
	UPROPERTY(EditAnywhere)
		bool atakado = false;
	float noise;
	bool eating = true;
	bool caminando;
	float timer = 0;
	float fintime = 0;
	float vel;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
