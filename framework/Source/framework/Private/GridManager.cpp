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
	worldOffset = ((gridSize * worldGridSize) * 0.5) - (worldOffset * 0.5);
}



void AGridManager::createCell()
{
	AActor* NewCell;
	FVector ACell;
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridSize; j++)
		{
			ACell.X = (i * worldGridSize) - worldOffset;
			ACell.Y = (j * worldGridSize) - worldOffset;
			ACell.Z = 0;
			NewCell=GetWorld()->SpawnActor<AActor>(Cell, ACell, FRotator::ZeroRotator);
			gridMap.Add(NewCell);
		}
	}
}