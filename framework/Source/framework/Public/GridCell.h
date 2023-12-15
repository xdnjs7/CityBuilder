// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingTypeEnum.h"
#include "BuildingActor.h"
#include "GameFramework/Actor.h"
#include "GridCell.generated.h"

UCLASS()
class FRAMEWORK_API AGridCell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridCell();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMeshComponent;

	ABuildingActor* OccupyingActor;

	bool IsOccupied;
	AGridCell* NorthCell;
	AGridCell* SouthCell;
	AGridCell* EastCell;
	AGridCell* WestCell;

	UPROPERTY(EditAnyWhere)
	UMaterialInterface* green;
	UPROPERTY(EditAnyWhere)
	UMaterialInterface* red;
	EBuildingTypeEnum OccupyingType;

	void SetOccupied(EBuildingTypeEnum buildingType, ABuildingActor* buildingactor);


};
