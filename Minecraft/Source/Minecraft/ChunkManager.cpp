// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkManager.h"
#include <fstream>

int ChunkManager::sx ;
int ChunkManager::sy ;

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
	auto chnk = getChunkAt(floor(p.X/16.f),floor(p.Y/16.f));
	if(chnk && chnk->data )
  return getChunkAt(floor(p.X/16.f),floor(p.Y/16.f))->
	data[Chunk::mod(int(p.X),16) *Chunk::height*Chunk::size + Chunk::mod(int(p.Y),16) * Chunk::height + int(p.Z)];
	return 0;
}

void ChunkManager::setBlockAt(FVector p, char b)
{
  getChunkAt(floor(p.X/16.f),floor(p.Y/16.f))->
	data[Chunk::mod(int(p.X),16) *Chunk::height*Chunk::size + Chunk::mod(int(p.Y),16) * Chunk::height + int(p.Z)] = b;

}

void ChunkManager::setSeed(int s)
{
	seed = s;
	FMath::RandInit(s);
	sx = FMath::Rand()%216;
	sy = FMath::Rand()%216;
}

void ChunkManager::save(FVector playerPos)
{
	std::ofstream file;
	file.open("D:/my_wordl.mc",std::ios::binary| std::ios::out);
	file.write((char*)&seed,sizeof(int));
	file.write((char*)&playerPos,sizeof(FVector));
	int sizex = savedData.size();
	int sizey = savedData.begin()->second->size();
	file.write((char*)&sizex,sizeof(FVector));
	file.write((char*)&sizey,sizeof(FVector));
	for(auto row : savedData){
		file.write((char*)&row.first,sizeof(int));
		for(auto col : *row.second.get()){
			file.write((char*)&col.first,sizeof(int));
			file.write((char*)col.second->data,sizeof(unsigned char)*Chunk::len);
		}
	}
	file.close();

}

void ChunkManager::load()
{
	FVector playerPos;
	std::ifstream file;
	file.open("D:/my_wordl.mc",std::ios::binary| std::ios::in);
	file.read((char*)&seed,sizeof(int));
	setSeed(seed);
	file.read((char*)&playerPos,sizeof(FVector));

	int sizex,sizey;

	int actualx,actualy;

	file.read((char*)&sizex,sizeof(int));
	file.read((char*)&sizey,sizeof(int));
	std::shared_ptr<std::map<int,std::shared_ptr<Chunk>>> row;
	std::shared_ptr<Chunk> col;
	for(int i = 0;i<sizex;i++){
		file.read((char*)&actualx,sizeof(int));
		savedData.insert({actualx,std::make_shared<std::map<int,std::shared_ptr<Chunk>>>()});
	  row = savedData[actualx];
		for(int o = 0;o<sizey;o++){
			file.read((char*)&actualy,sizeof(int));
			row->insert({actualy, std::make_shared<Chunk>()});
		  col = (*row.get())[actualy];
			file.read((char*)&col->data,sizeof(unsigned char)*Chunk::len);
			col->generated = true;
		}
	}
	file.close();
}


