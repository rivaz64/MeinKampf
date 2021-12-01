// Fill out your copyright notice in the Description page of Project Settings.


#include "mob.h"
#include "Kismet/GameplayStatics.h"
#include<algorithm>
#include"mundo.h"
#include"terreno.h"
// Sets default values
float pi = 3.141592653589793238462;
Amob::Amob()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Super Mesh"));
	m_mesh->SetSimulatePhysics(true);
	//m_mesh->OnComponentHit.AddDynamic(this, &Amob::OnHit);
}

// Called when the game starts or when spawned
void Amob::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Amob::Tick(float DeltaTime)
{
	timerPoint+=DeltaTime;
	if(timerPoint>searchPerTime){
		newPoint();
	}
	go();
	velocity+=aceleration*DeltaTime;
	timer+=DeltaTime;
	if(velocity.Size()>maxVel){
		velocity = velocity.GetSafeNormal()*maxVel;
	}
	SetActorLocation(GetActorLocation()+FVector(velocity.X,velocity.Y,0)*DeltaTime);
	m_mesh->SetWorldRotation(FRotator(0,atan2(-velocity.X,velocity.Y)/PI*180,0));
}

void Amob::go()
{
	FVector2D pos(GetActorLocation().X,GetActorLocation().Y);
	FVector2D desired = (pointToGo-pos).GetSafeNormal()*maxVel;
	aceleration = desired-velocity;
}

void Amob::newPoint()
{
	timerPoint = 0;
	float angle = FMath::SRand()*2.f-1.f+atan2(-velocity.X,velocity.Y);
	pointToGo = FVector2D(3600.f*FMath::Cos(angle)+GetActorLocation().X,3600.f*FMath::Sin(angle)+GetActorLocation().Y);
}

void Amob::choiserotation()
{
	
}

void Amob::choiseaction()
{
}

void Amob::choka()
{
}

void Amob::hitted()
{
}

void
Amob::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit){
	if(timer<1){
		return;
	}
	timer=0;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
	if(abs(NormalImpulse.Z)<.01){
		SetActorLocation(GetActorLocation()+FVector(0,0,100));
	}
}

void Amob::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	SetActorLocation(GetActorLocation()+FVector(0,0,100));
}

// Called to bind functionality to input
void Amob::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

