// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>
using std::vector;

class ChunkMesh
{
	vector<FVector> vertices;
	vector<UINT> tris;
	vector<FVector2D> uvs;
public:
	ChunkMesh();
	~ChunkMesh();
	void addQuad();
};
