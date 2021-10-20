// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunckMesh.h"
#include <vector>
#include "HashTable2d.h"
#include "B_grass.h"
#include "B_stone.h"
#include "B_bedrock.h"
#include "B_cobblestone.h"
#include "B_wood.h"
#include "B_leaves.h"
#include "B_sand.h"
#include "B_RedFlower.h"
#include "ItemDroped_CPP.h"
#include "BaseGrassItemBlock_CPP.h"
using std::vector;
float TEXTURESIZE = 1.f / 16.f;
vector<FVector2D> textcords = { FVector2D(0, 0),FVector2D(TEXTURESIZE, 0),FVector2D(0, TEXTURESIZE) };
vector<Block*> bloks = { 
new B_grass,
new B_stone,
new B_bedRock, 
new B_cobblestone,
new B_wood ,
new B_leaves,
new B_sand,
new B_RedFlower};
// Sets default values
AChunckMesh::AChunckMesh()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//scene = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	

	m_root = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("root"));
	m_root->SetupAttachment(GetRootComponent());
	m_root->bUseAsyncCooking = true;
	m_root->SetMaterial(0,mat);

	m_waterMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("waterChunk"));
	m_waterMesh->SetupAttachment(GetRootComponent());
	m_waterMesh->bUseAsyncCooking = true;
	m_waterMesh->SetMaterial(0,mat);

	m_mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("chunk"));
	m_mesh->SetupAttachment(GetRootComponent());
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
	for (unsigned i = 0; i < Chunk::len; ++i) {
		if(c->data[i] > (int)BLOCK::WATTER){
			addWater(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height),16-c->data[i]);
		}
		else if (c->data[i] ==  (int)BLOCK::WATTER){
			if( c->data[i+1] != (int)BLOCK::WATTER)
			addWater(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height),8 ); //+ FVector(1, 1, 1), FVector(0, -1, -1), false, blockType);
		}
		else if (c->data[i] != (int)BLOCK::AIR) {
			if(bloks[c->data[i]-1]->type == TYPE::BLOCK)
			addCube(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1);
			else
				addQuads(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1);
		}
	}
	//m_mesh->CreateMeshSection()
	m_mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);

	m_waterMesh->CreateMeshSection_LinearColor(0, waterVertices, waterTriangles, waterNormals, waterUV0, waterVertexColors, waterTangents,false);

	m_waterMesh->ContainsPhysicsTriMeshData(false);

	// Enable collision data
	m_mesh->ContainsPhysicsTriMeshData(true);
}

void AChunckMesh::addQuad(FVector& pos, FVector face, bool front,volatile char blockType)
{
	FVector vx = FVector(face.X, 0, 0);
	FVector vy = FVector(0, face.Y, 0);
	FVector vz = FVector(0, 0, face.Z);

	vertices.Add(FVector(pos.X * 100 + vx.X * 100, pos.Y * 100 + vx.Y * 100, pos.Z * 100 + vx.Z * 100)+GetActorLocation());
	vertices.Add(FVector(pos.X * 100 + vy.X * 100, pos.Y * 100 + vy.Y * 100, pos.Z * 100 + vy.Z * 100)+GetActorLocation());
	vertices.Add(FVector(pos.X * 100 + vz.X * 100, pos.Y * 100 + vz.Y * 100, pos.Z * 100 + vz.Z * 100)+GetActorLocation());
	vertices.Add(FVector(face.X * 100 + pos.X * 100, face.Y * 100 + pos.Y * 100, face.Z * 100 + pos.Z * 100)+GetActorLocation());


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
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));

	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));

	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
}

void AChunckMesh::addWater(FVector pos, int alt)
{
	auto Rpos = pos;
	int WposX = floor(GetActorLocation().X/100.f);
	int WposY = floor(GetActorLocation().Y/100.f);
	auto Wpos =FVector(WposX,WposY,0);
	//localChunkPos
	pos = pos + FVector(1,1,1);

	/*if(Chunk::getBlockAt(Rpos-FVector(1,0,0))>=8)
		waterVertices.Add(FVector(pos.X * 100 - 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-1)));
	else
		waterVertices.Add(FVector(pos.X * 100 - 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt)));

	if(Chunk::getBlockAt(Rpos-FVector(0,1,0))>=8)
		waterVertices.Add(FVector(pos.X * 100, pos.Y * 100 - 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-1)));
	else
		waterVertices.Add(FVector(pos.X * 100, pos.Y * 100 - 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt)));

  waterVertices.Add(FVector(pos.X * 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt)));

	if(Chunk::getBlockAt(Rpos-FVector(1,0,0))>=8 && Chunk::getBlockAt(Rpos-FVector(0,1,0))>=8)
		waterVertices.Add(FVector(-100 + pos.X * 100,-100 + pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-2)));
	else if(Chunk::getBlockAt(Rpos-FVector(1,0,0))>=8 || Chunk::getBlockAt(Rpos-FVector(0,1,0))>=8)
	  waterVertices.Add(FVector(-100 + pos.X * 100,-100 + pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-1)));
	else
		waterVertices.Add(FVector(-100 + pos.X * 100,-100 + pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt)));
	*/

	int ea=0;
	int eb=0;
	int ec=0;
	int ed=0;

	char actual = Chunk::getBlockAt(Rpos);

	if(Chunk::getBlockAt(Rpos-FVector(1,0,0)+Wpos)>=(int)BLOCK::WATTER && Chunk::getBlockAt(Rpos-FVector(1,0,0)+Wpos) < actual){
		++ea;
		++ed;
	}
	if(Chunk::getBlockAt(Rpos+FVector(1,0,0)+Wpos)>=(int)BLOCK::WATTER && Chunk::getBlockAt(Rpos+FVector(1,0,0)+Wpos) < actual){
		++eb;
		++ec;
	}


	if(Chunk::getBlockAt(Rpos-FVector(0,1,0)+Wpos)>=(int)BLOCK::WATTER && Chunk::getBlockAt(Rpos-FVector(0,1,0)+Wpos) < actual){
		++eb;
		++ed;
	}

	if(Chunk::getBlockAt(Rpos+FVector(0,1,0)+Wpos)>=(int)BLOCK::WATTER && Chunk::getBlockAt(Rpos+FVector(0,1,0)+Wpos) < actual){
		++ea;
		++ec;
	}

	waterVertices.Add(FVector(pos.X * 100 - 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-ea)));
  waterVertices.Add(FVector(pos.X * 100, pos.Y * 100 - 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-eb)));
  waterVertices.Add(FVector(pos.X * 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-ec)));
  waterVertices.Add(FVector(-100 + pos.X * 100,-100 + pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-ed)));
	
	waterTriangles.Add(totalWaterTris);
	waterTriangles.Add(totalWaterTris + 2);
	waterTriangles.Add(totalWaterTris + 1);
	waterTriangles.Add(totalWaterTris + 1);
	waterTriangles.Add(totalWaterTris + 3);
	waterTriangles.Add(totalWaterTris);

	auto texpos = FVector2D(0,0);
	std::vector<FVector2D> texturesinorder = { textcords[2] + texpos * TEXTURESIZE,textcords[1] + texpos * TEXTURESIZE
		,textcords[0] + texpos * TEXTURESIZE,FVector2D(TEXTURESIZE, TEXTURESIZE) + texpos * TEXTURESIZE };
	

	for (int i = 0; i <  4; ++i) {
		waterUV0.Add(texturesinorder[i]);
	}
	
	totalWaterTris += 4;

	waterNormals.Add(FVector(0, 0, 1));
	waterNormals.Add(FVector(0, 0, 1));
	waterNormals.Add(FVector(0, 0, 1));
	waterNormals.Add(FVector(0, 0, 1));

	waterTangents.Add(FProcMeshTangent(0, 1, 0));
	waterTangents.Add(FProcMeshTangent(0, 1, 0));
	waterTangents.Add(FProcMeshTangent(0, 1, 0));
	waterTangents.Add(FProcMeshTangent(0, 1, 0));

	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
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

void AChunckMesh::addQuads(FVector pos, char blockType)
{
	vertices.Add(FVector(pos.X * 100, pos.Y * 100 , pos.Z * 100 )+GetActorLocation());
	vertices.Add(FVector(pos.X * 100+100, pos.Y * 100 +100, pos.Z * 100 )+GetActorLocation());
	vertices.Add(FVector(pos.X * 100, pos.Y * 100 , pos.Z * 100+100 )+GetActorLocation());
	vertices.Add(FVector(pos.X * 100+100, pos.Y * 100 +100, pos.Z * 100+100 )+GetActorLocation());

	Triangles.Add(totaltris);
	Triangles.Add(totaltris + 1);
	Triangles.Add(totaltris + 2);
	Triangles.Add(totaltris + 2);
  Triangles.Add(totaltris + 1);
	Triangles.Add(totaltris + 3);
	Triangles.Add(totaltris);
	Triangles.Add(totaltris + 2);
	Triangles.Add(totaltris + 1);
	Triangles.Add(totaltris + 2);
	Triangles.Add(totaltris + 3);
	Triangles.Add(totaltris + 1);

	addTextures(0, 1, bloks[blockType]->textures[0]);

	vertices.Add(FVector(pos.X * 100+100, pos.Y * 100 , pos.Z * 100 )+GetActorLocation());
	vertices.Add(FVector(pos.X * 100, pos.Y * 100 +100, pos.Z * 100 )+GetActorLocation());
	vertices.Add(FVector(pos.X * 100+100, pos.Y * 100 , pos.Z * 100+100 )+GetActorLocation());
	vertices.Add(FVector(pos.X * 100, pos.Y * 100 +100, pos.Z * 100+100 )+GetActorLocation());

	Triangles.Add(totaltris + 4);
	Triangles.Add(totaltris + 5);
	Triangles.Add(totaltris + 6);
	Triangles.Add(totaltris + 6);
	Triangles.Add(totaltris + 5);
	Triangles.Add(totaltris + 7);
	Triangles.Add(totaltris + 4);
	Triangles.Add(totaltris + 6);
	Triangles.Add(totaltris + 5);
	Triangles.Add(totaltris + 6);
	Triangles.Add(totaltris + 7);
	Triangles.Add(totaltris + 5);

	addTextures(0, 1, bloks[blockType]->textures[0]);

	totaltris += 8;
	for(int i=0;i<4;++i){
		normals.Add(FVector(0, 0, 1));
		tangents.Add(FProcMeshTangent(0, 1, 0));
		vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	}
}

bool AChunckMesh::checkFace(FVector& pos, FVector f)
{
	FVector checkPos = pos + f;
	
	if (checkPos.Z < 0 || checkPos.Z > 31) {
		return false;
	}

	char data;
	if (checkPos.X < 0 ) {
		data = ((Chunk*)Chunk::savedData->getNodeAt(x-1,y))->getAt(15,checkPos.Y,checkPos.Z);
	}
	else if (checkPos.X > 15) {
		data = ((Chunk*)Chunk::savedData->getNodeAt(x +1, y))->getAt(0,checkPos.Y,checkPos.Z);
	}
	else if (checkPos.Y < 0) {
		data = ((Chunk*)Chunk::savedData->getNodeAt(x, y-1))->getAt(checkPos.X,15,checkPos.Z);
	}
	else if (checkPos.Y > 15) {
		data = ((Chunk*)Chunk::savedData->getNodeAt(x, y+1))->getAt(checkPos.X,0,checkPos.Z);
	}
	else{
		data = ((Chunk*)Chunk::savedData->getNodeAt(x,y))->getAt(checkPos.X,checkPos.Y,checkPos.Z);
	} 
	return data == (int)BLOCK::AIR || data == (int)BLOCK::LEAVES || data >= (int)BLOCK::WATTER || data >= (int)BLOCK::RED_FLOWER;
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

	if (dim == 2 && dir == 1) {
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

char AChunckMesh::destroyBlock(volatile int px, int py, int pz)
{
	
	volatile char ans = c->getAt(Chunk::mod(px,16),Chunk::mod(py,16),Chunk::mod(pz,16));
	c->spawnBlock(Chunk::mod(px,16),Chunk::mod(py,16),Chunk::mod(pz,16),0);
	return bloks[ans-1]->breaked;
}

char AChunckMesh::placeBlock(int px, int py, int pz,char tipe)
{
	c->spawnBlock(Chunk::mod(px,16),Chunk::mod(py,16),Chunk::mod(pz,16),tipe);
	return 0;
}

float AChunckMesh::lifeOf(int px, int py, int pz)
{
	return bloks[c->getAt(Chunk::mod(px,16),Chunk::mod(py,16),Chunk::mod(pz,16))-1]->life;
}