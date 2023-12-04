// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
};
