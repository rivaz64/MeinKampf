// Fill out your copyright notice in the Description page of Project Settings.


#include "terreno.h"
#include "Kismet/GameplayStatics.h"
#include <algorithm>
#include<cmath>
// Sets default values
Aterreno::Aterreno()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aterreno::BeginPlay()
{
	Super::BeginPlay();
	spawner->building = &building;
	createchuncks(0, 0);
}


//cubes.insert({ "x" + std::to_string(x) + "y" + std::to_string(y) + "z" + std::to_string(z),GetWorld()->SpawnActor<AActor>(terra, trans) });
void Aterreno::deleteblock(int x, int y, int z)
{
	//cubes["x" + std::to_string(x) + "y" + std::to_string(y) + "z" + std::to_string(z)]->Destroy();
	//cubes.erase("x" + std::to_string(x) + "y" + std::to_string(y) + "z" + std::to_string(z));
}

void Aterreno::createchuncks(int x, int y)
{
	int lx, ly;
	string cords;
	//bool vf;
	//FAsyncTask<task>*
	building = true;
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			lx = x + (i + 1) % 3 - 1;
			ly = y + (o + 1) % 3 - 1;
			cords = "x" + std::to_string(lx) + "y" + std::to_string(ly);
			
			createchunck(lx, ly);
			tempcoords.push_back("x" + std::to_string(lx) + "y" + std::to_string(ly));
			
			spawnchunk(lx, ly);
		}
	}
	for (string s : spawnedchunks) {
		if (std::find(tempcoords.begin(), tempcoords.end(), s) == tempcoords.end()) {
			spawner->deletechunk(s);
		}
	}//*/
	spawnedchunks = tempcoords;
	tempcoords = {};
}

bool Aterreno::createchunck(int x, int y)
{
	string cords = "x" + std::to_string(x) + "y" + std::to_string(y);
	bool vf = true;
	int lx, ly;
	FAsyncTask<task>* fat;
	vector<FAsyncTask<task>*> tasks;
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			lx = x + (i + 1) % 3 - 1;
			ly = y + (o + 1) % 3 - 1;
			cords = "x" + std::to_string(lx) + "y" + std::to_string(ly);
			vf = true;
			for (std::pair<string, vector<vector<vector<int>>>> u : cubitos) {
				if (u.first == cords) {
					vf = false;
					break;
				}
			}
			if (vf) {
				cubitos.insert({ cords,vector<vector<vector<int>>>() });
				spawner->cubes.insert({ cords,map <string, AActor*>() });
				listos.insert({ cords,false });
				fat = generador->runtask(chunksize, &cubitos[cords], &listos[cords]);
				tasks.push_back(fat);
			}
		}
	}
	for (FAsyncTask<task>* t : tasks) {
		t->EnsureCompletion();
	}
	return true;
	

	return false;
	
	
	
	
}

void Aterreno::spawnchunk(int x, int y)
{
	usingchunk(x, y);
	vector<vector<int>> posis;
	FAsyncTask<sit>* thre;
	string cords = "x" + std::to_string(x) + "y" + std::to_string(y);
	vector<FAsyncTask<sit>*> threads;
	if (std::find(spawnedchunks.begin(), spawnedchunks.end(), cords) == spawnedchunks.end()) {
		/*while (!listos[cords]) {

		}*/
		spawnedchunks.push_back(cords);
		posis.resize(chunksize * chunksize * chunksize);
		for (int X = 0; X < chunksize; X++) {
			thre = (new FAsyncTask<sit>(chunksize,X,x,y,&posis,actualchunk,this));
			thre->StartBackgroundTask();
			threads.push_back(thre);//*/
		}

	}
	for (int X = 0; X < threads.size(); X++) {
		threads[X]->EnsureCompletion();
	}//*/
	spawner->posis.push(posis);
}

void sit::DoWork()
{
	
	for (int Y = 0; Y < chunksize; Y++) {
		for (int Z = 0; Z < chunksize; Z++) {
			if ((*actualchunk)[X][Y][Z] != 0 && ter->checkifspawn(X + x * chunksize, Y + y * chunksize, Z)) {
				(*posis)[Z + Y * chunksize + X * chunksize * chunksize] = { X + x * chunksize, Y + y * chunksize, Z,(*actualchunk)[X][Y][Z]};
			}
		}
	}
}

void Aterreno::usingchunk(int x, int y, vector<vector<vector<int>>>** tc)
{
	string cords = "x" + std::to_string(x) + "y" + std::to_string(y);
	bool vf = true;
	FAsyncTask<task>* fat=NULL;
	//lok.lock();
	/*for (std::pair<string, vector<vector<vector<int>>>> u : cubitos) {
		if (u.first == cords) {
			vf = false;
			break;
		}
	}
	lok.unlock();
	if (vf) {
		if(createchunck(x, y,fat))
			if (fat != NULL)
				fat->EnsureCompletion();
	}*/
	*tc = &cubitos[cords];
}

void Aterreno::usingchunk(int x, int y)
{
	FAsyncTask<task>* fat=NULL;
	string cords = "x" + std::to_string(x) + "y" + std::to_string(y);
	bool vf = true;
	/*for (std::pair<string, vector<vector<vector<int>>>> u : cubitos) {
		if (u.first == cords) {
			vf = false;
			break;
		}
	}
	if (vf) {
		if(createchunck(x, y,fat))
			if(fat!=NULL)
				fat->EnsureCompletion();
		
	}*/
	actualchunk = &cubitos[cords];
}

bool Aterreno::checkifspawn(int x, int y,volatile int z)
{
	vector<vector<vector<int>>>* tempchunk;
	if ( z%chunksize == 0 || z % chunksize == chunksize - 1) {
		return false;
	}
	
	usingchunk(std::floor(float(x + 1) / float(chunksize)), std::floor(float(y) / float(chunksize)), &tempchunk);
	if(checkifready(tempchunk, (((x + 1) % chunksize) + chunksize) % chunksize, ((y % chunksize) + chunksize) % chunksize))
	if ((*tempchunk)[(((x + 1) % chunksize) + chunksize) % chunksize][((y % chunksize) + chunksize) % chunksize][z] == 0) {
		return true;
	}
	usingchunk(std::floor(float(x - 1) / float(chunksize)), std::floor(float(y) / float(chunksize)), &tempchunk);
	if (checkifready(tempchunk, (((x - 1) % chunksize) + chunksize) % chunksize, ((y % chunksize) + chunksize) % chunksize))
	if ((*tempchunk)[(((x - 1) % chunksize)+ chunksize) % chunksize][((y % chunksize) + chunksize) % chunksize][z] == 0) {
		return true;
	}
	usingchunk(std::floor(float(x) / float(chunksize)), std::floor(float(y+1) / float(chunksize)), &tempchunk);
	if (checkifready(tempchunk, (((x) % chunksize) + chunksize) % chunksize, (((y+1) % chunksize) + chunksize) % chunksize))
	if ((*tempchunk)[((x % chunksize) + chunksize) % chunksize][(((y + 1) % chunksize) + chunksize) % chunksize][z] == 0) {
		return true;
	}
	usingchunk(std::floor(float(x ) / float(chunksize)), std::floor(float(y-1) / float(chunksize)), &tempchunk);
	if (checkifready(tempchunk, (((x) % chunksize) + chunksize) % chunksize, (((y-1) % chunksize) + chunksize) % chunksize))
	if ((*tempchunk)[((x % chunksize) + chunksize) % chunksize][(((y - 1) % chunksize) + chunksize) % chunksize][z] == 0) {
		return true;
	}
	usingchunk(std::floor(float(x) / float(chunksize)), std::floor(float(y) / float(chunksize)), &tempchunk);
	if ( (*tempchunk)[((x % chunksize) + chunksize) % chunksize][((y % chunksize) + chunksize) % chunksize][z + 1] == 0 || (*tempchunk)[((x % chunksize) + chunksize) % chunksize][((y % chunksize) + chunksize) % chunksize][z - 1] == 0)
		return true;
	return false;
	
}

void Aterreno::destroyblockat(int x, int y, int z)
{
	//FTransform trans;
	building = true;
	if (!checkifspawn(x + 1, y, z)) {
		spawner->posis.push({ { x + 1, y, z } });
	}
	if (!checkifspawn(x-1 , y, z)) {
		spawner->posis.push({ { x - 1, y, z } });
	}
	if (!checkifspawn(x, y+1, z)) {
		spawner->posis.push({ { x, y + 1, z } });
	}
	if (!checkifspawn(x, y -1, z)) {
		spawner->posis.push({ { x, y - 1, z } });
	}
	if (!checkifspawn(x, y, z+1)) {
		spawner->posis.push({ {x, y, z + 1 } });
	}
	if (!checkifspawn(x, y, z - 1)) {
		spawner->posis.push({ { x, y, z - 1 } });
	}
	usingchunk(std::floor(float(x) / float(chunksize)), std::floor(float(y - 1) / float(chunksize)));
	(*actualchunk)[((x % chunksize) + chunksize) % chunksize][((y % chunksize) + chunksize) % chunksize][z] = 0;
	//building = false;
}

void Aterreno::createblockat(int x, int y, int z)
{
	spawner->posis.push({ {x,y,z} });
	usingchunk(std::floor(float(x) / float(chunksize)), std::floor(float(y - 1) / float(chunksize)));
	(*actualchunk)[((x % chunksize) + chunksize) % chunksize][((y % chunksize) + chunksize) % chunksize][z] = 1;
	if (!checkifspawn(x + 1, y, z)) {
		spawner->deletes.push({ x + 1, y, z });
	}
	if (!checkifspawn(x - 1, y, z)) {
		spawner->deletes.push({ x - 1, y, z });
	}
	if (!checkifspawn(x, y + 1, z)) {
		spawner->deletes.push({ x , y + 1, z });
	}
	if (!checkifspawn(x, y - 1, z)) {
		spawner->deletes.push({ x , y - 1, z });
	}
	if (!checkifspawn(x, y, z + 1)) {
		spawner->deletes.push({ x , y, z + 1 });
	}
	if (!checkifspawn(x, y, z - 1)) {
		spawner->deletes.push({ x , y, z - 1 });
	}
	if (!building) {
		building = true;
		
		//building = false;
	}
}

bool Aterreno::checkifready(vector<vector<vector<int>>>* tempchunk, int x, int y)
{
	if ((*tempchunk).size() < 16) {
		return false;
	}
	if ((*tempchunk)[x].size() < 16) {
		return false;
	}
	if ((*tempchunk)[x][y].size() < 16) {
		return false;
	}
	return true;
}

// Called every frame
void Aterreno::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassOfPlayer, FoundActors);
	if (FoundActors.Num()) {
		if (floor(FoundActors[0]->GetActorLocation().X / (chunksize * 100)) != isinchunckx || round(FoundActors[0]->GetActorLocation().Y / (chunksize * 100)) != isinchuncky) {

			isinchunckx = floor(FoundActors[0]->GetActorLocation().X / (chunksize * 100));
			isinchuncky = floor(FoundActors[0]->GetActorLocation().Y / (chunksize * 100));

			createchuncks(isinchunckx, isinchuncky);
		}
	}
}



sit::sit(int chs,int tx,int px,int py, vector<vector<int>>* vpos, vector<vector<vector<int>>>* ac, Aterreno* t)
{
	chunksize = chs;
	X = tx;
	x = px;
	y = py;
	posis = vpos;
	actualchunk = ac;
	ter = t;
}


