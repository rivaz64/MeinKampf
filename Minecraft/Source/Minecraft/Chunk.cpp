// Fill out your copyright notice in the Description page of Project Settings.
#include "Chunk.h"
#include"Block.h"
#include <vector>
#include <cmath>

unsigned int Chunk::size = 16;
unsigned int Chunk::height = 64;
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

float Chunk::perlinNoise2D(float x, float y,float localScale)
{
	x/=localScale;
	y/=localScale;
	x = abs(x);
	y = abs(y);
	float ix = (int)x;
	float iy = (int)y;
	float fx = fmod(x, 1);
	float fy = fmod(y, 1);
	FVector2D a = randomGradient(ix,iy);
	FVector2D b = randomGradient(ix+1,iy);
	FVector2D c = randomGradient(ix,iy+1);
	FVector2D d = randomGradient(ix+1,iy+1);
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

float Chunk::valueAt(float x, float y)
{
	float ans = 0;
	float localScale =scale;
	float localPersistence = 1;
	for(int32 i=0; i<octaves;i++){
		ans += perlinNoise2D(x,y,localScale)*localPersistence;
		localScale*=lacunarity;
		localPersistence*=persistence;
	}
	return ans;
}

Chunk::~Chunk()
{
	delete data;
}

void Chunk::generate(int x,int y)
{
	unsigned int actAlt = 0;
	/*for (unsigned int i = 0; i < len; ++i){
		actAlt = i % height;
		if (actAlt == 0){
			data[i] = 3;
		}
	}*/
	
	unsigned int alt = 0;
	
	for (unsigned int i = 0; i < len; ++i) {
		actAlt = i % height;
		if (actAlt == 0) {
			alt = valueAt(float(i / (size*height))/16.f+x,float((i % (size*height)) / height)/16.f+y)*12+16;
			//alt = abs(fmod(perlinNoise2D((float(i / (size*height))/16.f+x)*.6f, (float((i % (size*height)) / height)/16.f+y))*.6f,1))*30+2;
			data[i] = (int)CHUNK_BLOCK::BEDROCK;
			continue;
		}
		if (actAlt < alt-1) {
			
			data[i] = (int)CHUNK_BLOCK::STONE;
		}
		else if (actAlt < alt) {
			if(alt <15){
				data[i] = (int)CHUNK_BLOCK::GRASS;
				//data[i] = (int)CHUNK_BLOCK::SAND;
			}
			else
			data[i] = (int)CHUNK_BLOCK::GRASS;
		}
		else if(actAlt<waterAtitude){
			data[i] = (int)CHUNK_BLOCK::WATTER;
		}
	}
	int pos = abs(rand2d(x,y))*25;
	int posx = 5+pos/5;
	int posy = 5+pos%5;
	alt = valueAt(float(posx)/16.f+x,float(posy)/16.f+y)*12+16;
	//alt = abs(fmod(perlinNoise2D((float(posx)/16.f+x)*.6, (float(posy)/16.f+y))*.6f,1))*30+2;
	if(alt>=15){
		for(int i=0;i<6;++i){
			data[posx*size*height+posy*height+alt+i]=(int)CHUNK_BLOCK::WOOD;
		}
		for(int i=0;i<3;++i){
			for(int o=0;o<3;++o){
				if(i==1 || o==1){
					data[(posx-1+i)*size*height+(posy-1+o)*height+alt+6]=(int)CHUNK_BLOCK::LEAVES;
				}
				if(!(i==1 && o==1)){
					data[(posx-1+i)*size*height+(posy-1+o)*height+alt+5]=(int)CHUNK_BLOCK::LEAVES;
				}
			}
		}
		for(int i=0;i<5;++i){
			for(int o=0;o<5;++o){
				if(!(i==2 && o==2)){
					data[(posx-2+i)*size*height+(posy-2+o)*height+alt+3]=(int)CHUNK_BLOCK::LEAVES;
					if(!((i==0 && o==0)||(i==4 && o==0)||(i==0 && o==4)||(i==4 && o==4))){
						data[(posx-2+i)*size*height+(posy-2+o)*height+alt+4]=(int)CHUNK_BLOCK::LEAVES;
					}
				}
			}
		}
	}

	//pos = abs(rand2d(x+i*2,y+i*3))*256;
	
  
	for(int i=0;i<6;++i){
		pos = abs(rand2d(x+i*2,y+i*3))*256;
		posx = pos/16;
		posy = pos%16;
		alt = valueAt(float(posx)/16.f+x,float(posy)/16.f+y)*12+16;
		if(alt == 14){
			data[posx*size*height+posy*height+alt]=(int)CHUNK_BLOCK::SUGAR_CANE;
			data[posx*size*height+posy*height+alt+1]=(int)CHUNK_BLOCK::SUGAR_CANE;
		}
		else if(data[posx*size*height+posy*height+alt]==(int)CHUNK_BLOCK::AIR){
			data[posx*size*height+posy*height+alt]=(int)CHUNK_BLOCK::RED_FLOWER+i%2;
		}
	}//*/
	
	//spawnTreeAt(posx,posy,posy+y*16);
	
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

FVector2D Chunk::randomGradient(int x, int y)
{
	const unsigned w = 8 * sizeof(unsigned);
	const unsigned s = w / 2; 
	unsigned a = x, b = y;
	a *= 3284157443; b ^= a << s | a >> (w-s);
	b *= 1911520717; a ^= b << s | b >> (w-s);
	a *= 2048419325;
	float random = a * (3.14159265 / ~(~0u >> 1)); 
	return {sinf(random),cosf(random)};
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
	/*unsigned int alt = abs(fmod(perlinNoise2D(float(x)/16.f+x, float(y)/16.f+y),1))*12+2;
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
	}*/
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
	return data[mod(x,16) *height*size + mod(y,16) * height + z];
}

char Chunk::getBlockAt(FVector p)
{
	return getChunkAt(floor(p.X/16.f),floor(p.Y/16.f))->getAt(p.X,p.Y,p.Z);
}




float Chunk::getAltAt(float x, float y)
{
	return 0;//abs(fmod(perlinNoise2D(float(i / (size*height))/16.f+x, float((i % (size*height)) / height)/16.f+y),1))*12+2;
}
