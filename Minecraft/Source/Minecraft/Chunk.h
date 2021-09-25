// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HashTable2d.h"
/**
 * 
 */
class Chunk
{
	
public:
	Chunk* left=NULL;
	Chunk* right=NULL;
	Chunk* front = NULL;
	Chunk* back = NULL;
	float rand2d(float x, float y);
	unsigned char* data;
	FVector position;
	float lerp(float a, float b, float t);
	float perlinNoise2D(float x,float y);
	Chunk();
	~Chunk();
	void generate(int x, int y);
	static HashTable2d* savedData;
	static void generateChunkAt(int x, int y);
	static Chunk* getChunkAt(int x, int y);

};
