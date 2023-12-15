// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManager.h"

// Sets default values
AGridManager::AGridManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	gridSize = 10;

}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGridManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AGridManager::initGrid()//TMap<int, int>& GridMap, int& GridSize)
//{
//	for (int i =0;i<gridSize;i++)
//	{
//		for (int j = 0; j < gridSize; j++)
//		{
//			gridMap.Add(i, j);
//		}
//	}
//}

void AGridManager::setWorldoffset()
{
	worldOffset = ((gridSize * worldGridSize) * 0.5) - (worldGridSize * 0.5);
}



void AGridManager::createCell()
{
	AGridCell* NewCell;
	FVector ACell;
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridSize; j++)
		{
			ACell.X = (i * worldGridSize) - worldOffset;
			ACell.Y = (j * worldGridSize) - worldOffset;
			ACell.Z = 0;
			NewCell=GetWorld()->SpawnActor<AGridCell>(Cell, ACell, FRotator::ZeroRotator);
			gridMap.Add(NewCell);
		}
	}
}

FVector AGridManager::GetClosestGridPosition(FVector inPosition)
{
	FVector ClosestPosition;
	float ClosestDistance;

	ClosestPosition = gridMap[0]->GetActorLocation();

	ClosestDistance = FVector::Distance(inPosition, ClosestPosition);

	for (AActor* gridCell : gridMap)
	{
		FVector CellLocation = gridCell->GetActorLocation();
		float dist = FVector::Distance(CellLocation, inPosition);
		if (dist < ClosestDistance)
		{
			ClosestPosition = CellLocation;
			ClosestDistance = dist;
		}
	}
	return ClosestPosition;
}


void AGridManager::UpdateGridCellNeighbours()
{
	for (int i = 0; i < gridMap.Num(); i++)
	{
		if (i - gridSize >= 0)
		{
			gridMap[i]->SouthCell = gridMap[i - gridSize];
		}
		if (i + gridSize < gridMap.Num())
		{
			gridMap[i]->NorthCell = gridMap[i + gridSize];
		}
		if (i != 0 && i % gridSize != 1)
		{
			gridMap[i]->WestCell = gridMap[i - 1];
		}
		if (i != gridMap.Num() - 1 && (i + 1) % gridSize != 0)
		{
			gridMap[i]->EastCell = gridMap[i + 1];
		}

	}
}


AGridCell* AGridManager::GetClosestGridCell(FVector inCellPosition)
{
	FVector ClosestPosition;
	float ClosestDistance;
	AGridCell* gcell = nullptr;
	int index = 0;
	ClosestDistance = FVector::Distance(inCellPosition, ClosestPosition);

	for (AGridCell* gridCell : gridMap)
	{
		FVector CellLocation = gridCell->GetActorLocation();
		float dist = FVector::Distance(CellLocation, inCellPosition);
		if (dist < ClosestDistance)
		{
			ClosestDistance = dist;
			gcell = gridCell;
		}
		index++;
	}
	return gcell;
}