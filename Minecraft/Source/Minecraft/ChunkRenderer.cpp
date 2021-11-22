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
	/*
	if(Chunk::savedData)
	delete Chunk::savedData;
	if(world)
	delete world;*/
}

// Called when the game starts or when spawned
void AChunkRenderer::BeginPlay()
{
	Super::BeginPlay();
	world = new HashTable2d(512);
	Chunk::savedData = new HashTable2d(512);
	//((AChunckMesh*)me)->c.generate(0, 0);
	spawnChuncks(0, 0, 3);
	//AChunckMesh::item = item;
}


void AChunkRenderer::spawnChuncks(int x,int y, int dis)
{
	int rad = dis * 2 + 1;
	for (int i = x - dis; i < x + dis + 1; ++i) {
		for (int o = y - dis; o < y + dis + 1; ++o) {
			if (!Chunk::getChunkAt(i, o)->spawned) {
				FTransform trans = FTransform(FVector(i * 1600, o * 1600, 0));
				world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), i, o);
				Chunk::getChunkAt(i, o)->spawned = true;
			}
			
		}
	}
}

void AChunkRenderer::despawnChunks(int x, int y, int dis,int dir)
{
	if(dir == 0){
		for (int i = x - dis; i < x + dis + 1; ++i){
			auto actual = (AChunckMesh*)world->getNodeAt(i, y+dis);
			if (actual && actual->c) {
				actual->c->spawned = false;
				actual->Destroy();
			}
		}
	}
	if(dir == 1){
		for (int i = x - dis; i < x + dis + 1; ++i){
			auto actual = (AChunckMesh*)world->getNodeAt(i, y-dis);
			if (actual&& actual->c) {
				actual->c->spawned = false;
				actual->Destroy();
			}
		}
	}
	if(dir == 2){
		for (int i = y - dis; i < y + dis + 1; ++i){
			auto actual = (AChunckMesh*)world->getNodeAt(x+dis,i);
			if (actual&& actual->c) {
				actual->c->spawned = false;
				actual->Destroy();
			}
		}
	}
	if(dir == 3){
		for (int i = y - dis; i < y + dis + 1; ++i){
			auto actual = (AChunckMesh*)world->getNodeAt(x-dis,i);
			if (actual&& actual->c) {
				actual->c->spawned = false;
				actual->Destroy();
			}
		}
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
		auto actualChunk = ((AChunckMesh*)world->getNodeAt(floor(pos.X / 16), floor(pos.Y / 16)));
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


void AChunkRenderer::destroyBlock(FVector pos)
{
	int wx = floor(pos.X / 16);
	int wy = floor(pos.Y / 16);
	auto actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy));
	world->eraseAt(wx,wy);
	actualChunk->item = item;
	actualBlock = actualChunk->destroyBlock(pos.X,pos.Y,pos.Z);

	TArray<AActor*> dropman;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADropManager_CPP::StaticClass(), dropman);
	if(dropman.Num()>0)
	((ADropManager_CPP*)dropman[0])->SpawnItemFromType(pos * 100 + FVector(50, 50, 50), eSPAWN_ITEM_TYPE::SPAWN_BLOCK, actualBlock, 1);

	volatile int location = Chunk::mod(pos.X,16) * 256 + Chunk::mod(pos.Y,16) * 16 + pos.Z;
	volatile char ans = actualChunk->c->data[location];
	actualChunk->c->data[location] = (int)CHUNK_BLOCK::AIR;
	//actualBlock =  bloks[ans-1]->breaked;

	actualChunk->Destroy();
	FTransform trans = FTransform(FVector(wx * 1600, wy * 1600, 0));
	world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), wx,wy);
	if((int(pos.X)%16+16)%16==0){
		actualChunk = ((AChunckMesh*)world->getNodeAt(wx-1,wy));
		world->eraseAt(wx-1,wy);
		actualChunk->Destroy();
		trans = FTransform(FVector((wx-1) * 1600, wy * 1600, 0));
		world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), wx-1,wy);
	}
	else if((int(pos.Y)%16+16)%16==0){
		actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy-1));
		world->eraseAt(wx,wy-1);
		actualChunk->Destroy();
		trans = FTransform(FVector((wx) * 1600, (wy-1) * 1600, 0));
		world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans),wx,wy-1);
	}
	else if((int(pos.X)%16+16)%16==15){
		actualChunk = ((AChunckMesh*)world->getNodeAt(wx+1,wy));
		world->eraseAt(wx+1,wy);
		actualChunk->Destroy();
		trans = FTransform(FVector((wx+1) * 1600, wy * 1600, 0));
		world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), wx+1,wy);
	}
	else if((int(pos.Y)%16+16)%16==15){
		actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy+1));
		world->eraseAt(wx,wy+1);
		actualChunk->Destroy();
		trans = FTransform(FVector((wx) * 1600, (wy+1) * 1600, 0));
		world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), wx,wy+1);
	}
	
	pos.Z += 1;

	auto upBlock =  actualChunk->c->getAt(pos.X,pos.Y,pos.Z);

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
	/*if(FoundActors.Num()>0){
		auto actualItem = (AMinecraftCharacter*)FoundActors[0];
		return;
	}*/

	if(actualBlock == -1){
		int wx = floor(inerpos.X / 16.f);
		int wy = floor(inerpos.Y / 16.f);
		auto actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy));
		auto block = actualChunk->c->getAt(inerpos.X,inerpos.Y,inerpos.Z);
		if(cual == 1 && block==(int)CHUNK_BLOCK::GRASS){
			actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z,(int)CHUNK_BLOCK::FARMLAND_DRY);
			regenerate(inerpos.X,inerpos.Y);
			farmlands.push_back(inerpos);
		}
		else if(cual == 2 && (block==(int)CHUNK_BLOCK::FARMLAND_DRY || block==(int)CHUNK_BLOCK::FARMLAND_WET)){
			inerpos.Z++;
			actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z,(int)CHUNK_BLOCK::CROP);
			regenerate(inerpos.X,inerpos.Y);
			//crops.push_back(inerpos);
			updates.push_back(inerpos);
		}

		else if(cual == 3 && block != (int)CHUNK_BLOCK::DOOR_DOWN){
			actualChunk->placeBlock(outpos.X,outpos.Y,outpos.Z,(int)CHUNK_BLOCK::DOOR_DOWN);
			actualChunk->placeBlock(outpos.X,outpos.Y,outpos.Z+1,(int)CHUNK_BLOCK::DOOR_UP);
			regenerate(outpos.X,outpos.Y);
		}
		else if(cual == 4 && block != (int)CHUNK_BLOCK::CRAFTING_TABLE){
			actualChunk->placeBlock(outpos.X,outpos.Y,outpos.Z,(int)CHUNK_BLOCK::CRAFTING_TABLE);
			regenerate(outpos.X,outpos.Y);
		}
		else if(cual == 5 && (block==(int)CHUNK_BLOCK::FARMLAND_DRY || block==(int)CHUNK_BLOCK::FARMLAND_WET)){
			inerpos.Z++;
			actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z,(int)CHUNK_BLOCK::CARROT);
			regenerate(inerpos.X,inerpos.Y);
			updates.push_back(inerpos);
		}
		else if(cual == 6 && (block==(int)CHUNK_BLOCK::FARMLAND_DRY || block==(int)CHUNK_BLOCK::FARMLAND_WET)){
			inerpos.Z++;
			actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z,(int)CHUNK_BLOCK::MELON_STEM);
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
				actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z,(int)CHUNK_BLOCK::DOOR_DOWN_OPEN);
				actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z+1,(int)CHUNK_BLOCK::DOOR_UP_OPEN);
			}
			else
			{
				actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z,(int)CHUNK_BLOCK::DOOR_DOWN);
				actualChunk->placeBlock(inerpos.X,inerpos.Y,inerpos.Z+1,(int)CHUNK_BLOCK::DOOR_UP);
			}
			regenerate(inerpos.X,inerpos.Y);
		}
	}
	else{
		placeBlock(pos,nor,actualBlock);
		regenerate(floor((pos.X+nor.X)/100.f),floor((pos.Y+nor.Y)/100.f));
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
		if(Chunk::getBlockAt(pos+FVector(1,0,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(1,0,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
		if(Chunk::getBlockAt(pos+FVector(0,1,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(0,1,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
	  if(Chunk::getBlockAt(pos+FVector(-1,0,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(-1,0,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
		if(Chunk::getBlockAt(pos+FVector(0,-1,0)) == 0){
			watterAt.push_back(FVector4(pos+FVector(0,-1,0),(int)CHUNK_BLOCK::WATTER+7-type));
		}
	}

	int wx = floor(pos.X / 16.f);
	int wy = floor(pos.Y / 16.f);


	auto actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy));

	actualChunk->placeBlock(pos.X,pos.Y,pos.Z,type);
	
}

void AChunkRenderer::remake(FVector pos)
{
	auto actualChunk = ((AChunckMesh*)world->getNodeAt(floor(pos.X / 16), floor(pos.Y / 16)));
	world->eraseAt(floor(pos.X / 16), floor(pos.Y / 16));
	actualChunk->Destroy();
	FTransform trans = FTransform(FVector((int)floor(pos.X / 16) * 1600, (int)floor(pos.Y / 16) * 1600, 0));
	world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), floor(pos.X / 16), floor(pos.Y / 16));
}

void AChunkRenderer::placeSand(FVector pos)
{
	pos.X = int((pos.X + 1) / 100.f);
	pos.Y = int((pos.Y + 1) / 100.f);
	pos.Z = int((pos.Z + 1) / 100.f);
	auto actualChunk = ((AChunckMesh*)world->getNodeAt(floor(pos.X / 16), floor(pos.Y / 16)));
	world->eraseAt(floor(pos.X / 16), floor(pos.Y / 16));
	actualChunk->item = item;
	actualBlock = actualChunk->placeBlock(pos.X,pos.Y,pos.Z,(int)CHUNK_BLOCK::SAND);
	actualChunk->Destroy();
	FTransform trans = FTransform(FVector((int)floor(pos.X / 16) * 1600, (int)floor(pos.Y / 16) * 1600, 0));
	world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), floor(pos.X / 16), floor(pos.Y / 16));
}

void AChunkRenderer::regenerate(float x,float y)
{
	int wx = floor(x / 16.f);
	int wy = floor(y / 16.f);

	auto actualChunk = ((AChunckMesh*)world->getNodeAt(wx,wy));

	world->eraseAt(wx,wy);

	actualChunk->item = item;

	

	actualChunk->Destroy();

	FTransform trans = FTransform(FVector(wx * 1600, wy * 1600, 0));

	world->insert(GetWorld()->SpawnActor<AActor>(mesh, trans), wx,wy);
}

bool AChunkRenderer::watterCheck(FVector& v)
{
	auto newPos = v+FVector(rand()%11-5,rand()%11-5,0);
	return Chunk::getBlockAt(newPos) == (int)CHUNK_BLOCK::WATTER;
}

bool AChunkRenderer::checkForSpawn(FVector& v)
{
	auto down = Chunk::getBlockAt(v-FVector(0,0,-1));
	return 
	Chunk::getBlockAt(v)==(int)CHUNK_BLOCK::AIR &&
	down != (int)CHUNK_BLOCK::WATTER &&
	AChunckMesh::bloks[down]->type == TYPE::BLOCK;
}

// Called every frame
void AChunkRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	watterUpdate += DeltaTime;
	cropUpdate += DeltaTime;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassOfPlayer, FoundActors);

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
			auto block = Chunk::getBlockAt(actual);
			if(block<(int)CHUNK_BLOCK::CROP+8 && block>= (int)CHUNK_BLOCK::CROP){
				if (Chunk::getBlockAt(actual - FVector(0, 0, 1)) == (int)CHUNK_BLOCK::FARMLAND_WET) {
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
			auto block = Chunk::getBlockAt(actual);
			if(AChunckMesh::bloks[block-1]->update){
				if ((Chunk::getBlockAt(actual - FVector(0, 0, 1)) == (int)CHUNK_BLOCK::FARMLAND_WET)) {
					if(FMath::Rand()%8==0){
						if(AChunckMesh::bloks[block]->needSpace){
						float dx=0;
						float dy=0;
						int coal;
						FVector placeToCheck;
						do{
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

