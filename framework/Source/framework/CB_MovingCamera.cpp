// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_MovingCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACB_MovingCamera::ACB_MovingCamera()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACB_MovingCamera::BeginPlay()
{
	Super::BeginPlay();

	CBSpringArm = FindComponentByClass<USpringArmComponent>();
	
}

// Called every frame
void ACB_MovingCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACB_MovingCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라 이동
	PlayerInputComponent->BindAxis("MoveForward", this, &ACB_MovingCamera::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACB_MovingCamera::MoveRight);

	// 카메라 좌우 회전
	PlayerInputComponent->BindAxis("Rotate", this, &ACB_MovingCamera::CameraOrbit);
	
	// 카메라 상하 회전
	PlayerInputComponent->BindAxis("CameraPitch", this, &ACB_MovingCamera::CameraPitch);

	//// 카메라 줌
	//PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ACB_MovingCamera::ZoomIn);
	//PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &ACB_MovingCamera::ZoomOut);

	// 카메라 마우스 X,Y축
	PlayerInputComponent->BindAxis("MouseX", this, &ACB_MovingCamera::MouseX);
	PlayerInputComponent->BindAxis("MouseY", this, &ACB_MovingCamera::MouseY);

	//// 마우스 우클릭
	//PlayerInputComponent->BindAction("MouseRightClick", IE_Pressed, this, &ACB_MovingCamera::OnMouseRightClick);
	//PlayerInputComponent->BindAction("MouseRightClick", IE_Released, this, &ACB_MovingCamera::OnMouseRightRelease);
}

//void ACB_MovingCamera::MoveForward(float Value)
//{
//
//}

//void ACB_MovingCamera::MoveRight(float Value)
//{
//
//}

//void ACB_MovingCamera::CameraOrbit(float Value)
//{
//
//}

//FVector ACB_MovingCamera::ForwardVector() const
//{
//    // 현재 카메라의 회전 값을 얻는다.
//    FRotator CurrentRotation = GetControlRotation();
//
//    // Pitch를 0으로 만들어서 전진 방향을 얻는다.
//    FRotator NewRotator = UKismetMathLibrary::MakeRotator(0.0f, CurrentRotation.Yaw, 0.0f);
//
//    // 새로운 회전값을 이용하여 전진 방향의 단위 벡터를 얻는다.
//    FVector ForwardVec = UKismetMathLibrary::GetForwardVector(NewRotator);
//
//    return ForwardVec;
//}

//FVector ACB_MovingCamera::RightVector() const
//{
//    // 현재 카메라의 회전 값을 얻는다.
//    FRotator CurrentRotation = GetControlRotation();
//
//    // Pitch를 0으로 만들어서 오른쪽 방향을 얻는다.
//    FRotator NewRotator = UKismetMathLibrary::MakeRotator(0.0f, CurrentRotation.Yaw, 0.0f);
//
//    // 새로운 회전값을 이용하여 오른쪽 방향의 단위 벡터를 얻는다.
//    FVector RightVec = UKismetMathLibrary::GetRightVector(NewRotator);
//
//    return RightVec;
//}

//void ACB_MovingCamera::Rotate(float Value)
//{
//
//}

//void ACB_MovingCamera::CallOrbit(float AxisValue)
//{
//	CameraOrbit(AxisValue); // 블루프린트에서 구현한 이벤트 호출
//
//	float RotationAmount = AxisValue * OrbitSpeed * GetWorld()->GetDeltaSeconds();
//	AddControllerYawInput(RotationAmount);
//}

//float ACB_MovingCamera::CameraZoomCal(float Value)
//{
//	// 현재 타겟 암 길이 얻기
//	float CurrentTargetArmLength = CBSpringArm->TargetArmLength;
//
//	// 입력 값과 줌 속도를 기반으로 새로운 타겟 암 길이 계산
//	float NewTargetArmLength = CurrentTargetArmLength + Value * ZoomSpeed * GetWorld()->GetDeltaSeconds();
//
//	// 새로운 타겟 암 길이를 ZoomMin과 ZoomMax 사이로 클램핑
//	float ClampedTargetArmLength = FMath::Clamp(NewTargetArmLength, ZoomMin, ZoomMax);
//
//	// 부드럽게 타겟 암 길이 변경
//	float SmoothedTargetArmLength = FMath::FInterpTo(CurrentTargetArmLength, ClampedTargetArmLength, GetWorld()->GetDeltaSeconds(), 5.0f);
//
//	// 새로 계산한 타겟 암 길이를 설정
//	CBSpringArm->TargetArmLength = SmoothedTargetArmLength;
//
//	// 최종 타겟 암 길이 반환
//	return SmoothedTargetArmLength;
//}

//void ACB_MovingCamera::ZoomIn()
//{
//
//}

//void ACB_MovingCamera::ZoomOut()
//{
//
//}

void ACB_MovingCamera::UpdateMovementSpeed()
{
	// CBSpringArm이 null이면 아무 것도 하지 않음
	if (!CBSpringArm)
	{
		UE_LOG(LogTemp, Warning, TEXT("CBSpringArm is null"));
		return;
	}

    // 현재 SpringArm의 타겟 암 길이를 얻어옴
    float TargetArmLength = CBSpringArm->TargetArmLength;

	// 타겟 암 길이가 0 이하인 경우도 처리
	if (TargetArmLength <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid TargetArmLength"));
		return;
	}

    // 타겟 암 길이를 ZoomMin으로 나누어 줌 비율을 계산
    float ZoomRatio = TargetArmLength / ZoomMin;

    // 나누어진 Zoom 비율을 초기 이동 속도에 곱하여 새로운 이동 속도를 계산
    float NewSpeed = ZoomRatio * InitialMovementSpeed;

    // 캐릭터 무브먼트의 최대 걷기 속도를 업데이트
    ACharacter::GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
}

FRotator ACB_MovingCamera::CameraPitchCal(float Value)
{
	// 입력된 값에 OrbitSpeed를 곱하여 카메라의 상하 회전 속도를 조절
	float PitchChange = Value * OrbitSpeed;

	// 현재 SpringArm의 회전값을 가져옴
	FRotator SpringArmRotation = CBSpringArm->GetComponentRotation();

	// 새로운 Pitch 값을 계산
	float NewPitch = SpringArmRotation.Pitch + PitchChange;

	// 상하 회전 각도를 지정된 범위 내에서 클램핑
	float ClampedPitch = FMath::ClampAngle(NewPitch, CameraMinClamp, CameraMaxClamp);

	// 새로운 회전값을 생성
	FRotator NewSpringArmRotation = FRotator(ClampedPitch, SpringArmRotation.Yaw, SpringArmRotation.Roll);

	// 새로 계산한 회전값의 Pitch 반환
	return NewSpringArmRotation;
}