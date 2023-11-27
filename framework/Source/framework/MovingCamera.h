// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MovingCamera.generated.h"

UCLASS()
class FRAMEWORK_API AMovingCamera : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMovingCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Character)
	class UCapsuleComponent* MCCapsule;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* MCCamera;
	
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* MCSpringArm;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float CameraRotationSpeed = 45.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float ZoomSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float MinZoomDistance = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	float MaxZoomDistance = 2000.0f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MouseWheelZoom(float Value);

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void Rotate(float Value);

};
