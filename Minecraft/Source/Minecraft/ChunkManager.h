// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Chunk.h"
/**
 * 
 */
class MINECRAFT_API ChunkManager
{
public:

	std::map<int,std::shared_ptr<std::map<int,std::shared_ptr<Chunk>>>> savedData;

	ChunkManager();
	~ChunkManager();

	std::shared_ptr<Chunk> 
	getChunkAt(int x, int y);

	void generateChunkAt(int x, int y);

	char getBlockAt(FVector p);

	void setBlockAt(FVector p, char b);

	void setSeed(int s);

	void save(FVector playerPos);

	static int sx;

	static int sy;

	int seed;

};

