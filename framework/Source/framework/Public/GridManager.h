// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCell.h"
#include "Math/TransformNonVectorized.h"
#include "GridManager.generated.h"


UCLASS()
class FRAMEWORK_API AGridManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGridManager();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int gridSize; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int worldGridSize; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AGridCell*> gridMap;

	bool IsBuild;
	float worldOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> Cell;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	UFUNCTION(BlueprintCallable)
	void setWorldoffset();
	UFUNCTION(BlueprintCallable)
	void createCell();
	UFUNCTION(BlueprintCallable)
	FVector GetClosestGridPosition(FVector inPosition);
	UFUNCTION(BlueprintCallable)
	void UpdateGridCellNeighbours();
	UFUNCTION(BlueprintCallable)
	AGridCell* GetClosestGridCell(FVector inCellPosition);

};
