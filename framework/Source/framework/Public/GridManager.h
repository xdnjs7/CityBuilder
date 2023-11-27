// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	int gridSize; //그리드 열,행 수

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int worldGridSize; //그리드 범위

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> gridMap;

	bool IsBuild; //건설 여부 확인
	float worldOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> Cell; //셀 액터



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	UFUNCTION(BlueprintCallable)
	void setWorldoffset();//월드 오프셋 설정
	UFUNCTION(BlueprintCallable)
	void createCell();//셀 생성






};
