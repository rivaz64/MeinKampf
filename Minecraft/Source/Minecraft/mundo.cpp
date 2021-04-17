// Fill out your copyright notice in the Description page of Project Settings.


#include "mundo.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpectatorPawn.h"
#include "Components/SceneComponent.h"
#include "tree.h"
#include <algorithm>
#include <type_traits>
#include <math.h> 
#include"BaseBlock_CPP.h"
// Sets default values
Amundo::Amundo()
{
	PrimaryActorTick.bCanEverTick = true;
}

Amundo::~Amundo()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("destruktor"));
}

int Amundo::rand2d(volatile int x, volatile  int y)
{
	x = (x % 125 + 125) % 125;
	y = (y % 125 + 125) % 125;
	volatile int n = (power(2, x, 125) + power(3, y, 125)) % 125;
	return rands[n];
}

float Amundo::randcord(int x, int y)
{
	int sgnx = 0;
	int sgny = 0;
	if (x < 0) {
		sgnx = 1;
	}
	if (y < 0) {
		sgny = 1;
	}
	volatile int ix = (x + sgnx) / sizediv - sgnx;
	volatile int iy = (y + sgny) / sizediv - sgny;

	volatile float ans[4] = { 0,0,0,0 };
	for (int i = -2; i < 3; i++) {
		for (int o = -2; o < 3; o++) {
			ans[0] += rand2d(ix + i, iy + o) % int(niosines) * gausean[i + 2][o + 2];
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT(" %d"), rand2d(ix + i, iy + o)));
		}
	}

	for (int i = -2; i < 3; i++) {
		for (int o = -2; o < 3; o++) {
			ans[1] += rand2d(ix + i + 1, iy + o) % int(niosines) * gausean[i + 2][o + 2];
		}
	}
	for (int i = -2; i < 3; i++) {
		for (int o = -2; o < 3; o++) {
			ans[2] += rand2d(ix + i, iy + 1 + o) % int(niosines) * gausean[i + 2][o + 2];
		}
	}
	for (int i = -2; i < 3; i++) {
		for (int o = -2; o < 3; o++) {
			ans[3] += rand2d(ix + i + 1, iy + o + 1) % int(niosines) * gausean[i + 2][o + 2];
		}
	}
	volatile float xres = float(((x % sizediv) + sizediv) % sizediv) / float(sizediv) + 1.f / (float(sizediv) * 2.f);
	volatile float yres = float(((y % sizediv) + sizediv) % sizediv) / float(sizediv) + 1.f / (float(sizediv) * 2.f);
	volatile float p1 = interpolation(ans[0] * sizez, ans[1] * sizez, xres);
	volatile float p2 = interpolation(ans[2] * sizez, ans[3] * sizez, xres);
	volatile float p = interpolation(p1, p2, yres);
	return p;
	//return ans+rand2d(x, y)*.32f+ rand2d(x+1, y)*.12f + rand2d(x, y+1) * .12f + rand2d(x - 1, y) * .12f + rand2d(x , y-1) * .12f+rand2d(x + 1, y+1) * .045f + rand2d(x-1, y + 1) * .045f + rand2d(x - 1, y-1) * .045f + rand2d(x+1, y - 1) * .045f;
}

int Amundo::getvectorat(int x, int y, int z)
{
	srand(seed);
	subseed = seed + (rand() % 7) * x + (rand() % 11) * y + (rand() % 13) * z;
	srand(subseed);
	return rand() % 4;
}

void Amundo::makevektors(int ss)
{

	/*vectors.push_back(vector<vector<int>>());
	vectors[vectors.size()-1].resize(s);
	for (int x = 0; x < s; x++) {
		for (int y = 0; y < s; y++) {
			vectors[vectors.size()-1][x].push_back(rand() % 4);
		}
	}*/

}

void Amundo::perilnoise(vector<float>& nums, int d)
{
	float este = 0;
	float n = 0;
	terrain.clear();
	terrain.resize(nums.size());
	for (int i = 0; i < nums.size(); i++) {
		terrain.push_back(0);
	}
	for (int i = 0; i < d; i++) {
		ant = nums[0];
		for (int o = 0; o < pow(2, i); o++) {
			este = nums[int(pow(2, d - i) - 1)];
			for (int u = 0; u < pow(2, d - i); u++) {
				terrain[u + o * pow(2, d - i)] += (ant + u * float(este - ant) / pow(2, d - i)) / float(pow(2, i));
			}
			ant = este;
		}
	}
}

void Amundo::perilnoise2d(int d)
{
	//srand(subseed);
	float este = 0;
	float n = 0;

	vector<float> nums;
	for (int x = 0; x < pow(2, d); x++) {
		nums.clear();
		for (int y = 0; y < pow(2, d); y++) {
			//			n = noise(x * (numofcuads - 1) / pow(2, d)+ (numofcuads - 1) / pow(2, d) /2.f, y * (numofcuads - 1) / pow(2, d) + (numofcuads - 1) / pow(2, d) / 2.f);
			nums.push_back(n);
		}
		perilnoise(nums, d);
		terreno.push_back(terrain);
	}
	for (int x = 0; x < pow(2, d); x++) {
		transpuesta.resize(terreno.size());
		for (int y = 0; y < pow(2, d); y++) {
			transpuesta[x].push_back(terreno[y][x]);
		}
	}
	for (int x = 0; x < pow(2, d); x++) {
		perilnoise(transpuesta[x], d);
		tfinal.push_back(terrain);
	}
}

float Amundo::dotp(float x, float y, int e, int d)
{
	if (e > 1) {
		y = y - 1;
	}
	if (e % 2 != 0) {
		x = x - 1;
	}
	if (d <= 1) {
		y *= -1;
	}
	if (d % 2 == 0) {
		x *= -1;
	}
	return x + y;
}

float Amundo::interpolation(float ini, float end, float aki)
{
	volatile int qw = 0;
	if (aki > 1) {
		qw = 1;
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));

	}
	return ini + (6 * pow(aki, 5) - 15 * pow(aki, 4) + 10 * pow(aki, 3)) * (end - ini);
}

float Amundo::getnoises(float x, float y)
{
	float ans = 0;
	for (int a = 0; a < noisesize.Num(); a++) {
		ans += noise(x, y, a) * noisesize[a];
	}
	return ans;
}

float Amundo::noise(volatile float x, volatile float y, int a)
{
	if (!v) {
		return 0;
	}
	volatile float nx = x / sizedivs * (noises[a] - 1) + (noises[a] - 1) / (sizedivs * 2.f);
	volatile float ny = y / sizedivs * (noises[a] - 1) + (noises[a] - 1) / (sizedivs * 2.f);
	volatile int xint = nx;
	volatile int yint = ny;
	volatile float xres = nx - xint;
	volatile float yres = ny - yint;
	volatile float p00 = dotp(xres, yres, 0, getvectorat(xint, yint, a));
	volatile float p01 = dotp(xres, yres, 1, getvectorat(xint + 1, yint, a));
	volatile float p02 = dotp(xres, yres, 2, getvectorat(xint, yint + 1, a));
	volatile float p03 = dotp(xres, yres, 3, getvectorat(xint + 1, yint + 1, a));
	volatile float p1 = interpolation(p00, p01, xres);
	volatile float p2 = interpolation(p02, p03, xres);
	volatile float p = interpolation(p1, p2, yres);
	return p;

}

float Amundo::peril(float x, float y)
{
	if (!rn) {
		return 0;
	}
	volatile float nx = x / sizex * (pow(2, depth) - 1);
	volatile float ny = y / sizex * (pow(2, depth) - 1);
	volatile int xint = nx;
	volatile int yint = ny;
	volatile float xres = nx - xint;
	volatile float yres = ny - yint;
	float p1 = interpolation(tfinal[xint][yint], tfinal[xint + 1][yint], xres);
	float p2 = interpolation(tfinal[xint][yint + 1], tfinal[xint + 1][yint + 1], xres);
	return interpolation(p1, p2, yres);
	return 0;
}

void Amundo::createchuncks(int x, int y)
{
	std::string scord;
	bool vf = true;
	FTransform trans;
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			scord = std::to_string(x + (i + 1) % 3 - 1) + std::to_string(y + (o + 1) % 3 - 1);
			chunksforcreate.push({ x + (i + 1) % 3 - 1,y + (o + 1) % 3 - 1 });
			vf = true;
			for (std::pair<string, vector<vector<int>>> u : destroyed) {
				if (u.first == scord) {
					vf = false;
					break;
				}
			}
			if (vf) {
				//chunksforcreate.push({ x + (i + 1) % 3 - 1,y + (o + 1) % 3 - 1 });
				cubitos.insert({ scord,vector<vector<vector<int>>>() });
				//destroyed.insert({ scord,vector<vector<int>>() });
				cubitos[scord].resize(sizex);
				for (int x = 0; x < sizex; x++) {
					cubitos[scord][x].resize(sizey);
					for (int y = 0; y < sizex; y++) {
						cubitos[scord][x][y].resize(sizez);
						for (int z = 0; z < sizex; z++) {
							if(z<6)
								cubitos[scord][x][y][z] = 1;
							else
								cubitos[scord][x][y][z] = 0;
						}
					}
				}
			}
			if (vf) {
				//chunksforcreate.push({ x + (i + 1) % 3 - 1,y + (o + 1) % 3 - 1 });
				cubitos.insert({ scord,vector<vector<vector<int>>>() });
				//destroyed.insert({ scord,vector<vector<int>>() });
				cubitos[scord].resize(sizex);
				for (int X = 0; X < sizex; X++) {
					cubitos[scord][X].resize(sizey);
					for (int Y = 0; Y < sizey; Y++) {
						cubitos[scord][X][Y].resize(sizez);
						for (int Z = 0; Z < sizez; Z++) {
							if (cubitos[scord][X][Y][Z] == 1) {
								//posis.push({ int(x - .5f * (sizex - 1) + sizex * px) * separacion, int(y - .5f * (sizey - 1) + sizey * py) * separacion, altu,relu(std::max(std::max(realaltu - randcord(vx + 1, vy)-getnewalt(vx+1, vy),realaltu - randcord(vx - 1, vy)-getnewalt(vx-1, vy)),std::max(realaltu - randcord(vx , vy + 1) - getnewalt(vx, vy+1),realaltu - randcord(vx , vy - 1)-getnewalt(vx, vy-1)))) });

								trans = FTransform(FVector(int(X - .5f * (sizex - 1) + sizex * x) * 100, int(Y - .5f * (sizey - 1) + sizey * y) * 100,100*Z));
								cubesinchunk[getchunk(x, y)].push_back(GetWorld()->SpawnActor<AActor>(capas[2], trans));
							}
						}
					}
				}
			}
		}
	}
	bild = true;
	/*vector<string>ss;
	for (std::pair< string, vector<void*>> a : cubesinchunk) {
		if (std::find(tempcoords.begin(), tempcoords.end(), a.first) == tempcoords.end()) {
			for (void* e : a.second) {
				((AActor*)e)->Destroy();
			}
			coords.erase(std::find(coords.begin(), coords.end(), a.first));
			a.second.clear();
			ss.push_back(a.first);
		}
	}
	for (string s : ss) {
		cubesinchunk.erase(s);
	}
	tempcoords.clear();*/
}

void Amundo::createchunck(int px, int py)
{
	/*s = std::to_string(px) + std::to_string(py);
	tempcoords.push_back(s);
	if (std::find(coords.begin(), coords.end(),s) != coords.end()) {
		return;
	}
	coords.push_back(s);
	FVector posi;
	FTransform trans;
	int n = 0;
	//int z;
	cubesinchunk.insert({ s, {} });
	/*vectors.clear();
	for (int a : noises) {
		makevektors(a);
	}*/
	//perilnoise2d(depth);
	//AActor *a;
	numc = 0;
	float altu, realaltu;
	volatile int ran = 0;
	int vx = 0;
	int vy = 0;
	static vector<vector<int>> pss;
	bool ya = false;
	for (volatile int x = 0; x < sizex; x++) {
		for (volatile int y = 0; y < sizey; y++) {
			vx = int(x - .5f * (sizex - 1) + sizex * px);
			vy = int(y - .5f * (sizey - 1) + sizey * py);
			realaltu = randcord(vx, vy) + getnewalt(vx, vy);
			altu = realaltu + reacomodar;
			num = capsum - altu;
			//posis.push({ int(x - .5f * (sizex - 1) + sizex * px) * separacion, int(y - .5f * (sizey - 1) + sizey * py) * separacion, altu,relu(std::max(std::max(realaltu - randcord(vx + 1, vy)-getnewalt(vx+1, vy),realaltu - randcord(vx - 1, vy)-getnewalt(vx-1, vy)),std::max(realaltu - randcord(vx , vy + 1) - getnewalt(vx, vy+1),realaltu - randcord(vx , vy - 1)-getnewalt(vx, vy-1)))) });
		}
	}
}

float Amundo::relu(float x)
{
	if (x < 0) {
		return 0;
	}
	return x;
}

string Amundo::getchunk(float x, float y)
{
	return std::to_string(int(round(x/sizex))) + std::to_string(int(round(y / sizey)));
}

int Amundo::getnewalt(volatile int x, volatile int y)
{
	volatile string estr = getchunk(x, y);
	if(destroyed[getchunk(x, y)].size()>0)
	return destroyed[getchunk(x, y)][((x % int(sizex)) + int(sizex)) % int(sizex)][((y % int(sizey)) + int(sizey)) % int(sizey)];
	return 0;
}

void Amundo::destroyblockat(int x, int y)
{
	string este = getchunk(x, y);
	volatile float pox = ((x % int(sizex)) + int(sizex)) % int(sizex);
	volatile float poy = ((y % int(sizey)) + int(sizey)) % int(sizey);
	FTransform trans = FTransform(FVector(x * 100, y * 100, int(randcord(x, y) + reacomodar - 1 + destroyed[getchunk(x, y)][((x % int(sizex)) + int(sizex)) % int(sizex)][((y % int(sizey)) + int(sizey)) % int(sizey)]) * separacion));
	//para chekar si ya hay uno abajo
	int realaltu=randcord(x, y)+ getnewalt(x, y);
	int otros = relu(std::max(std::max(realaltu - (randcord(x + 1, y)+ getnewalt(x + 1, y)), realaltu - (randcord(x - 1, y)+ getnewalt(x - 1, y))), std::max(realaltu - (randcord(x, y + 1)+ getnewalt(x, y-1)), realaltu - (randcord(x, y - 1) + getnewalt(x, y - 1)))));
	
	if (!(otros > 0)) {
		cubesinchunk[getchunk(x, y)].push_back(GetWorld()->SpawnActor<AActor>(capas[2], trans));
	}
	//cubesinchunk[getchunk(x, y)].push_back(GetWorld()->SpawnActor<AActor>(capas[2], trans));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d %f"), realaltu - (randcord(x + 1, y) + getnewalt(x + 1, y))));
	int tx = x, ty = y;
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			if (i!=o&&i+o!=2) {
				x = tx - 1 + i;
				y = ty - 1 + o;
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d %d"), i,o));
				if (int(randcord(tx, ty) + reacomodar - 1 + destroyed[getchunk(tx, ty)][((tx % int(sizex)) + int(sizex)) % int(sizex)][((ty % int(sizey)) + int(sizey)) % int(sizey)])+1 < randcord(x, y) + reacomodar - 1 + destroyed[getchunk(x, y)][((x % int(sizex)) + int(sizex)) % int(sizex)][((y % int(sizey)) + int(sizey)) % int(sizey)]) {
					trans = FTransform(FVector(x * 100, y * 100, int(randcord(tx, ty) + reacomodar - 1 + destroyed[getchunk(tx, ty)][((tx % int(sizex)) + int(sizex)) % int(sizex)][((ty % int(sizey)) + int(sizey)) % int(sizey)]+1) * separacion));
					cubesinchunk[getchunk(x, y)].push_back(GetWorld()->SpawnActor<AActor>(capas[2], trans));
				}
				
			}
		}
	}
	x = tx;
	y = ty;
	destroyed[getchunk(x, y)][((x % int(sizex)) + int(sizex)) % int(sizex)][((y % int(sizey)) + int(sizey)) % int(sizey)] -= 1;
}

int Amundo::power(int b, int e, int m)
{
	int ans = 1;
	for (int i = 0; i < e; i++) {
		ans *= b;
		ans %= m;
	}
	return ans;
}
bool Amundo::istree(volatile int x, volatile int y)
{
	
	int vx = (x % treesep + treesep) % treesep;
	int vy = (y % treesep + treesep) % treesep;
	if (vx >= treeloc && vx < treeloc + probtree && vy >= treeloc && vy < treeloc + probtree){
		x -= vx - treeloc;
		y -= vy - treeloc;
		
		volatile int place = rand2d(x, y) % (probtree*probtree);
		if (vx == treeloc + place / probtree && vy == treeloc + place % probtree)
			return true;
	}
	return false;
	/*if ((vx == treeloc && vy == treeloc)||( vx-1 == treeloc && vy == treeloc)||( vx == treeloc && vy-1 == treeloc)||( vx-1 == treeloc && vy-1 == treeloc)) {
		if (vx - 1 == treeloc) {
			x -= 1;
		}
		if (vy - 1 == treeloc) {
			y -= 1;
		}
		volatile int place = rand2d(x, y) % 4;
		if (vx  == treeloc + place / 2 && vy  == treeloc + place % 2)
			return true;
	}
	return false;*/
	
	
}
void Amundo::Destroy()
{
	Super::Destroy();
}
// Called when the game starts or when spawned
void Amundo::BeginPlay()
{
	Super::BeginPlay();
	capsum = 0;
	for (int i : tcapas) {
		capsum += i; 
	}
	tcapsum = capsum;
	gausean = { {0.002589 , 0.0107788 , 0.0241466 , 0.0107788 , 0.002589},
	{0.0107788 , 0.0448755 , 0.10053 , 0.0448755 , 0.0107788},
	{0.0241466 , 0.10053 , 0.225206 , 0.10053 , 0.0241466},
	{0.0107788 , 0.0448755 , 0.10053 , 0.0448755 , 0.0107788},
	{0.002589 , 0.0107788 , 0.0241466 , 0.0107788 , 0.002589}, };
	srand(seed);
	//randsize = 125;
	for (int i = 0; i < 125; i++) {
		rands[i] = rand();
	}

	//FThread tret = FThread("qwerty", &Amundo::createchuncks);
	createchuncks(0, 0);
}

// Called every frame
void Amundo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
	if (FoundActors.Num()>0) {
		SetActorLocation(FoundActors[0]->GetActorLocation());
	}
	FTransform trans;
	
	FVector posi;
//	volatile int checkando;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("tick del mundi"));
	/*for (int i = 0; i < spf; i++) {
		if (posis.size() > 0) {
			if (in < posis.front()[2]) {
				checkando = int(posis.front()[2] - capsum + tcapas[numc]);
				while (in > checkando) {
					capsum -= tcapas[numc];
					numc++;
					checkando = int(posis.front()[2] - capsum + tcapas[numc]);
					
				}
				trans = FTransform(FVector(posis.front()[0], posis.front()[1], in * separacion));
				cubesinchunk[s].push_back(GetWorld()->SpawnActor<AActor>(capas[numc], trans));
				in++;

			}
			else {
				if (crtrees &&istree(int(posis.front()[0]/100 ), int(posis.front()[1]/100 ))/*rand2d(int(posis.front()[0] / 100), int(posis.front()[1] / 100)) % probtree == 0//) {
					trans = FTransform(FVector(posis.front()[0], posis.front()[1], in * separacion));
					treesinchunk[s].push_back((Atree*)GetWorld()->SpawnActor<AActor>(tree, trans));

				}
				capsum = tcapsum;
				numc = 0;
				posis.pop();
				if (posis.size() > 0) {
					in = int(posis.front()[2] - posis.front()[3]);
					if (in >= posis.front()[2]) {
						volatile int op = 0;
					}
				}

			}
			//cubesinchunk[s].push_back((void*)GetWorld()->SpawnActor<AActor>(capas[0], trans));
		}
		else if (chunksforcreate.size() > 0) {
			s = std::to_string(chunksforcreate.front()[0]) + std::to_string(chunksforcreate.front()[1]);
			tempcoords.push_back(s);
			///////////////////////////////////////////////////////////////////////////////////////////////aka esta metiendo los temps
			if (std::find(coords.begin(), coords.end(), s) != coords.end()) {
				chunksforcreate.pop();
			}
			else {
				coords.push_back(s);
				cubesinchunk.insert({ s, {} });
				treesinchunk.insert({ s, {} });
				createchunck(chunksforcreate.front()[0], chunksforcreate.front()[1]);
				chunksforcreate.pop();
				if (posis.size() > 0)
					in = int(posis.front()[2] - posis.front()[3] - 1);
			}
			
		}
		else {
			if (chunksforcreate.size() == 0 && bild) {
				vector<string>ss;
				for (std::pair< string, vector<AActor*>> a : cubesinchunk) {
					if (std::find(tempcoords.begin(), tempcoords.end(), a.first) == tempcoords.end()) {
						for (AActor* e : a.second) {
							e->Destroy();
						}
						for (Atree* e : treesinchunk[a.first]) {
							
							e->Destroy();
						}
						if(std::find(coords.begin(), coords.end(), a.first)!= coords.end())
						coords.erase(std::find(coords.begin(), coords.end(), a.first));
						a.second.clear();
						ss.push_back(a.first);
					}
				}
				for (string st : ss) {
					cubesinchunk.erase(st);
				}
				tempcoords.clear();
				bild = false;
			}
		}
	}//*/

	
	//ACharacter* p= UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("pasa poraki"));
	if (FoundActors.Num()) {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d %d   %d %d"), round(FoundActors[0]->GetActorLocation().X / (sizex * separacion)) , isinchunckx , round(FoundActors[0]->GetActorLocation().Y / (sizey * separacion)) , isinchuncky));
		if (round(FoundActors[0]->GetActorLocation().X / (sizex * separacion)) != isinchunckx || round(FoundActors[0]->GetActorLocation().Y / (sizey * separacion)) != isinchuncky) {

			isinchunckx = round(FoundActors[0]->GetActorLocation().X / (sizex * separacion));
			isinchuncky = round(FoundActors[0]->GetActorLocation().Y / (sizey * separacion));
			
			createchuncks(isinchunckx, isinchuncky);
		}
	}
	else {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("no encontro alak tor"));
	}
		
}