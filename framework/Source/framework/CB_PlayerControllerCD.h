// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingActor.h"
#include "GridManager.h"
#include "GameFramework/PlayerController.h"
#include "CB_PlayerControllerCD.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORK_API ACB_PlayerControllerCD : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	bool RightButtonPressed = false;


//원빈 추가 코드

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	bool placementModeEnabled;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	TSubclassOf<ABuildingActor> buildingType;

	AActor* placeableActor;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	AGridManager* gridManager;

public:
	/*UFUNCTION(BlueprintCallable)
	void InPlacementMode(bool isEnabled);
	UFUNCTION(BlueprintCallable)
	void UpdatePlacement();
	UFUNCTION(BlueprintCallable)
	void SpawnBuilding();*/

	UFUNCTION(BlueprintCallable)
	void SpawnActorAtMousePosition();
	UFUNCTION(BlueprintCallable)
	void SetupInputComponent();
	UFUNCTION(BlueprintCallable)
	void UpdateActorPositionToMousePosition();
	UFUNCTION(BlueprintCallable)
	void OnLeftMouseClick();



};
