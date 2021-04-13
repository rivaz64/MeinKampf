// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDroped_CPP.h"
#include "BaseItem_CPP.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MinecraftCharacter.h"

// Sets default values
AItemDroped_CPP::AItemDroped_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>("ItemMesh");
	ItemMesh->SetupAttachment(RootComponent);

	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	ItemMesh->SetSimulatePhysics(true);

	RootComponent = ItemMesh;


	CollectiorCollider = CreateDefaultSubobject<USphereComponent>("CollectorCollider");
	CollectiorCollider->SetupAttachment(RootComponent);

	CollectiorCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	CollectiorCollider->InitSphereRadius(50.f);
	CollectiorCollider->SetVisibility(true);
	CollectiorCollider->SetHiddenInGame(false);
}

// Called when the game starts or when spawned
void AItemDroped_CPP::BeginPlay()
{
	Super::BeginPlay();
	
	//ItemMesh->SetStaticMesh(Item->GetDefaultObject<ABaseItem_CPP>()->ItemMesh); 
}

// Called every frame
void AItemDroped_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeTillCollected -= DeltaTime;
	if (Item->GetDefaultObject<ABaseItem_CPP>()->ItemMesh != NULL)
		ItemMesh->SetStaticMesh(Item->GetDefaultObject<ABaseItem_CPP>()->ItemMesh); 
}
