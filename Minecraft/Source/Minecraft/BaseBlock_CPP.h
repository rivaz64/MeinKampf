// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define RightCube 0
#define LeftCube 1
#define FrontCube 2
#define BackCube 3
#define UpCube 4
#define DownCube 5

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBlock_CPP.generated.h"

UENUM()
enum eBLOCK_TYPES
{
	SOLID UMETA(DisplayName = "SOLID"),
	LIQUID   UMETA(DisplayName = "LIQUID")
};
class Amundo;
UCLASS()
class MINECRAFT_API ABaseBlock_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseBlock_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void LanzarRayo(TArray<ABaseBlock_CPP*>& arrays);

	void UpdateAdjacents();


	virtual void Pointed();
	virtual void Unpointed();
	virtual void Hitted(float DeltaTime, TSubclassOf<class ABaseItem_CPP> handedItem);
	virtual void Unhitted();
	virtual bool Interacted(TSubclassOf<class ABaseItem_CPP> item, FVector NormalFace);
	//UFUNCTION(BlueprintCallable)
		virtual void Breaked();

	virtual void SetFaceVisibility(unsigned char face, bool visibility);

public:
	Amundo* wor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		TEnumAsByte<eBLOCK_TYPES> eBlockType = SOLID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		bool HasGravity = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		TSubclassOf<class ABaseItemBlock_CPP> DropItemBlock;

	UPROPERTY()
		class UBoxComponent* BoxCollider;
	UPROPERTY()
		class UStaticMeshComponent* UpCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* DownCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* LeftCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* RightCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* FrontCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* BackCubeMesh;
	UPROPERTY()
		class UStaticMeshComponent* FrameCubeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		class UMaterialInterface* UpMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		class UMaterialInterface* DownMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		class UMaterialInterface* LeftMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		class UMaterialInterface* RightMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		class UMaterialInterface* FrontMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		class UMaterialInterface* BackMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		TSubclassOf<class UUserWidget> InsideMenuClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		class UUserWidget* InsideMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		bool isAlive = true;
	virtual int getid() { return 0; };
	int id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OpenWidget = false;
protected:
	float MaxLife = 1;
	float Life = 1;
};
