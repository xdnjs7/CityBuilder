// Fill out your copyright notice in the Description page of Project Settings.


#include "GridCell.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AGridCell::AGridCell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;

}

// Called when the game starts or when spawned
void AGridCell::BeginPlay()
{
	Super::BeginPlay();
	
	OccupyingType = EBuildingTypeEnum::None;
}

// Called every frame
void AGridCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (OccupyingType == EBuildingTypeEnum::Placed)
	{
		StaticMeshComponent->SetMaterial(0, red);
	}
	if (OccupyingType == EBuildingTypeEnum::None)
	{
		StaticMeshComponent->SetMaterial(0, green);
	}
}


void AGridCell::SetOccupied(EBuildingTypeEnum buildingType, ABuildingActor* buildingactor)
{
	IsOccupied = true;
	OccupyingType = buildingType;
	OccupyingActor = buildingactor;
	StaticMeshComponent->SetMaterial(0, red);
}

