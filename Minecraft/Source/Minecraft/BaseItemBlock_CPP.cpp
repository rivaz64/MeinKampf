// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItemBlock_CPP.h"
#include "BaseBlock_CPP.h"

ABaseItemBlock_CPP::ABaseItemBlock_CPP()
{
	UpCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("UpCubeMesh");
	UpCubeMesh->SetupAttachment(RootComponent);

	UpCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);



	DownCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("DownCubeMesh");
	DownCubeMesh->SetupAttachment(RootComponent);

	DownCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);



	LeftCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("LeftCubeMesh");
	LeftCubeMesh->SetupAttachment(RootComponent);

	LeftCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);



	RightCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("RightCubeMesh");
	RightCubeMesh->SetupAttachment(RootComponent);

	RightCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);



	FrontCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("FrontCubeMesh");
	FrontCubeMesh->SetupAttachment(RootComponent);

	FrontCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	


	BackCubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("BackCubeMesh");
	BackCubeMesh->SetupAttachment(RootComponent);

	BackCubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

}

void ABaseItemBlock_CPP::BeginPlay()
{
	UpCubeMesh->SetStaticMesh(BlockMesh->UpCubeMesh->GetStaticMesh());
	DownCubeMesh->SetStaticMesh(BlockMesh->DownCubeMesh->GetStaticMesh());
	LeftCubeMesh->SetStaticMesh(BlockMesh->LeftCubeMesh->GetStaticMesh());
	RightCubeMesh->SetStaticMesh(BlockMesh->RightCubeMesh->GetStaticMesh());
	FrontCubeMesh->SetStaticMesh(BlockMesh->FrontCubeMesh->GetStaticMesh());
	BackCubeMesh->SetStaticMesh(BlockMesh->BackCubeMesh->GetStaticMesh());
}
