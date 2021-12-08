// Fill out your copyright notice in the Description page of Project Settings.

#include "ChunkRenderer.h"
#include <vector>
#include <algorithm>
#include "BreakingQuad.h"
#include "Kismet/GameplayStatics.h"
#include "ItemDroped_CPP.h"
#include "BaseGrassItemBlock_CPP.h"
#include "B_CraftingTable_CPP.h"
#include "Block.h"
#include "MinecraftCharacter.h"
#include "DropManager_CPP.h"
#include "DropManager_CPP.h"
//#include "ChunckMesh.h"
//float TEXTURESIZE = 1.f/16.f;
//std::vector<FVector2D> textcords = { FVector2D(0, 0),FVector2D(TEXTURESIZE, 0),FVector2D(0, TEXTURESIZE) };
			
// Sets default values
AChunkRenderer::AChunkRenderer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

AChunkRenderer::~AChunkRenderer()
{
	if(inPlay)
	manager->save(playerPos);
}

// Called when the game starts or when spawned
void AChunkRenderer::BeginPlay()
{
	Super::BeginPlay();
	manager = std::make_shared<ChunkManager>();
	srand(time(NULL));
	manager->setSeed(rand());
	if(load){
	manager->load();
	}
	spawnChuncks(0, 0, 3);
	
}


void AChunkRenderer::spawnChuncks(int x,int y, int dis)
{
	int rad = dis * 2 + 1;
	for (int i = x - dis; i < x + dis + 1; ++i) {
		for (int o = y - dis; o < y + dis + 1; ++o) {
			if (!manager->getChunkAt(i, o)->spawned) {
				spawnChunkAt(i,o);
			}
			
		}
	}
}

void AChunkRenderer::despawnChunks(int x, int y, int dis,int dir)
{
	/*float here;
	if(dir<2){
		if(dir==0){
			here = y+dis;
		}
		else{
			here = y-dis;
		}
		for(auto pai : world){
			pai.second->erase(pai.second->find(here));
		}
	}
	else{
		if(dir==2){
			here = x+dis;
		}
		else{
			here = x-dis;
		}
		world.erase(world.find(here));
	}*/
}

void
AChunkRenderer::spawnChunkAt(int x, int y)
{
	if(world.find(x)!=world.end()){
		world.insert({x,std::make_shared<std::map<int,AChunckMesh*>>()});
	}
	auto row = world[x];
	if(!row.get()){
		world[x] = std::make_shared<std::map<int,AChunckMesh*>>();
		row = world[x];
	}
	FTransform trans = FTransform(FVector(x * 1600, y * 1600, 0));
	AChunckMesh* actChnk = Cast<AChunckMesh>(GetWorld()->SpawnActor<AActor>(mesh, trans));
	if(row->size()!=0 && row->find(y)!=row->end())
		(*row.get())[y] = actChnk;
	else{
		row->insert({y,actChnk});
	}
	
	manager->getChunkAt(x,y)->spawned = true;
	getChunkAt(x,y)->renderer = this;

	

	GetWorld()->SpawnActor<AActor>(sheep,FTransform(manager->getPlaceToSpawn(x,y)*100));
}

AChunckMesh*
AChunkRenderer::getChunkAt(int x, int y){
	
	return (*world[x])[y];
}

void 
AChunkRenderer::despawnChunk(int x, int y){
	if(world.find(x)==world.end()) return;
	(*world[x])[y]->Destroy();
	world[x]->erase(world[x]->find(y));
	if(world[x]->size() == 0){
		world.erase(world.find(x));
	}
}

void AChunkRenderer::destroingAt(FVector pos, FVector nor, float delta)
{
	//GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, TEXT("Simple message"));
	pos.X = int(floor((pos.X - nor.X) / 100.f));
	pos.Y = int(floor((pos.Y - nor.Y) / 100.f));
	pos.Z = int(floor((pos.Z - nor.Z) / 100.f));
	//auto actualChunk = ((AChunckMesh*)world->getNodeAt(pos.X / 16, pos.Y / 16));
	//actualChunk->destroingAt(pos, nor);
	if (PointingBlock != pos) {
		if (actualQuad != nullptr) {
			actualQuad->Destroy();
		}
		step = 0;
		life = 0;
		PointingBlock = pos;
		auto actualChunk = getChunkAt(floor(pos.X / 16), floor(pos.Y / 16));
		blockLife = actualChunk->lifeOf(pos.X, pos.Y, pos.Z);
	}

	FVector4 data = FVector4(nor.X, nor.Y, nor.Z, 0);
	life += delta * blockLife;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%f"), life));

	if (life >= 1) {
		destroyBlock(pos);
		life = 0;
		step = 0;
		actualQuad->Destroy();
	}
	else if(life*quad.Num()>step){
		if(actualQuad != nullptr ){
			actualQuad->Destroy();
		}
		FTransform trans = FTransform(FRotator(-nor.X*90,nor.Z*90,nor.Y*90),pos*100.f+FVector(50,50,50)+nor*51.f,FVector(1,1,1));
		actualQuad = GetWorld()->SpawnActor<AActor>(quad[step], trans);
		step +=1;
	}
}

void AChunkRenderer::regenerate(const FVector2D& place)
{
	despawnChunk(place.X,place.Y);
	spawnChunkAt(place.X,place.Y);
}

void AChunkRenderer::regenerate(int x,int y)
{
	despawnChunk(x,y);
	spawnChunkAt(x,y);
}

void AChunkRenderer::destroyBlock(FVector pos)
{
	int wx = floor(pos.X / 16);
	int wy = floor(pos.Y / 16);
	//auto destroyedBlock = 
	if(manager->getBlockAt(pos)==(int)CHUNK_BLOCK::MELON){
		if(manager->getBlockAt(pos+FVector(1,0,0))==(int)CHUNK_BLOCK::MELON_ATTACHED_STEM){
			manager->setBlockAt(pos+FVector(1,0,0),(int)CHUNK_BLOCK::MELON_STEM);
			updates.push_back(pos+FVector(1,0,0));
		}
		else if(manager->getBlockAt(pos+FVector(-1,0,0))==(int)CHUNK_BLOCK::MELON_ATTACHED_STEM){
			manager->setBlockAt(pos+FVector(-1,0,0),(int)CHUNK_BLOCK::MELON_STEM);
			updates.push_back(pos+FVector(-1,0,0));
		}
		else if(manager->getBlockAt(pos+FVector(0,1,0))==(int)CHUNK_BLOCK::MELON_ATTACHED_STEM){
			manager->setBlockAt(pos+FVector(0,1,0),(int)CHUNK_BLOCK::MELON_STEM);
			updates.push_back(pos+FVector(0,1,0));
		}
		else if(manager->getBlockAt(pos+FVector(0,-1,0))==(int)CHUNK_BLOCK::MELON_ATTACHED_STEM){
			manager->setBlockAt(pos+FVector(0,-1,0),(int)CHUNK_BLOCK::MELON_STEM);
			updates.push_back(pos+FVector(0,-1,0));
		}
	}

	else if(manager->getBlockAt(pos)==(int)CHUNK_BLOCK::FARMLAND_WET){
		
		
		auto bloke = manager->getBlockAt(pos+FVector(0,0,1))-1;
		if(bloke>=0)
		if(AChunckMesh::bloks[bloke]->type!=TYPE::BLOCK){
			manager->setBlockAt(pos+FVector(0,0,1),(int)CHUNK_BLOCK::AIR);
		}
	}


	//volatile int location = manager->mod(pos.X,16) * 256 + manager->mod(pos.Y,16) * 16 + pos.Z;
	char ans = manager->getBlockAt(pos);
	manager->setBlockAt(pos, (int)CHUNK_BLOCK::AIR);
	actualBlock = AChunckMesh::bloks[ans-1]->breaked;

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),itemManager, FoundActors);
	if(FoundActors.Num()>0){
		((ADropManager_CPP*)FoundActors[0])->SpawnItemFromType(pos*100+FVector(50,50,50),eSPAWN_ITEM_TYPE::SPAWN_BLOCK,actualBlock,1,0.0f);
	}

	regenerate(wx,wy);


	if((int(pos.X)%16+16)%16==0){
		regenerate(wx-1,wy);
	}
	else if((int(pos.Y)%16+16)%16==0){
		regenerate(wx,wy-1);
	}
	else if((int(pos.X)%16+16)%16==15){
		regenerate(wx+1,wy);
	}
	else if((int(pos.Y)%16+16)%16==15){
		regenerate(wx,wy+1);
	}
	
	pos.Z += 1;

	auto upBlock =  manager->getBlockAt(pos);

	if(upBlock == (int)CHUNK_BLOCK::SAND){
		sandFall = true;
		sandFallingAt = pos;
	}
}


void AChunkRenderer::placeBlock(FVector pos, FVector nor)
{

	auto inerpos = FVector(int((pos.X - nor.X) / 100.f),int((pos.Y - nor.Y) / 100.f),int((pos.Z - nor.Z) / 100.f));
	auto outpos = FVector(int((pos.X + nor.X) / 100.f),int((pos.Y + nor.Y) / 100.f),int((pos.Z + nor.Z) / 100.f));

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassOfPlayer, FoundActors);
	

	if(true){
		int wx = floor(inerpos.X / 16.f);
		int wy = floor(inerpos.Y / 16.f);
		//auto actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy));
		auto block = manager->getBlockAt(inerpos);

		if(FoundActors.Num()>0){
			auto player = (AMinecraftCharacter*)FoundActors[0];

			if(player->HandedItem){
			
				if(player->HandedItem->GetDefaultObject<ABaseItem_CPP>()->eItemType == BLOCK){
					placeBlock(pos,nor,player->HandedItem->GetDefaultObject<ABaseItemBlock_CPP>()->getId());
					regenerate(floor((pos.X+nor.X)/1600.f),floor((pos.Y+nor.Y)/1600.f));
					return;
				}

				if(
				player->HandedItem->GetDefaultObject<ABaseItem_CPP>()->eItemType == TOOL &&
				player->HandedItem->GetDefaultObject<ABaseItem_CPP>()->eToolType == HOE &&
				block==(int)CHUNK_BLOCK::GRASS){
				
					manager->setBlockAt(inerpos,(int)CHUNK_BLOCK::FARMLAND_DRY);
					regenerate(inerpos.X,inerpos.Y);
					farmlands.push_back(inerpos);

				}
			}

			
		}

		if(cual == 2 && (block==(int)CHUNK_BLOCK::FARMLAND_DRY || block==(int)CHUNK_BLOCK::FARMLAND_WET)){
			inerpos.Z++;
			manager->setBlockAt(inerpos,(int)CHUNK_BLOCK::CROP);
			regenerate(inerpos.X,inerpos.Y);
			//crops.push_back(inerpos);
			updates.push_back(inerpos);
		}

		else if(cual == 3 && block != (int)CHUNK_BLOCK::DOOR_DOWN){
			manager->setBlockAt(outpos,(int)CHUNK_BLOCK::DOOR_DOWN);
			manager->setBlockAt(outpos+FVector(0,0,1),(int)CHUNK_BLOCK::DOOR_UP);
			regenerate(outpos.X,outpos.Y);
		}
		else if(cual == 4 && block != (int)CHUNK_BLOCK::CRAFTING_TABLE){
			manager->setBlockAt(outpos,(int)CHUNK_BLOCK::CRAFTING_TABLE);
			regenerate(outpos.X,outpos.Y);
		}
		else if(cual == 5 && (block==(int)CHUNK_BLOCK::FARMLAND_DRY || block==(int)CHUNK_BLOCK::FARMLAND_WET)){
			inerpos.Z++;
			manager->setBlockAt(inerpos,(int)CHUNK_BLOCK::CARROT);
			regenerate(inerpos.X,inerpos.Y);
			updates.push_back(inerpos);
		}
		else if(cual == 6 && (block==(int)CHUNK_BLOCK::FARMLAND_DRY || block==(int)CHUNK_BLOCK::FARMLAND_WET)){
			inerpos.Z++;
			manager->setBlockAt(inerpos,(int)CHUNK_BLOCK::MELON_STEM);
			regenerate(inerpos.X,inerpos.Y);
			updates.push_back(inerpos);
		}
		else if(block == (int)CHUNK_BLOCK::CRAFTING_TABLE){
			TArray<AActor*> crafting;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(),AB_CraftingTable_CPP::StaticClass(),crafting);
			((AB_CraftingTable_CPP*)crafting[0])->OpenWidget = true;
		}
		else if (block >= (int)CHUNK_BLOCK::DOOR_UP && block <= (int)CHUNK_BLOCK::DOOR_DOWN_OPEN) {
			if (block % 2 == 0) {
				inerpos.Z-=1;
			}
			if (block <= (int)CHUNK_BLOCK::DOOR_DOWN) {
				manager->setBlockAt(inerpos,(int)CHUNK_BLOCK::DOOR_DOWN_OPEN);
				manager->setBlockAt(inerpos+FVector(0,0,1),(int)CHUNK_BLOCK::DOOR_UP_OPEN);
			}
			else
			{
				manager->setBlockAt(inerpos,(int)CHUNK_BLOCK::DOOR_DOWN);
				manager->setBlockAt(inerpos+FVector(0,0,1),(int)CHUNK_BLOCK::DOOR_UP);
			}
			regenerate(inerpos.X,inerpos.Y);
		}
	}
	else{
		placeBlock(pos,nor,actualBlock);
		regenerate(floor((pos.X+nor.X)/1600.f),floor((pos.Y+nor.Y)/1600.f));
	}
	
	actualBlock = -1;
}

void AChunkRenderer::placeBlock(FVector pos, FVector nor, char type)
{
	/*if(type==-1){
		type = 8;
		//return;
	}*/



	//de cordenada de mundo a cordenada grid
	pos.X = int((pos.X + nor.X) / 100.f);
	pos.Y = int((pos.Y + nor.Y) / 100.f);
	pos.Z = int((pos.Z + nor.Z) / 100.f);

	if(type == (int)CHUNK_BLOCK::SAND){
		FTransform trans = FTransform(FVector((int)floor(pos.X) * 100, (int)floor(pos.Y) * 100, (int)floor(pos.Z) * 100));
		GetWorld()->SpawnActor<AActor>(sand, trans);
		return;
	}

	//cordenadas grid
	if(type >= (int)CHUNK_BLOCK::WATTER && (int)CHUNK_BLOCK::WATTER+8>type){
		if(manager->getBlockAt(pos+FVector(1,0,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(1,0,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
		if(manager->getBlockAt(pos+FVector(0,1,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(0,1,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
	  if(manager->getBlockAt(pos+FVector(-1,0,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(-1,0,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
		if(manager->getBlockAt(pos+FVector(0,-1,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(0,-1,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
	}

	manager->setBlockAt(pos,type);
	
}


void AChunkRenderer::placeSand(FVector pos)
{
	pos.X = int((pos.X + 1) / 100.f);
	pos.Y = int((pos.Y + 1) / 100.f);
	pos.Z = int((pos.Z + 1) / 100.f);
	manager->setBlockAt(pos,(int)CHUNK_BLOCK::SAND );
	regenerate( floor(pos.X / 16), floor(pos.Y / 16));
}


bool AChunkRenderer::watterCheck(FVector& v)
{
	auto newPos = v+FVector(rand()%11-5,rand()%11-5,0);
	return manager->getBlockAt(newPos) == (int)CHUNK_BLOCK::WATTER;
}

bool AChunkRenderer::checkForSpawn(FVector& v)
{
	auto down = manager->getBlockAt(v-FVector(0,0,-1));
	return 
	manager->getBlockAt(v)==(int)CHUNK_BLOCK::AIR &&
	down != (int)CHUNK_BLOCK::WATTER &&
	AChunckMesh::bloks[down]->type == TYPE::BLOCK;
}

void 
AChunkRenderer::explodeAt(const FVector& place, float radius)
{
	FVector local;
	
	for(local.X = place.X-radius; local.X<place.X+radius+1;local.X+=1){
		for(local.Y = place.Y-radius; local.Y<place.Y+radius+1;local.Y+=1){
			for(local.Z = place.Z-radius; local.Z<place.Z+radius+1;local.Z+=1){
				if(FVector::Distance(local,place)<= radius){
					manager->setBlockAt(local,(char)CHUNK_BLOCK::AIR);
				}
			}
		}
	}
	regenerate(FVector2D(floor(place.X/16.f),floor(place.Y/16.f)));
}



// Called every frame
void AChunkRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	watterUpdate += DeltaTime;
	cropUpdate += DeltaTime;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassOfPlayer, FoundActors);

	if(FoundActors.Num()!=0){
		inPlay = true;

		playerPos = FoundActors[0]->GetActorLocation();
	}
	

	if(sandFall){
		sandFall=false;
		destroyBlock(sandFallingAt);
		placeBlock(sandFallingAt*100.f,FVector(1,1,1));
	}

	if(watterUpdate>1){
		watterUpdate=0;
		/*int watterNum = watterAt.size();
		
		for(int i=0;i<watterNum-1;i++){
			//coordenadas gird
			auto pos = FVector(watterAt.front().X,watterAt.front().Y,watterAt.front().Z);
			//coordenadas Chunk
			auto wPos = FVector2D(floor(pos.X/16.f),floor(pos.Y/16.f));
			//coordenadas world
			placeBlock(pos*100.f,FVector(1,1,1),(int)CHUNK_BLOCK::WATTER+8-watterAt.front().W);
			bool already = false;
			for(FVector2D& v: forRegen){
				if(v==wPos){
					already = true;
					break;
				}
			}
			if(!already){
				forRegen.push_back(wPos);
			}
			watterAt.pop_front();
		}
		for(FVector2D& v: forRegen){
			regenerate(v.X,v.Y);
		}*/
		FVector actual;
		for(auto it = farmlands.begin();it!=farmlands.end();++it){
			actual = *it;
			if(watterCheck(actual)){
				placeBlock(actual*100.f,FVector(1,1,1),(int)CHUNK_BLOCK::FARMLAND_WET);
				farmlands.erase(it);
				regenerate(actual.X,actual.Y);
				break;
			}
		}



	}
	

	/*if(cropUpdate>6){
		cropUpdate=0;
		
		FVector actual;
		for(auto it = crops.begin();it!=crops.end();++it){
			actual = *it;
			auto block = manager->getBlockAt(actual);
			if(block<(int)CHUNK_BLOCK::CROP+8 && block>= (int)CHUNK_BLOCK::CROP){
				if (manager->getBlockAt(actual - FVector(0, 0, 1)) == (int)CHUNK_BLOCK::FARMLAND_WET) {
					placeBlock(actual*100.f,FVector(1,1,1),block+1);
				}
				else {
					placeBlock(actual*100.f,FVector(1,1,1),0);
				}
				regenerate(actual.X,actual.Y);
			}
			else{
				crops.erase(it);
				break;
			}

		}
	}*/

	if(cropUpdate>.2){
		cropUpdate=0;
		
		FVector actual;
		for(auto it = updates.begin();it!=updates.end();++it){
			actual = *it;
			auto block = manager->getBlockAt(actual);
			if(block != (int)CHUNK_BLOCK::AIR && AChunckMesh::bloks[block-1]->update){
				if ((manager->getBlockAt(actual - FVector(0, 0, 1)) == (int)CHUNK_BLOCK::FARMLAND_WET)) {
					if(FMath::Rand()%8==0){
						if(AChunckMesh::bloks[block]->needSpace){
						float dx;
						float dy;
						int coal;
						FVector placeToCheck;
						do{
							dx=0;
							dy=0;
							coal = FMath::Rand()%2;
							if(coal ==0)
							dx = FMath::Rand()%2*2-1;
							else
							dy = FMath::Rand()%2*2-1;
							placeToCheck = actual + FVector(dx,dy,0);
						}while(!checkForSpawn(placeToCheck));

						placeBlock(placeToCheck*100.f,FVector(1,1,1),(char)AChunckMesh::bloks[block-1]->blockForSpawn);
					  
					}
					placeBlock(actual*100.f,FVector(1,1,1),block+1);
					}
					
				}
				else {
					placeBlock(actual*100.f,FVector(1,1,1),0);
				}
				regenerate(actual.X,actual.Y);
			}
			else{
				updates.erase(it);
				break;
			}

		}
	}


	if (FoundActors.Num()) {
		if (floor(FoundActors[0]->GetActorLocation().X / 1600) != isinchunckx || floor(FoundActors[0]->GetActorLocation().Y / 1600) != isinchuncky) {
			
			

			float antex = isinchunckx;
			float antey = isinchuncky;
			isinchunckx = floor(FoundActors[0]->GetActorLocation().X / 1600);
			isinchuncky = floor(FoundActors[0]->GetActorLocation().Y / 1600);

			spawnChuncks(isinchunckx, isinchuncky,3);
			if(isinchuncky-antey == -1)
			despawnChunks(antex, antey,3,0);
			if(isinchuncky-antey == 1)
				despawnChunks(antex, antey,3,1);
			if(isinchunckx-antex == -1)
				despawnChunks(antex, antey,3,2);
			if(isinchunckx-antex == 1)
				despawnChunks(antex, antey,3,3);
		}
	}
}

void AChunkRenderer::desPoint()
{
	if(actualQuad != nullptr ){
		actualQuad->Destroy();
		actualQuad = nullptr;
	}
	step = 0;
	life = 0;
	PointingBlock = FVector(0,0,0);

}

