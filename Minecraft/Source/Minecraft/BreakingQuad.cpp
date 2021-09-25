// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakingQuad.h"
#include <vector>
// Sets default values
float TEXTURESIZ = 1.f / 16.f;
std::vector<FVector2D> textcord = { FVector2D(0, 0),FVector2D(TEXTURESIZ, 0),FVector2D(0, TEXTURESIZ) };


ABreakingQuad::ABreakingQuad()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}
ABreakingQuad::ABreakingQuad(FVector4 data)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	step = data.W;
	normal = FVector(data.X,data.Y,data.Z);
}

void ABreakingQuad::init(FVector nor, int s)
{
	normal = nor;
	step = s;
}

// Called when the game starts or when spawned
void ABreakingQuad::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABreakingQuad::generateMesh()
{
	vertices.Reset();
	Triangles.Reset();
	normals.Reset();
	UV0.Reset();
	tangents.Reset();
	vertexColors.Reset();
	FVector pos = FVector(0, 0, 0);
	FVector other = FVector(1, 1, 1);
	if (normal == FVector(0, 0, -1))
		createQuad(pos, FVector(1, 1, 0), true);
	if (normal == FVector(0, -1, 0))
		createQuad(pos, FVector(1, 0, 1), true);
	if (normal == FVector(-1, 0, 0))
		createQuad(pos, FVector(0, 1, 1), true);
	if (normal == FVector(0, 0, 1))
		createQuad(other, FVector(-1, -1, 0), false);
	if (normal == FVector(0, 1, 0))
		createQuad(other, FVector(-1, 0, -1), false);
	if (normal == FVector(1, 0, 0))
		createQuad(other, FVector(0, -1, -1), false);

	m_mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, false);
}

void ABreakingQuad::createQuad(FVector pos, FVector face, bool front)
{
	FVector vx = FVector(face.X, 0, 0);
	FVector vy = FVector(0, face.Y, 0);
	FVector vz = FVector(0, 0, face.Z);
	vertices.Add(FVector(pos.X * 100 + vx.X * 100, pos.Y * 100 + vx.Y * 100, pos.Z * 100 + vx.Z * 100));
	vertices.Add(FVector(pos.X * 100 + vy.X * 100, pos.Y * 100 + vy.Y * 100, pos.Z * 100 + vy.Z * 100));
	vertices.Add(FVector(pos.X * 100 + vz.X * 100, pos.Y * 100 + vz.Y * 100, pos.Z * 100 + vz.Z * 100));
	vertices.Add(FVector(face.X * 100 + pos.X * 100, face.Y * 100 + pos.Y * 100, face.Z * 100 + pos.Z * 100));


	if (front) {
		Triangles.Add(0);
		Triangles.Add( 1);
		Triangles.Add( 2);
		if (face.X == 0) {
			Triangles.Add( 2);
			Triangles.Add( 1);
			Triangles.Add( 3);

			addTextures(0, 1);
		}
		if (face.Y == 0) {
			Triangles.Add( 0);
			Triangles.Add( 2);
			Triangles.Add( 3);

			addTextures(1, 1);
		}
		if (face.Z == 0) {
			Triangles.Add( 1);
			Triangles.Add( 0);
			Triangles.Add( 3);

			addTextures(2, 1);

		}
	}
	else {
		Triangles.Add(0);
		Triangles.Add( 2);
		Triangles.Add( 1);
		if (face.X == 0) {
			Triangles.Add( 2);
			Triangles.Add( 3);
			Triangles.Add( 1);
			addTextures(0, 2);


		}
		if (face.Y == 0) {
			Triangles.Add( 0);
			Triangles.Add( 3);
			Triangles.Add( 2);

			addTextures(1, 2);

		}
		if (face.Z == 0) {
			Triangles.Add( 1);
			Triangles.Add( 3);
			Triangles.Add( 0);

			addTextures(2, 2);


		}
	}
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

void ABreakingQuad::addTextures(int dim, int dir)
{
	FVector2D texpos = FVector2D(0, 15);
	std::vector<FVector2D> texturesinorder = { textcord[dim] + texpos * TEXTURESIZ,textcord[(dim + dir) % 3] + texpos * TEXTURESIZ
		,textcord[(dim + dir * 2) % 3] + texpos * TEXTURESIZ,FVector2D(TEXTURESIZ, TEXTURESIZ) + texpos * TEXTURESIZ };
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

void ABreakingQuad::PostActorCreated()
{
	Super::PostActorCreated();
	generateMesh();
}
// Called every frame
void ABreakingQuad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

