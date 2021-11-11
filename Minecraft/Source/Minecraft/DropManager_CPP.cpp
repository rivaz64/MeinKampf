// Fill out your copyright notice in the Description page of Project Settings.


#include "DropManager_CPP.h"
#include "Block.h"
#include "ItemDroped_CPP.h"

#include "BaseGrassItemBlock_CPP.h"
#include "BaseStoneItemBlock_CPP.h"
//bedrock
#include "CobblestoneItemBlock_CPP.h"
#include "BaseOakLogItemBlock_CPP.h"
#include "BaseOakPlankItemBlock_CPP.h"
#include "BaseOkaLeavesItemBlock_CPP.h"
#include "SandItemBlock_CPP.h"
//red flower
//yellow flower
//sugar cane
#include "BaseDirtItemBlock_CPP.h"
//seed
//wheat
#include "CraftingTableItemBlock_CPP.h"
//Wooden Door



// Sets default values
ADropManager_CPP::ADropManager_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADropManager_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADropManager_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADropManager_CPP::SpawnItemFromType(FVector pos, eSPAWN_ITEM_TYPE type, int subType, uint8 count)
{
  TSubclassOf<class ABaseItem_CPP> item = NULL;
	switch (type)
	{
	case eSPAWN_ITEM_TYPE::SPAWN_BLOCK:
		switch (static_cast<CHUNK_BLOCK>(subType))
		{
    case CHUNK_BLOCK::AIR:
      break;
    case CHUNK_BLOCK::DIRT:
      item = ABaseDirtItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::GRASS:
      item = ABaseGrassItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::STONE:
      item = ABaseStoneItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::BEDROCK:
      break;
    case CHUNK_BLOCK::COBBLESTONE:
      item = ACobblestoneItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::WOOD:
      item = ABaseOakLogItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::LEAVES:
      item = ABaseOkaLeavesItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::SAND:
      item = ASandItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::RED_FLOWER:
      break;
    case CHUNK_BLOCK::YELLOW_FLOWER:
      break;
    case CHUNK_BLOCK::SUGAR_CANE:
      break;
    case CHUNK_BLOCK::FARMLAND_DRY:
      item = ABaseDirtItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::FARMLAND_WET:
      item = ABaseDirtItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::CROP:
      break;
    case CHUNK_BLOCK::CROP1:
      break;
    case CHUNK_BLOCK::CROP2:
      break;
    case CHUNK_BLOCK::CROP3:
      break;
    case CHUNK_BLOCK::CROP4:
      break;
    case CHUNK_BLOCK::CROP5:
      break;
    case CHUNK_BLOCK::CROP6:
      break;
    case CHUNK_BLOCK::CROP7:
      break;
    case CHUNK_BLOCK::CRAFTING_TABLE:
      item = ACraftingTableItemBlock_CPP::StaticClass();
      break;
    case CHUNK_BLOCK::DOOR_UP:
      break;
    case CHUNK_BLOCK::DOOR_DOWN:
      break;
    case CHUNK_BLOCK::DOOR_UP_OPEN:
      break;
    case CHUNK_BLOCK::DOOR_DOWN_OPEN:
      break;
    case CHUNK_BLOCK::WATTER:
      break;
       
		}
    break;
  }

  SpawnItemFromClass(pos, item, count);
}

void ADropManager_CPP::SpawnItemFromClass(FVector pos, TSubclassOf<class ABaseItem_CPP> item, uint8 count)
{
  if (item != NULL && count > 0u)
  {
    AItemDroped_CPP* drop = GetWorld()->SpawnActor<AItemDroped_CPP>(pos, FRotator::ZeroRotator);
    if (drop)
    {
      drop->Item = item;
      drop->Count = count;
      drop->TimeTillCollected = 3.0f;
    }
  }
}

