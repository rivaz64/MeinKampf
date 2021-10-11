// Fill out your copyright notice in the Description page of Project Settings.
#include "Chunk.h"
#include <vector>
#include <cmath>
unsigned int Chunk::size = 16;
unsigned int Chunk::height = 32;
unsigned int Chunk::len = size * size * height;
HashTable2d* Chunk::savedData = nullptr;
std::vector<FVector2D> vecs = { FVector2D(1,0),FVector2D(0,1) ,FVector2D(-1,0) ,FVector2D(0,-1),FVector2D(1.f/sqrt(2),1.f / sqrt(2)),FVector2D(1.f / sqrt(2),-1.f / sqrt(2)),FVector2D(-1.f / sqrt(2),1.f / sqrt(2)),FVector2D(-1.f / sqrt(2),-1.f / sqrt(2)) };
float Chunk::rand2d(float x, float y)
{
	return fmod(sin(x* 2.71828182845904523536+y* 7.38905609893065022723) * 43758.5453123, 1);
}

float Chunk::lerp(float a, float b, float t)
{
	return a + t * (b-a);
}

float Chunk::perlinNoise2D(float x, float y)
{
	x = abs(x);
	y = abs(y);
	float ix = (int)x;
	float iy = (int)y;
	float fx = fmod(x, 1);
	float fy = fmod(y, 1);
	FVector2D a = vecs[int(abs(rand2d(ix, iy)) * 8.f)];
	FVector2D b = vecs[int(abs(rand2d(ix+1, iy)) * 8.f)];
	FVector2D c = vecs[int(abs(rand2d(ix, iy+1)) * 8.f)];
	FVector2D d = vecs[int(abs(rand2d(ix+1, iy+1)) * 8.f)];
	float e = a.X * fx + a.Y * fy;
	float f = b.X * (1-fx) + b.Y * fy;
	float g = c.X * fx + c.Y * (1-fy);
	float h = d.X * (1 - fx) + d.Y * (1 - fy);
	float i = lerp(e,f,fx);
	float j = lerp(g, h, fx);
	float k = lerp(i, j, fy);
	return k;
}

Chunk::Chunk()
{
	data = new unsigned char[len];
	memset(data,0,sizeof(char)*len);
}

Chunk::~Chunk()
{
	delete data;
}

void Chunk::generate(int x,int y)
{
	unsigned int alt = 0;
	unsigned int actAlt = 0;
	for (unsigned int i = 0; i < len; ++i) {
		actAlt = i % height;
		if (actAlt == 0) {
			alt = abs(fmod(perlinNoise2D((float(i / (size*height))/16.f+x)*.8f, (float((i % (size*height)) / height)/16.f+y))*.8f,1))*12+2;
			data[i] = 3;
			continue;
		}
		if (actAlt < alt-1) {
			
			data[i] = 2;
		}
		else if (actAlt < alt) {
			if(alt <4){
				data[i] = 7;
			}
			else
			data[i] = 1;
		}
	}
	int pos = abs(rand2d(x,y))*25;
	int posx = 5+pos/5;
	int posy = 5+pos%5;
	alt = abs(fmod(perlinNoise2D((float(posx)/16.f+x)*.8, (float(posy)/16.f+y))*.8f,1))*8+2;
	if(alt<4){
		generated = true;
		return;
	}
		
	//spawnTreeAt(posx,posy,posy+y*16);
	for(int i=0;i<6;++i){
		data[posx*size*height+posy*height+alt+i]=5;
	}
	for(int i=0;i<3;++i){
		for(int o=0;o<3;++o){
			if(i==1 || o==1){
				data[(posx-1+i)*size*height+(posy-1+o)*height+alt+6]=6;
			}
			if(!(i==1 && o==1)){
				data[(posx-1+i)*size*height+(posy-1+o)*height+alt+5]=6;
			}
		}
	}
	for(int i=0;i<5;++i){
		for(int o=0;o<5;++o){
			if(!(i==2 && o==2)){
				data[(posx-2+i)*size*height+(posy-2+o)*height+alt+3]=6;
				if(!((i==0 && o==0)||(i==4 && o==0)||(i==0 && o==4)||(i==4 && o==4))){
					data[(posx-2+i)*size*height+(posy-2+o)*height+alt+4]=6;
				}
			}
		}
	}//*/
	generated = true;
}

void Chunk::createChunkAt(int x, int y)
{
	auto* data = savedData->getNodeAt(x, y);
	if (!data) {
		auto* ch = new Chunk;
		savedData->insert(ch, x, y);
	}
}

void Chunk::generateChunkAt(int x, int y)
{
	createChunkAt(x, y);
	createChunkAt(x+1, y);
	createChunkAt(x-1, y);
	createChunkAt(x, y+1);
	createChunkAt(x, y-1);
	auto* data = (Chunk*)savedData->getNodeAt(x, y);
	if (!data->generated) {
		data->generate(x, y);
		/*int pos = abs(rand2d(x,y))*25;
		int posx = pos/5-2;
		int posy = pos%5-2;
		spawnTreeAt(x*16+posx,y*16+posy);*/
	}
}

Chunk* Chunk::getChunkAt(int x, int y)
{
	generateChunkAt(x, y);
	generateChunkAt(x+1, y);
	generateChunkAt(x-1, y);
	generateChunkAt(x, y+1);
	generateChunkAt(x, y-1);
	return (Chunk*)savedData->getNodeAt(x, y);
}

void Chunk::spawnTreeAt(int x, int y)
{
	unsigned int alt = abs(fmod(perlinNoise2D(float(x)/16.f+x, float(y)/16.f+y),1))*12+2;
	for(int i=0;i<5;++i){
		spawnBlockAt(x,y,alt+i,5);
	}
	for(int i=0;i<3;++i){
		for(int o=0;o<3;++o){
			if(i==1 || o==1){
				spawnBlockAt(x-1+i,y-1+o,alt+5,6);
			}
			if(!(i==1 && o==1)){
				spawnBlockAt(x-1+i,y-1+o,alt+4,6);
			}
		}
	}
	for(int i=0;i<5;++i){
		for(int o=0;o<5;++o){
			if(!(i==2 && o==2)){
				spawnBlockAt(x-2+i,y-2+o,alt+2,6);
				if(!((i==0 && o==0)||(i==4 && o==0)||(i==0 && o==4)||(i==4 && o==4))){
					spawnBlockAt(x-2+i,y-2+o,alt+3,6);
				}
			}
		}
	}
}

void Chunk::spawnBlockAt(int x,int y,int z, char type){
	createChunkAt(floor(float(x)/16.f),floor(float(y)/16.f));
	Chunk* actual = (Chunk*)savedData->getNodeAt(floor(float(x)/16.f),floor(float(y)/16.f));
	
	if(actual){
		actual->spawnBlock(mod(x,16),mod(y,16),z,type);
	}
	
}

void Chunk::spawnBlock(int x,int y,int z, char type)
{
	data[x *height*size + y * height + z] = type;
}

inline char Chunk::getAt(int x,int y,int z)
{
	return data[x *height*size + y * height + z];
}

inline int Chunk::mod(int n,int m)
{
	return ((n%m)+m)%m;
}



float Chunk::getAltAt(float x, float y)
{
	return 0;//abs(fmod(perlinNoise2D(float(i / (size*height))/16.f+x, float((i % (size*height)) / height)/16.f+y),1))*12+2;
}
