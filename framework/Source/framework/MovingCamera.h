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

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Rotation)
	float CameraRotationSpeed = 10.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Zoom)
	float ZoomSpeed = 10.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Zoom)
	float ZoomMin = 300.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Zoom)
	float ZoomMax = 2000.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Move)
	float InitialMovementSpeed = 600.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Rotation)
	float CameraMinClamp = 210.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Rotation)
	float CameraMaxClamp = 350.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Rotation)
	bool bAllowCameraRotation = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	//float MinZoomDistance = 100.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	//float MaxZoomDistance = 2000.0f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*virtual void MouseWheelZoom(float Value);*/

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void Rotate(float Value);

	UFUNCTION()
	void CameraPitch(float Value);

	UFUNCTION(BlueprintCallable, Category = Camera)
	void CameraZoom(float Magnitude);

	UFUNCTION()
	void ZoomIn();

	UFUNCTION()
	void ZoomOut();

	UFUNCTION()
	void OnMouseRightClick();

	UFUNCTION()
	void OnMouseRightRelease();
};
