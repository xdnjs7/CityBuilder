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

	/*CBSpringArm = FindComponentByClass<USpringArmComponent>();*/
	
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

//void ACB_MovingCamera::CameraZoom(float Value)
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
//	// 새로운 타겟 암 길이 설정
//	CBSpringArm->TargetArmLength = SmoothedTargetArmLength;
//}

//void ACB_MovingCamera::ZoomIn()
//{
//
//}

//void ACB_MovingCamera::ZoomOut()
//{
//
//}

//void ACB_MovingCamera::UpdateMovementSpeed()
//{
//    // 현재 SpringArm의 타겟 암 길이를 얻어옴
//    float TargetArmLength = CBSpringArm->TargetArmLength;
//
//    // 타겟 암 길이를 ZoomMin으로 나누어 줌 비율을 계산
//    float ZoomRatio = TargetArmLength / ZoomMin;
//
//    // 나누어진 Zoom 비율을 초기 이동 속도에 곱하여 새로운 이동 속도를 계산
//    float NewSpeed = ZoomRatio * InitialMovementSpeed;
//
//    // 캐릭터 무브먼트의 최대 걷기 속도를 업데이트
//    ACharacter::GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
//}

//void ACB_MovingCamera::CameraPitch(float Value)
//{
//    // 입력된 값에 OrbitSpeed를 곱하여 카메라의 상하 회전 속도를 조절
//    float PitchChange = Value * OrbitSpeed;
//
//    // 현재 SpringArm의 Pitch에 새로운 상하 회전 값 적용
//    float NewPitch = PitchChange + CBSpringArm->GetComponentRotation().Pitch;
//
//    // 새로운 SpringArm 생성
//    USpringArmComponent* NewSpringArm = NewObject<USpringArmComponent>(this);
//
//    // 현재 Actor의 회전을 가져와서 각도를 분리
//    FRotator ActorRotation = NewSpringArm->GetOwner()->GetActorRotation();
//
//    // 새로운 Pitch 값을 현재 Pitch에 더하여 새로운 회전값 생성
//    float CombinedPitch = NewPitch + ActorRotation.Pitch;
//    FRotator NewRotator = UKismetMathLibrary::MakeRotator(ActorRotation.Roll, CombinedPitch, ActorRotation.Yaw);
//
//    // 상하 회전 각도를 지정된 범위 내에서 클램핑
//    float ClampedPitch = FMath::ClampAngle(NewRotator.Pitch, CameraMinClamp, CameraMaxClamp);
//
//    // 최종 회전값을 새로운 Pitch 값으로 설정
//    FRotator FinalRotator = UKismetMathLibrary::MakeRotator(ActorRotation.Roll, ClampedPitch, ActorRotation.Yaw);
//
//    // Actor의 회전을 최종 회전값으로 설정하여 상하 회전 적용
//    NewSpringArm->GetOwner()->SetActorRotation(FinalRotator);
//}