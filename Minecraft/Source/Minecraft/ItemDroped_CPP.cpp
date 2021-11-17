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
  CollectiorCollider->OnComponentBeginOverlap.AddDynamic(this, &AItemDroped_CPP::BeginOverlap);
}

// Called every frame
void AItemDroped_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeTillCollected -= DeltaTime;
	if (Item->GetDefaultObject<ABaseItem_CPP>()->ItemMesh != NULL)
		ItemMesh->SetStaticMesh(Item->GetDefaultObject<ABaseItem_CPP>()->ItemMesh); 
}

void AItemDroped_CPP::BeginOverlap(UPrimitiveComponent * OverlappedComponent,
  AActor * OtherActor,
  UPrimitiveComponent * OtherComp,
  int32 OtherBodyIndex,
  bool bFromSweep,
  const FHitResult & SweepResult)
{
  AMinecraftCharacter* OtherCharacter = Cast<AMinecraftCharacter>(OtherActor);
  
  if (OtherCharacter && TimeTillCollected <= 0.0f)
  {
    uint8 oCount = 0;
    if (OtherCharacter->AddItemC(Item, Count, oCount))
    {
      Destroy();
    }
    return;
  }
  else
  {
    AItemDroped_CPP* OtherDropped = Cast<AItemDroped_CPP>(OtherActor);

    if (OtherDropped && OtherDropped != this)
    {
      if (Item == OtherDropped->Item)
      {
        if (Count + OtherDropped->Count <= Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack)
        {
          Count += OtherDropped->Count;
          OtherDropped->Destroy();
        }
        else
        {
          OtherDropped->Count = (Count + OtherDropped->Count) - Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
          Count += Item->GetDefaultObject<ABaseItem_CPP>()->MaxStack;
        }
      }

      return;
    }
  }
}