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
	float timer=0; 
	float timerPoint=7;

	float searchPerTime = 6;

	FVector2D velocity = FVector2D(1,0);

	FVector2D aceleration = FVector2D(0,0);
	
	FVector2D pointToGo = FVector2D(10000,-10000);

	float maxVel = 72.f;


	FVector dir = FVector(0, 0, 0);
	FRotator rot;
	FVector dirs[4] = { FVector(0, 1, 0),FVector(1, 0, 0),FVector(0, -1, 0),FVector(-1, 0, 0) };
	FRotator rots[4]= { FRotator(0, 0, 0),FRotator(0, -90, 0),FRotator(0, 180, 0),FRotator(0, 90, 0) };

	int ndir=0;
	virtual void Tick(float DeltaTime);
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_mesh;
	
	float noise;
	bool eating = true;
	bool caminando;
	float fintime = 0;
	float vel;
	float delta;
	float alt;

	void go();

	virtual void 
	newPoint();

	virtual void choiserotation();
	virtual void choiseaction();
	virtual void choka();
	void hitted();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void
	OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
