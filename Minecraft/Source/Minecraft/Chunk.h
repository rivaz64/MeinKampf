// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include<memory>
/**
 * 
 */
class MINECRAFT_API Chunk
{
	
public:
	static unsigned int size;
	static unsigned int height;
	static unsigned int len;
	bool generated = false;
	static float rand2d(float x, float y);
	unsigned char* data = nullptr;
	FVector position;
	static float lerp(float a, float b, float t);
	static float perlinNoise2D(float x,float y,float localScale);
	float valueAt(float x,float y);
	Chunk();
	~Chunk();
	void generate(int x, int y);
	static std::map<int,std::shared_ptr<std::map<int,std::shared_ptr<Chunk>>>> savedData;

	/**
	 * @brief gets the chunk at this position, if there is none it creates one there
	 * @param x 
	 * @param y 
	 * @return 
	*/
	static std::shared_ptr<Chunk>
	getChunkAt(int x,int y);

	/**
	 * @brief gets the block at that position
	 * @param p 
	 * @return 
	*/
	static char getBlockAt(FVector p);

	/**
	 * @brief sets the block at that position
	 * @param p 
	 * @param b 
	*/
	static void setBlockAt(FVector p,char b);

	static FVector2D randomGradient(int x, int y);
	static void generateChunkAt(int x, int y);
	static void spawnTreeAt(int x,int y);
	unsigned int waterAtitude = 14;
  static inline int mod(int n, int m)
  {
    return ((n % m) + m) % m;
  }
	
	float getAltAt(float x,float y);

	float scale =2;

	int32 octaves = 2;

	float lacunarity = .5f;

	float persistence = .75f;

	bool spawned = false;
};
