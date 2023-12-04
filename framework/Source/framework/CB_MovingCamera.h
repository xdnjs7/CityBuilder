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
	void MoveForward(float Value); // 카메라 전/후 이동(W, S)

	UFUNCTION(BlueprintCallable, BLueprintImplementableEvent, Category = Camera)
	void MoveRight(float Value); // 카메라 좌/우 이동(A, D)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void CameraOrbit(float Value); // 카메라 좌/우 회전(Q, E)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void CameraPitch(float Value); // 카메라 상/하 회전(R, F)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void CameraZoom(float Value); // 카메라 줌인/줌아웃

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void MouseX(float Value); // 카메라 마우스 X축

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = Camera)
	void MouseY(float Value); // 카메라 마우스 Y축

	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = WalkSpeed)
	//void UpdateMovementSpeed();

	//void ZoomIn();

	//void ZoomOut();

	//void OnMouseRightClick();
	//void OnMouseRightRelease();

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = Camera)
	//FVector ForwardVector() const; // 카메라가 현재 향하고 있는 방향의 단위 벡터를 반환

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = Camera)
	//FVector RightVector() const; // 카메라가 현재 향하고 있는 방향에서 오른쪽으로 향하는 단위 벡터를 반환

	//void Rotate(float Value); // 카메라 좌/우 회전(Q, E)

	//void CallOrbit(float AxisValue); // CameraOrbit호출용 함수

};
