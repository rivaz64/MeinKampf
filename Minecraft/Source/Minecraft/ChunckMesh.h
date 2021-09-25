// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C:\UE_4.26\Engine\Plugins/Runtime/ProceduralMeshComponent/Source/ProceduralMeshComponent/Public/ProceduralMeshComponent.h"
#include "Chunk.h"
#include "Materials/MaterialInterface.h"
#include "ChunckMesh.generated.h"

class Block;

UCLASS()
class MINECRAFT_API AChunckMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	int x, y;
	AChunckMesh();
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	UPROPERTY(EditAnywhere)
	UProceduralMeshComponent* m_mesh;
	void generateMesh();
	Chunk* c;
	TArray<FVector> vertices;
	TArray<int32> Triangles;
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FProcMeshTangent> tangents;
	TArray<FLinearColor> vertexColors;
	int totaltris = 0;
	void addQuad(FVector& pos, FVector face, bool front,volatile char blockType);
	void addCube(FVector pos, char blockType);
	bool checkFace(FVector& pos, FVector f);
	void addTextures(int dim, int dir, FVector2D texpos);
	
	UPROPERTY(EditAnywhere)
		UMaterial* mat;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void destroyBlock(int x,int y,int z);
	void destroingAt(FVector pos, FVector nor);
	float lifeOf(int x,int y,int z);
};
