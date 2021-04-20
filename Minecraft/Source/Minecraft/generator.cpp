// Fill out your copyright notice in the Description page of Project Settings.


#include "generator.h"
#include"tree.h"
// Sets default values
Agenerator::Agenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	gausean = { {0.002589 , 0.0107788 , 0.0241466 , 0.0107788 , 0.002589},
	{0.0107788 , 0.0448755 , 0.10053 , 0.0448755 , 0.0107788},
	{0.0241466 , 0.10053 , 0.225206 , 0.10053 , 0.0241466},
	{0.0107788 , 0.0448755 , 0.10053 , 0.0448755 , 0.0107788},
	{0.002589 , 0.0107788 , 0.0241466 , 0.0107788 , 0.002589}, };
	srand(749);
	for (int i = 0; i < 125; i++) {
		rands[i] = rand();
	}
}

// Called when the game starts or when spawned
void Agenerator::BeginPlay()
{
	Super::BeginPlay();
	
	
	//randsize = 125;
	
}

int Agenerator::rand2d(int x, int y)
{
	x = (x % 125 + 125) % 125;
	y = (y % 125 + 125) % 125;
	volatile int n = (power(2, x, 125) + power(3, y, 125)) % 125;
	return rands[n];
}

int Agenerator::altnoised(int ix, int iy)
{
	int ans = 0;
	for (int i = -2; i < 3; i++) {
		for (int o = -2; o < 3; o++) {
			ans += (rand2d(ix + i, iy + o) % 8) * gausean[i + 2][o + 2];
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT(" %d"), rand2d(ix + i, iy + o)));
		}
	}
	return ans;
}

int Agenerator::altura(int x,int y)
{
	//FVector2D mapon;
	/*if (x > 16) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d %d"), x, y));
	}
	int ans[4] = { 0,0,0,0 };
	int ix = floor(float(x) / 8.f);
	int iy = floor(float(y) / 8.f);
	ans[0]=altnoised(ix, iy)*6;
	ans[1] = altnoised(ix+1, iy)*6;
	ans[2] = altnoised(ix, iy+1)*6;
	ans[3] = altnoised(ix+1, iy+1)*6;
	float xres = (float((x % 8 + 8) % 8)/8.f+1.f/16.f);
	 float yres = float((y % 8 + 8) % 8)/8.f + 1.f / 16.f;
	 float p1 = interpolation(ans[0] , ans[1], xres);
	 float p2 = interpolation(ans[2] , ans[3], xres);
	 float p = interpolation(p1, p2, yres);
	 
	return p+2;*/
	return (FMath::PerlinNoise2D({ float(x+lx*16) / 50.f,float( y+ ly * 16)/50.f})+1)*8;
}

int Agenerator::power(int b, int e, int m)
{
	int ans = 1;
	for (int i = 0; i < e; i++) {
		ans *= b;
		ans %= m;
	}
	return ans;
}

int Agenerator::interpolation(float ini, float end, float aki)
{
	return ini + (6 * pow(aki, 5) - 15 * pow(aki, 4) + 10 * pow(aki, 3)) * (end - ini);
}

// Called every frame
void Agenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void Agenerator::spawntrees(vector<vector<vector<int>>>* chunk)
{
	int i,rx,ry;
	for (int a = 0; a < 3; a++) {
		for (int e = 0; e < 3; e++) {
			rx = a * 5 + rand() % 4;
			ry = e * 5 + rand() % 4;
			for (i = 0; i < 16; i++) {
				if ((*chunk)[rx][ry][i] == 0) {
					break;
				}
			}
			Atree::spawn(rx, ry, i, chunk);
		}
	}
}
FAsyncTask<task>* Agenerator::runtask(int32 n, vector<vector<vector<int>>>* chunk,  bool* vf,int x,int y)
{
	lx = x;
	ly = y;

	FAsyncTask<task>* at = new FAsyncTask<task>(n, chunk, vf,this);
	at->StartBackgroundTask();
	return at;
}
task::task(int32 num, vector<vector<vector<int>>>* ch, bool* vf, Agenerator* s) {
	n = num;
	chunk = ch;
	b = vf;
	self = s;
}
void task::DoWork() {
	chunk->resize(n);
	FAsyncTask<subtask>* thre;
	
	for (int X = 0; X < n; X++) {
		(*chunk)[X].resize(n);
		//threads.push_back(new FAsyncTask<subtask>((n, &(*chunk)[X])));
		//threads[X]->StartBackgroundTask();
		thre=(new FAsyncTask<subtask>(n, &(*chunk)[X], self,X));
		thre->StartBackgroundTask();
		threads.push_back(thre);

		//((FAutoDeleteAsyncTask<subtask>*)threads[X])
		//(new FAutoDeleteAsyncTask<subtask>(n, &(*chunk)[X],b))->StartBackgroundTask();
	}
	volatile int x = 0;
	for (int X = 0; X < n; X++) {

		threads[X]->EnsureCompletion();
	}
	*b = true;
}

subtask::subtask(int32 num, vector<vector<int>>* ch, Agenerator* s,int x)
{
	n = num;
	chunk = ch;
	self=s;
	X = x;
}



void subtask::DoWork() {
	chunk->resize(n);
	int alt;
	for (int Y = 0; Y < n; Y++) {
		(*chunk)[Y].resize(n);
			
		//alt = self->altura(X+self->lx*16,Y+self->ly*16);
		alt = self->altura(X , Y);
		for (int Z = 0; Z < n; Z++) {
			for (int i = 0; i < self->capas.Num(); i++) {
				if (Z > alt - self->capas[i]) {
					(*chunk)[Y][Z] = i;
					break;
				}
			}
		}
	}
}
