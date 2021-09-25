// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunckMesh.h"
#include <vector>
#include "HashTable2d.h"
#include "B_grass.h"
#include "B_stone.h"
#include "B_bedrock.h"
using std::vector;
float TEXTURESIZE = 1.f / 16.f;
vector<FVector2D> textcords = { FVector2D(0, 0),FVector2D(TEXTURESIZE, 0),FVector2D(0, TEXTURESIZE) };
vector<Block*> bloks = { new B_grass,new B_stone, new B_bedRock };
// Sets default values
AChunckMesh::AChunckMesh()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//scene = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	m_mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("chunk"));
	m_mesh->bUseAsyncCooking = true;
	m_mesh->SetMaterial(0,mat);
}

void AChunckMesh::destroingAt(FVector pos, FVector nor)
{
	
}



// Called when the game starts or when spawned
void AChunckMesh::BeginPlay()
{
	Super::BeginPlay();
	
}

void AChunckMesh::PostActorCreated()
{
	Super::PostActorCreated();
	generateMesh();
}

void AChunckMesh::PostLoad()
{
	Super::PostLoad();
	//generateMesh();
}

void AChunckMesh::generateMesh()
{
	x = GetActorLocation().X / 1600;
	y = GetActorLocation().Y / 1600;
	Chunk::generateChunkAt(x,y);
	c=Chunk::getChunkAt(x,y);
	vertices.Reset();
	Triangles.Reset();
	normals.Reset();
	UV0.Reset();
	tangents.Reset();
	vertexColors.Reset();
	for (unsigned i = 0; i < 4096; ++i) {
		if (c->data[i] != 0) {
			addCube(FVector(i / 256, (i % 256) / 16, i % 16), c->data[i]-1);
		}
	}
	//m_mesh->CreateMeshSection()
	m_mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);

	// Enable collision data
	m_mesh->ContainsPhysicsTriMeshData(true);
}

void AChunckMesh::addQuad(FVector& pos, FVector face, bool front,volatile char blockType)
{
	FVector vx = FVector(face.X, 0, 0);
	FVector vy = FVector(0, face.Y, 0);
	FVector vz = FVector(0, 0, face.Z);
	vertices.Add(FVector(pos.X * 100 + vx.X * 100, pos.Y * 100 + vx.Y * 100, pos.Z * 100 + vx.Z * 100));
	vertices.Add(FVector(pos.X * 100 + vy.X * 100, pos.Y * 100 + vy.Y * 100, pos.Z * 100 + vy.Z * 100));
	vertices.Add(FVector(pos.X * 100 + vz.X * 100, pos.Y * 100 + vz.Y * 100, pos.Z * 100 + vz.Z * 100));
	vertices.Add(FVector(face.X * 100 + pos.X * 100, face.Y * 100 + pos.Y * 100, face.Z * 100 + pos.Z * 100));


	if (front) {
		Triangles.Add(totaltris);
		Triangles.Add(totaltris + 1);
		Triangles.Add(totaltris + 2);
		if (face.X == 0) {
			Triangles.Add(totaltris + 2);
			Triangles.Add(totaltris + 1);
			Triangles.Add(totaltris + 3);

			addTextures(0, 1, bloks[blockType]->textures[0]);
		}
		if (face.Y == 0) {
			Triangles.Add(totaltris + 0);
			Triangles.Add(totaltris + 2);
			Triangles.Add(totaltris + 3);

			addTextures(1, 1, bloks[blockType]->textures[1]);
		}
		if (face.Z == 0) {
			Triangles.Add(totaltris + 1);
			Triangles.Add(totaltris + 0);
			Triangles.Add(totaltris + 3);

			addTextures(2, 1, bloks[blockType]->textures[2]);

		}
	}
	else {
		Triangles.Add(totaltris);
		Triangles.Add(totaltris + 2);
		Triangles.Add(totaltris + 1);
		if (face.X == 0) {
			Triangles.Add(totaltris + 2);
			Triangles.Add(totaltris + 3);
			Triangles.Add(totaltris + 1);
			addTextures(0, 2, bloks[blockType]->textures[3]);


		}
		if (face.Y == 0) {
			Triangles.Add(totaltris + 0);
			Triangles.Add(totaltris + 3);
			Triangles.Add(totaltris + 2);

			addTextures(1, 2, bloks[blockType]->textures[4]);

		}
		if (face.Z == 0) {
			Triangles.Add(totaltris + 1);
			Triangles.Add(totaltris + 3);
			Triangles.Add(totaltris + 0);

			addTextures(2, 2, bloks[blockType]->textures[5]);


		}
	}
	totaltris += 4;
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));

	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));

	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
}

void AChunckMesh::addCube(FVector pos, char blockType)
{
	FVector other = pos + FVector(1, 1, 1);
	if (checkFace(pos, FVector(0, 0, -1)))
		addQuad(pos, FVector(1, 1, 0), true, blockType);
	if (checkFace(pos, FVector(0, -1, 0)))
		addQuad(pos, FVector(1, 0, 1), true, blockType);
	if (checkFace(pos, FVector(-1, 0, 0)))
		addQuad(pos, FVector(0, 1, 1), true, blockType);
	if (checkFace(pos, FVector(0, 0, 1)))
		addQuad(other, FVector(-1, -1, 0), false, blockType);
	if (checkFace(pos, FVector(0, 1, 0)))
		addQuad(other, FVector(-1, 0, -1), false, blockType);
	if (checkFace(pos, FVector(1, 0, 0)))
		addQuad(other, FVector(0, -1, -1), false, blockType);
}

bool AChunckMesh::checkFace(FVector& pos, FVector f)
{
	FVector checkPos = pos + f;
	if (checkPos.Z < 0 || checkPos.Z > 15) {
		return false;
	}
	if (checkPos.X < 0 ) {
		return ((Chunk*)Chunk::savedData->getNodeAt(x-1,y))->data[int(15 * 256 + checkPos.Y * 16 + checkPos.Z)] == 0;
	}
	if (checkPos.X > 15) {
		return ((Chunk*)Chunk::savedData->getNodeAt(x +1, y))->data[int(checkPos.Y * 16 + checkPos.Z)] == 0;
	}
	if (checkPos.Y < 0) {
		return ((Chunk*)Chunk::savedData->getNodeAt(x, y-1))->data[int(checkPos.X * 256 + 15 * 16 + checkPos.Z)] == 0;
	}
	if (checkPos.Y > 15) {
		return ((Chunk*)Chunk::savedData->getNodeAt(x, y+1))->data[int(checkPos.X * 256 + checkPos.Z)] == 0;
	}
	return c->data[int(checkPos.X * 256 + checkPos.Y * 16 + checkPos.Z)] == 0;
}

void AChunckMesh::addTextures(int dim, int dir, FVector2D texpos)
{
	std::vector<FVector2D> texturesinorder = { textcords[dim] + texpos * TEXTURESIZE,textcords[(dim + dir) % 3] + texpos * TEXTURESIZE
		,textcords[(dim + dir * 2) % 3] + texpos * TEXTURESIZE,FVector2D(TEXTURESIZE, TEXTURESIZE) + texpos * TEXTURESIZE };
	float start = 0;
	int d = 1;
	if (dim == 0) {
		start = 2;
	}
	if (dim == 0 && dir == 2) {
		FVector2D temp = texturesinorder[0];
		texturesinorder[0] = texturesinorder[3];
		texturesinorder[3] = temp;

	}
	if (dim == 1 && dir == 1) {
		FVector2D temp = texturesinorder[0];
		texturesinorder[0] = texturesinorder[3];
		texturesinorder[3] = temp;
	}
	for (int i = start; i < start + 4 * d; i += d) {
		UV0.Add(texturesinorder[i % 4]);
	}

}


// Called every frame
void AChunckMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChunckMesh::destroyBlock(int px, int py, int pz)
{
	c->data[px * 256 + py * 16 + pz] = 0;
	
}

float AChunckMesh::lifeOf(int px, int py, int pz)
{
	return bloks[c->data[px * 256 + py * 16 + pz]-1]->life;
}