// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "BuildingTypeEnum.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORK_API UBuildingTypeEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};

UENUM(BlueprintType)
enum class EBuildingTypeEnum : uint8
{
    Zoned UMETA(DisplayName = "Zoned"),
    Placed UMETA(DisplayName = "Placed"),
    Road UMETA(DisplayName = "Road"),
    None UMETA(DisplayName = "None")
};
