// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Chunk.h"
#include "Materials/MaterialInterface.h"
#include <vector>
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
	UPROPERTY(EditAnywhere)
  UProceduralMeshComponent* m_CMesh;
	UPROPERTY(EditAnywhere)
		UProceduralMeshComponent* m_root;
	void generateMesh();
	std::shared_ptr<Chunk> c;

	TArray<FVector> vertices;
	TArray<int32> Triangles;
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FProcMeshTangent> tangents;
	TArray<FLinearColor> vertexColors;

	TArray<FVector> CVertices;
	TArray<int32> CTriangles;
	TArray<FVector> CNormals;
	TArray<FVector2D> CUV0;
	TArray<FProcMeshTangent> CTangents;
	TArray<FLinearColor> CVertexColors;

	int totaltris = 0;
	int totalCTris = 0;
	void addQuad(FVector& pos, FVector face, bool front,volatile char blockType);
	void addWater(FVector pos, int alt);
	void addCube(FVector pos, char blockType);
	void addQuads(FVector pos, char blockType);
	void addCrops(FVector pos, char blockType);
	void addCropQuad(FVector pos, char blockType,float cual,bool dir);
	void addInflatedQuad(FVector pos, char blockType,int dir);
	void addHalfQuad(FVector pos, char blockType,int dir);
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
	char destroyBlock( volatile int x,int y,int z);
	void destroingAt(FVector pos, FVector nor);
	float lifeOf(int x,int y,int z);

	static std::vector<Block*> bloks;

	UFUNCTION()
	void 
	OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	TSubclassOf<AActor> item;
};
