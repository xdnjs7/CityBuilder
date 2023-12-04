// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CB_MovingCamera.generated.h"

UCLASS()
class FRAMEWORK_API ACB_MovingCamera : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACB_MovingCamera();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float OrbitSpeed = 1.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float ZoomSpeed = 50.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float ZoomMin = 300.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float ZoomMax = 2000.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float InitialMovementSpeed = 600.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float CameraMinClamp = 310.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
	float CameraMaxClamp = 350.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CBSpringArm;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void MoveForward(float Value); // ī�޶� ��/�� �̵�(W, S)

	UFUNCTION(BlueprintCallable, BLueprintImplementableEvent, Category = Camera)
	void MoveRight(float Value); // ī�޶� ��/�� �̵�(A, D)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void CameraOrbit(float Value); // ī�޶� ��/�� ȸ��(Q, E)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void CameraPitch(float Value); // ī�޶� ��/�� ȸ��(R, F)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void CameraZoom(float Value); // ī�޶� ����/�ܾƿ�

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void MouseX(float Value); // ī�޶� ���콺 X��

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void MouseY(float Value); // ī�޶� ���콺 Y��

	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = WalkSpeed)
	//void UpdateMovementSpeed();

	//void ZoomIn();

	//void ZoomOut();

	//void OnMouseRightClick();
	//void OnMouseRightRelease();

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = Camera)
	//FVector ForwardVector() const; // ī�޶� ���� ���ϰ� �ִ� ������ ���� ���͸� ��ȯ

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = Camera)
	//FVector RightVector() const; // ī�޶� ���� ���ϰ� �ִ� ���⿡�� ���������� ���ϴ� ���� ���͸� ��ȯ

	//void Rotate(float Value); // ī�޶� ��/�� ȸ��(Q, E)

	//void CallOrbit(float AxisValue); // CameraOrbitȣ��� �Լ�

};
