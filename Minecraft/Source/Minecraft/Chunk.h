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
	static unsigned int size;
	static unsigned int height;
	static unsigned int len;
	bool generated = false;
	static float rand2d(float x, float y);
	unsigned char* data;
	FVector position;
	static float lerp(float a, float b, float t);
	static float perlinNoise2D(float x,float y);
	Chunk();
	~Chunk();
	void generate(int x, int y);
	static HashTable2d* savedData;
	static void createChunkAt(int x,int y);
	static void generateChunkAt(int x, int y);
	static Chunk* getChunkAt(int x, int y);
	static void spawnTreeAt(int x,int y);
	static void spawnBlockAt(int x,int y,int z, char type);
	void spawnBlock(int x,int y,int z, char type);
	static inline int mod(int n,int m);
	inline char getAt(int x,int y,int z);
	float getAltAt(float x,float y);
};
