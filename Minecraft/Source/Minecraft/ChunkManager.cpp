// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkManager.h"

ChunkManager::ChunkManager()
{
}

ChunkManager::~ChunkManager()
{
}

std::shared_ptr<Chunk> ChunkManager::getChunkAt(int x, int y)
{
  auto row = savedData[x];
	if(!row){
		savedData[x] = std::make_shared<std::map<int,std::shared_ptr<Chunk>>>();
		row = savedData[x];
	}
	auto data = (*row.get())[y];
	if (!data) {
		(*row.get())[y] = std::make_shared<Chunk>();
		 data = (*row.get())[y];
	}
	return data;
}

void ChunkManager::generateChunkAt(int x, int y)
{
	auto data = getChunkAt(x,y);
	if (!data->generated) {
		data->generate(x, y);
	}
}

char ChunkManager::getBlockAt(FVector p)
{
  return getChunkAt(floor(p.X/16.f),floor(p.Y/16.f))->
	data[Chunk::mod(int(p.X),16) *Chunk::height*Chunk::size + Chunk::mod(int(p.Y),16) * Chunk::height + int(p.Z)];

}

void ChunkManager::setBlockAt(FVector p, char b)
{
  getChunkAt(floor(p.X/16.f),floor(p.Y/16.f))->
	data[Chunk::mod(int(p.X),16) *Chunk::height*Chunk::size + Chunk::mod(int(p.Y),16) * Chunk::height + int(p.Z)] = b;

}


