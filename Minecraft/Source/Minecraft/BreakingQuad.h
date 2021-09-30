// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"

#include "Materials/MaterialInterface.h"
#include "BreakingQuad.generated.h"

UCLASS()
class MINECRAFT_API ABreakingQuad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	int step;
	FVector normal;
	ABreakingQuad();
	ABreakingQuad(FVector4 data);
	void init(FVector nor, int s);
	UProceduralMeshComponent* m_mesh;
	virtual void PostActorCreated() override;
protected:
	TArray<FVector> vertices;
	TArray<int32> Triangles;
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FProcMeshTangent> tangents;
	TArray<FLinearColor> vertexColors;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void generateMesh();
	void createQuad(FVector pos, FVector face, bool front);
	void addTextures(int dim,int dir);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
