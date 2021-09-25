// Fill out your copyright notice in the Description page of Project Settings.
#include "Chunk.h"
#include <vector>
#include <cmath>
unsigned int size = 16;
unsigned int height = 16;
unsigned int len = size * size * height;
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
	data = new unsigned char[size * size * height];
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
		actAlt = i % 16;
		if (actAlt == 0) {
			alt = abs(fmod(perlinNoise2D(float(i / 256)/16.f+x, float((i % 256) / 16)/16.f+y),1))*8+2;
			data[i] = 3;
			continue;
		}
		if (actAlt < alt-1) {
			data[i] = 2;
		}
		else if (actAlt < alt) {
			data[i] = 1;
		}
		else {
			data[i] = 0;
		}
	}
}

void Chunk::generateChunkAt(int x, int y)
{
	auto* data = savedData->getNodeAt(x, y);
	if (!data) {
		auto* ch = new Chunk;
		ch->generate(x, y);
		savedData->insert(ch, x, y);
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
