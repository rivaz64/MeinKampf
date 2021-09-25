// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkMesh.h"

ChunkMesh::ChunkMesh()
{
}

ChunkMesh::~ChunkMesh()
{
}

void ChunkMesh::addQuad()
{
	UINT vertexNum = vertices.size();

	tris.push_back(vertexNum - 4);
	tris.push_back(vertexNum - 3);
	tris.push_back(vertexNum - 2);

	tris.push_back(vertexNum - 4);
	tris.push_back(vertexNum - 2);
	tris.push_back(vertexNum - 1);
}
