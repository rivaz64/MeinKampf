// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunckMesh.h"
#include <vector>
#include "HashTable2d.h"
#include "B_grass.h"
#include "B_dirt.h"
#include "B_stone.h"
#include "B_bedrock.h"
#include "B_cobblestone.h"
#include "B_wood.h"
#include "B_leaves.h"
#include "B_sand.h"
#include "B_RedFlower.h"
#include "B_YellowFlower.h"
#include "B_SugarCane.h"
#include "B_Farmland_Dry.h"
#include "B_Farmland_Wet.h"
#include "B_Crop.h"
#include "B_Door.h"
#include "B_CraftingTable.h"
#include "B_Carrots.h"
#include "B_Melon.h"
#include "B_Plank.h"
#include "ItemDroped_CPP.h"
#include "BaseGrassItemBlock_CPP.h"
#include "Kismet/GameplayStatics.h"
#include "ChunkRenderer.h"
using std::vector;
float TEXTURESIZE = 1.f / 16.f;
vector<FVector2D> textcords = { FVector2D(0, 0),FVector2D(TEXTURESIZE, 0),FVector2D(0, TEXTURESIZE) };
vector<Block*> AChunckMesh::bloks = { 
new B_grass,
new B_dirt,
new B_stone,
new B_bedRock, 
new B_cobblestone,
new B_wood ,
new B_Plank,
new B_leaves,
new B_sand,
new B_RedFlower,
new B_YellowFlower,
new B_SugarCane,
new B_Farmland_Dry,
new B_Farmland_Wet,
new B_Crop,
new B_Crop1,
new B_Crop2,
new B_Crop3,
new B_Crop4,
new B_Crop5,
new B_Crop6,
new B_Crop7,
new B_CraftingTable,
new B_Door_Up,
new B_Door_Down,
new B_Door_Up,
new B_Door_Down,
new B_Carrots,
new B_Carrots1,
new B_Carrots2,
new B_Carrots3,
new B_Melon,
new B_MStem,
new B_MAtachedStem,
};
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

	m_CMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("collicionChunk"));
	m_CMesh->SetupAttachment(GetRootComponent());
	m_CMesh->bUseAsyncCooking = true;
	m_CMesh->SetMaterial(0,mat);

	m_mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("chunk"));
	m_mesh->SetupAttachment(GetRootComponent());
	m_mesh->bUseAsyncCooking = true;
	m_mesh->SetMaterial(0,mat);
	
	m_CMesh->OnComponentHit.AddDynamic(this,&AChunckMesh::OnCompHit);
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

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AChunkRenderer::StaticClass(), FoundActors);
	if(FoundActors.Num()==0) return;
	renderer = (AChunkRenderer*)FoundActors[0];
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
	renderer->manager->generateChunkAt(x,y);
	c= renderer->manager->getChunkAt(x,y);

	

	vertices.Reset();
	Triangles.Reset();
	normals.Reset();
	UV0.Reset();
	tangents.Reset();
	vertexColors.Reset();
	for (unsigned i = 0; i < Chunk::len; ++i) {
		if(c->data[i] > (int)CHUNK_BLOCK::WATTER){
			addWater(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height),16-c->data[i]);
		}
		else if (c->data[i] ==  (int)CHUNK_BLOCK::WATTER){
			if( c->data[i+1] != (int)CHUNK_BLOCK::WATTER)
			addWater(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height),8 ); //+ FVector(1, 1, 1), FVector(0, -1, -1), false, blockType);
		}
		else if (c->data[i] != (int)CHUNK_BLOCK::AIR) {
			if(bloks[c->data[i]-1]->type == TYPE::BLOCK)
			addCube(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1);
			else if(bloks[c->data[i]-1]->type == TYPE::PLANT)
				addQuads(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1);
			else if(bloks[c->data[i]-1]->type == TYPE::CROPS){
				addCrops(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1);
			}

			else if(bloks[c->data[i]-1]->type == TYPE::ATTACHED){

				FVector place(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height);

				addQuads(place, c->data[i]-1);

				int dir;

				if(renderer->manager->getBlockAt(place+FVector(1,0,0))==(int)CHUNK_BLOCK::MELON){
					dir =0;
				}

				else if(renderer->manager->getBlockAt(place+FVector(-1,0,0))==(int)CHUNK_BLOCK::MELON){
					dir =1;
				}

				else if(renderer->manager->getBlockAt(place+FVector(0,1,0))==(int)CHUNK_BLOCK::MELON){
					dir =2;
				}

				else if(renderer->manager->getBlockAt(place+FVector(0,-1,0))==(int)CHUNK_BLOCK::MELON){
					dir =3;
				}

				addHalfQuad(place, c->data[i]-1,dir);
			}

			else if(bloks[c->data[i]-1]->type == TYPE::QUAD){
				if(c->data[i]<=(int)CHUNK_BLOCK::DOOR_DOWN)
				addInflatedQuad(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1,0);
				else
					addInflatedQuad(FVector(i / (c->size*c->height), (i % (c->size*c->height)) / c->height, i % c->height), c->data[i]-1,1);
			}

		}
	}
	//m_mesh->CreateMeshSection()
	m_mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);

	m_CMesh->CreateMeshSection_LinearColor(0, CVertices, CTriangles, CNormals, CUV0, CVertexColors, CTangents,true);

	m_CMesh->ContainsPhysicsTriMeshData(true);

	m_CMesh->SetVisibility(false);
	// Enable collision data
	m_mesh->ContainsPhysicsTriMeshData(false);

	m_mesh->SetCollisionObjectType(ECollisionChannel::ECC_Visibility);

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


	CVertices.Add(FVector(pos.X * 100 + vx.X * 100, pos.Y * 100 + vx.Y * 100, pos.Z * 100 + vx.Z * 100)+GetActorLocation());
	CVertices.Add(FVector(pos.X * 100 + vy.X * 100, pos.Y * 100 + vy.Y * 100, pos.Z * 100 + vy.Z * 100)+GetActorLocation());
	CVertices.Add(FVector(pos.X * 100 + vz.X * 100, pos.Y * 100 + vz.Y * 100, pos.Z * 100 + vz.Z * 100)+GetActorLocation());
	CVertices.Add(FVector(face.X * 100 + pos.X * 100, face.Y * 100 + pos.Y * 100, face.Z * 100 + pos.Z * 100)+GetActorLocation());


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

	if (front) {
		CTriangles.Add(totalCTris);
		CTriangles.Add(totalCTris + 1);
		CTriangles.Add(totalCTris + 2);
		if (face.X == 0) {
			CTriangles.Add(totalCTris + 2);
			CTriangles.Add(totalCTris + 1);
			CTriangles.Add(totalCTris + 3);

		}
		if (face.Y == 0) {
			CTriangles.Add(totalCTris + 0);
			CTriangles.Add(totalCTris + 2);
			CTriangles.Add(totalCTris + 3);

		}
		if (face.Z == 0) {
			CTriangles.Add(totalCTris + 1);
			CTriangles.Add(totalCTris + 0);
			CTriangles.Add(totalCTris + 3);


		}
	}
	else {
		CTriangles.Add(totalCTris);
		CTriangles.Add(totalCTris + 2);
		CTriangles.Add(totalCTris + 1);
		if (face.X == 0) {
			CTriangles.Add(totalCTris + 2);
			CTriangles.Add(totalCTris + 3);
			CTriangles.Add(totalCTris + 1);


		}
		if (face.Y == 0) {
			CTriangles.Add(totalCTris + 0);
			CTriangles.Add(totalCTris + 3);
			CTriangles.Add(totalCTris + 2);


		}
		if (face.Z == 0) {
			CTriangles.Add(totalCTris + 1);
			CTriangles.Add(totalCTris + 3);
			CTriangles.Add(totalCTris + 0);



		}
	}
	totalCTris += 4;

	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));

	CNormals.Add(FVector(0, 0, 1));
	CNormals.Add(FVector(0, 0, 1));
	CNormals.Add(FVector(0, 0, 1));
	CNormals.Add(FVector(0, 0, 1));

	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));

	CTangents.Add(FProcMeshTangent(0, 1, 0));
	CTangents.Add(FProcMeshTangent(0, 1, 0));
	CTangents.Add(FProcMeshTangent(0, 1, 0));
	CTangents.Add(FProcMeshTangent(0, 1, 0));

	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));

	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	CVertexColors.Add(FLinearColor(1, 1, 1, 1.0));
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

	char actual = renderer->manager->getBlockAt(Rpos);

	if(renderer->manager->getBlockAt(Rpos-FVector(1,0,0)+Wpos)>=(int)CHUNK_BLOCK::WATTER && 
	renderer->manager->getBlockAt(Rpos-FVector(1,0,0)+Wpos) < actual){
		++ea;
		++ed;
	}
	if(renderer->manager->getBlockAt(Rpos+FVector(1,0,0)+Wpos)>=(int)CHUNK_BLOCK::WATTER && 
	renderer->manager->getBlockAt(Rpos+FVector(1,0,0)+Wpos) < actual){
		++eb;
		++ec;
	}


	if(renderer->manager->getBlockAt(Rpos-FVector(0,1,0)+Wpos)>=(int)CHUNK_BLOCK::WATTER && 
	renderer->manager->getBlockAt(Rpos-FVector(0,1,0)+Wpos) < actual){
		++eb;
		++ed;
	}

	if(renderer->manager->getBlockAt(Rpos+FVector(0,1,0)+Wpos)>=(int)CHUNK_BLOCK::WATTER && 
	renderer->manager->getBlockAt(Rpos+FVector(0,1,0)+Wpos) < actual){
		++ea;
		++ec;
	}

	vertices.Add(FVector(pos.X * 100 - 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-ea)));
	vertices.Add(FVector(pos.X * 100, pos.Y * 100 - 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-eb)));
	vertices.Add(FVector(pos.X * 100, pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-ec)));
  vertices.Add(FVector(-100 + pos.X * 100,-100 + pos.Y * 100, pos.Z * 100)+GetActorLocation()-FVector(0,0,10*(9-alt-ed)));
	
	Triangles.Add(totaltris);
	Triangles.Add(totaltris + 2);
	Triangles.Add(totaltris + 1);
	Triangles.Add(totaltris + 1);
	Triangles.Add(totaltris + 3);
	Triangles.Add(totaltris);

	auto texpos = FVector2D(14,12);
	std::vector<FVector2D> texturesinorder = { textcords[2] + texpos * TEXTURESIZE,textcords[1] + texpos * TEXTURESIZE
		,textcords[0] + texpos * TEXTURESIZE,FVector2D(TEXTURESIZE, TEXTURESIZE) + texpos * TEXTURESIZE };
	

	for (int i = 0; i <  4; ++i) {
		UV0.Add(texturesinorder[i]);
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

void AChunckMesh::addCrops(FVector pos, char blockType)
{
	addCropQuad(pos,blockType,1,false);
	addCropQuad(pos,blockType,2,false);
	addCropQuad(pos,blockType,1,true);
	addCropQuad(pos,blockType,2,true);
}

void AChunckMesh::addCropQuad(FVector pos, char blockType,float cual, bool dir)
{
	float posi = 33.33f*cual;
	if(dir){
		vertices.Add(FVector(pos.X * 100.f+posi, pos.Y * 100 ,    pos.Z * 100 )+GetActorLocation());
	  vertices.Add(FVector(pos.X * 100.f+posi, pos.Y * 100+100, pos.Z * 100 )+GetActorLocation());
	  vertices.Add(FVector(pos.X * 100.f+posi, pos.Y * 100 ,    pos.Z * 100+100 )+GetActorLocation());
	  vertices.Add(FVector(pos.X * 100.f+posi, pos.Y * 100+100, pos.Z * 100+100 )+GetActorLocation());
	}
	else{
		vertices.Add(FVector(pos.X * 100.f,     pos.Y * 100+posi , pos.Z * 100 )+GetActorLocation());
	  vertices.Add(FVector(pos.X * 100.f+100, pos.Y * 100+posi, pos.Z * 100 )+GetActorLocation());
	  vertices.Add(FVector(pos.X * 100.f,     pos.Y * 100+posi, pos.Z * 100+100 )+GetActorLocation());
	  vertices.Add(FVector(pos.X * 100.f+100, pos.Y * 100+posi, pos.Z * 100+100 )+GetActorLocation());
	}

	
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
	totaltris += 4;
	for(int i=0;i<4;++i){
		normals.Add(FVector(0, 0, 1));
		tangents.Add(FProcMeshTangent(0, 1, 0));
		vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	}
}

void AChunckMesh::addInflatedQuad(FVector pos, char blockType,int state)
{

	if (state == 0) {
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 , pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 +100, pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 , pos.Z * 100+100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 +100, pos.Z * 100+100 )+GetActorLocation());
	}
	else {
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 , pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100+100, pos.Y * 100, pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 , pos.Z * 100+100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100+100, pos.Y * 100, pos.Z * 100+100 )+GetActorLocation());
	}
	

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
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

	totaltris += 4;
	for(int i=0;i<4;++i){
		normals.Add(FVector(0, 0, 1));
		tangents.Add(FProcMeshTangent(0, 1, 0));
		vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	}
}

void AChunckMesh::addHalfQuad(FVector pos, char blockType, int dir)
{
	vertices.Add(FVector(pos.X * 100+50, pos.Y * 100 + 50, pos.Z * 100 )+GetActorLocation());
  vertices.Add(FVector(pos.X * 100+50, pos.Y * 100 + 50, pos.Z * 100+100 )+GetActorLocation());

	if(dir==0){
		vertices.Add(FVector(pos.X * 100+100, pos.Y * 100 + 50, pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100+100, pos.Y * 100 + 50, pos.Z * 100+100 )+GetActorLocation());
	}
	else if(dir==1){
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 + 50, pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100, pos.Y * 100 + 50, pos.Z * 100+100 )+GetActorLocation());
	}
	else if(dir==2){
		vertices.Add(FVector(pos.X * 100+50, pos.Y * 100 + 100, pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100+50, pos.Y * 100 + 100, pos.Z * 100+100 )+GetActorLocation());
	}
	else if(dir==3){
		vertices.Add(FVector(pos.X * 100+50, pos.Y * 100, pos.Z * 100 )+GetActorLocation());
		vertices.Add(FVector(pos.X * 100+50, pos.Y * 100, pos.Z * 100+100 )+GetActorLocation());
	}
	

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

	totaltris += 4;
	for(int i=0;i<4;++i){
		normals.Add(FVector(0, 0, 1));
		tangents.Add(FProcMeshTangent(0, 1, 0));
		vertexColors.Add(FLinearColor(1, 1, 1, 1.0));
	}
}

bool AChunckMesh::checkFace(FVector& pos, FVector f)
{
	FVector checkPos = pos + f;

	checkPos.X += x*16;
	checkPos.Y += y*16;
	
	if (checkPos.Z < 0 || checkPos.Z > 31) {
		return false;
	}



	char data;
	data = renderer->manager->getBlockAt(checkPos);
	return data == (int)CHUNK_BLOCK::AIR || data == (int)CHUNK_BLOCK::LEAVES || data >= (int)CHUNK_BLOCK::WATTER || data >= (int)CHUNK_BLOCK::RED_FLOWER;
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

char AChunckMesh::destroyBlock( int px, int py, int pz)
{
  char ans = renderer->manager->getBlockAt(FVector(px,py,pz));
	renderer->manager->setBlockAt(FVector(px,py,pz),(int)CHUNK_BLOCK::AIR);
	
	return bloks[ans-1]->breaked;
}


float AChunckMesh::lifeOf(int px, int py, int pz)
{
	int block = renderer->manager->getBlockAt(FVector(px,py,pz));
	if(block>0&&block>=bloks.size())
	return bloks[renderer->manager->getBlockAt(FVector(px,py,pz))-1]->life;
	return 1;
}

void AChunckMesh::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	auto pos = Hit.ImpactPoint + Hit.ImpactNormal;
	pos = FVector(floor(pos.X / 100.f),floor(pos.Y / 100.f),floor(pos.Z / 100.f));
	auto blok = renderer->manager->getBlockAt(pos);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("x: %f, y: %f, z: %f"), pos.X, pos.Y, pos.Z));

	if (blok == (int)CHUNK_BLOCK::FARMLAND_DRY || blok == (int)CHUNK_BLOCK::FARMLAND_WET) {
		renderer->manager->setBlockAt(pos,(int)CHUNK_BLOCK::DIRT);
		renderer->regenerate(FVector2D(floor(pos.X/16),floor(pos.Y/16)));
	}
	
}
