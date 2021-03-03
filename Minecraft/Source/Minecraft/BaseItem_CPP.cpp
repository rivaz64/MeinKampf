// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem_CPP.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"
#include "MinecraftCharacter.h"


void ABaseItem_CPP::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto Player = Cast<AMinecraftCharacter>(OtherActor);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "Collision");

	if (Player != nullptr)
	{
		Colected();
	}
}
// Sets default values
ABaseItem_CPP::ABaseItem_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemCollider = CreateDefaultSubobject<USphereComponent>("ItemCollider");
	ItemCollider->SetupAttachment(RootComponent);
	RootComponent = ItemCollider;

	ItemCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	ItemCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem_CPP::OnOverlapBegin);
	ItemCollider->SetHiddenInGame(false);
	ItemCollider->SetVisibility(true);


	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>("ItemMesh");
	ItemMesh->SetupAttachment(RootComponent);

	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
}

// Called when the game starts or when spawned
void ABaseItem_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseItem_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseItem_CPP::Colected()
{
	Destroy();
}

void ABaseItem_CPP::UseItem(ABaseBlock_CPP* block, FVector NormalFace, UWorld* world)
{
}

