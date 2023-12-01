// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CB_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORK_API ACB_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float Magnitude = 0.0f;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Camera)
	void CameraOrbit();	
};
