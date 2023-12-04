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

	// ī�޶� �̵�
	PlayerInputComponent->BindAxis("MoveForward", this, &ACB_MovingCamera::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACB_MovingCamera::MoveRight);

	// ī�޶� �¿� ȸ��
	PlayerInputComponent->BindAxis("Rotate", this, &ACB_MovingCamera::CameraOrbit);
	
	// ī�޶� ���� ȸ��
	PlayerInputComponent->BindAxis("CameraPitch", this, &ACB_MovingCamera::CameraPitch);

	//// ī�޶� ��
	//PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ACB_MovingCamera::ZoomIn);
	//PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &ACB_MovingCamera::ZoomOut);

	// ī�޶� ���콺 X,Y��
	PlayerInputComponent->BindAxis("MouseX", this, &ACB_MovingCamera::MouseX);
	PlayerInputComponent->BindAxis("MouseY", this, &ACB_MovingCamera::MouseY);

	//// ���콺 ��Ŭ��
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
//    // ���� ī�޶��� ȸ�� ���� ��´�.
//    FRotator CurrentRotation = GetControlRotation();
//
//    // Pitch�� 0���� ���� ���� ������ ��´�.
//    FRotator NewRotator = UKismetMathLibrary::MakeRotator(0.0f, CurrentRotation.Yaw, 0.0f);
//
//    // ���ο� ȸ������ �̿��Ͽ� ���� ������ ���� ���͸� ��´�.
//    FVector ForwardVec = UKismetMathLibrary::GetForwardVector(NewRotator);
//
//    return ForwardVec;
//}

//FVector ACB_MovingCamera::RightVector() const
//{
//    // ���� ī�޶��� ȸ�� ���� ��´�.
//    FRotator CurrentRotation = GetControlRotation();
//
//    // Pitch�� 0���� ���� ������ ������ ��´�.
//    FRotator NewRotator = UKismetMathLibrary::MakeRotator(0.0f, CurrentRotation.Yaw, 0.0f);
//
//    // ���ο� ȸ������ �̿��Ͽ� ������ ������ ���� ���͸� ��´�.
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
//	CameraOrbit(AxisValue); // �������Ʈ���� ������ �̺�Ʈ ȣ��
//
//	float RotationAmount = AxisValue * OrbitSpeed * GetWorld()->GetDeltaSeconds();
//	AddControllerYawInput(RotationAmount);
//}

//void ACB_MovingCamera::CameraZoom(float Value)
//{
//	// ���� Ÿ�� �� ���� ���
//	float CurrentTargetArmLength = CBSpringArm->TargetArmLength;
//
//	// �Է� ���� �� �ӵ��� ������� ���ο� Ÿ�� �� ���� ���
//	float NewTargetArmLength = CurrentTargetArmLength + Value * ZoomSpeed * GetWorld()->GetDeltaSeconds();
//
//	// ���ο� Ÿ�� �� ���̸� ZoomMin�� ZoomMax ���̷� Ŭ����
//	float ClampedTargetArmLength = FMath::Clamp(NewTargetArmLength, ZoomMin, ZoomMax);
//
//	// �ε巴�� Ÿ�� �� ���� ����
//	float SmoothedTargetArmLength = FMath::FInterpTo(CurrentTargetArmLength, ClampedTargetArmLength, GetWorld()->GetDeltaSeconds(), 5.0f);
//
//	// ���ο� Ÿ�� �� ���� ����
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
//    // ���� SpringArm�� Ÿ�� �� ���̸� ����
//    float TargetArmLength = CBSpringArm->TargetArmLength;
//
//    // Ÿ�� �� ���̸� ZoomMin���� ������ �� ������ ���
//    float ZoomRatio = TargetArmLength / ZoomMin;
//
//    // �������� Zoom ������ �ʱ� �̵� �ӵ��� ���Ͽ� ���ο� �̵� �ӵ��� ���
//    float NewSpeed = ZoomRatio * InitialMovementSpeed;
//
//    // ĳ���� �����Ʈ�� �ִ� �ȱ� �ӵ��� ������Ʈ
//    ACharacter::GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
//}

//void ACB_MovingCamera::CameraPitch(float Value)
//{
//    // �Էµ� ���� OrbitSpeed�� ���Ͽ� ī�޶��� ���� ȸ�� �ӵ��� ����
//    float PitchChange = Value * OrbitSpeed;
//
//    // ���� SpringArm�� Pitch�� ���ο� ���� ȸ�� �� ����
//    float NewPitch = PitchChange + CBSpringArm->GetComponentRotation().Pitch;
//
//    // ���ο� SpringArm ����
//    USpringArmComponent* NewSpringArm = NewObject<USpringArmComponent>(this);
//
//    // ���� Actor�� ȸ���� �����ͼ� ������ �и�
//    FRotator ActorRotation = NewSpringArm->GetOwner()->GetActorRotation();
//
//    // ���ο� Pitch ���� ���� Pitch�� ���Ͽ� ���ο� ȸ���� ����
//    float CombinedPitch = NewPitch + ActorRotation.Pitch;
//    FRotator NewRotator = UKismetMathLibrary::MakeRotator(ActorRotation.Roll, CombinedPitch, ActorRotation.Yaw);
//
//    // ���� ȸ�� ������ ������ ���� ������ Ŭ����
//    float ClampedPitch = FMath::ClampAngle(NewRotator.Pitch, CameraMinClamp, CameraMaxClamp);
//
//    // ���� ȸ������ ���ο� Pitch ������ ����
//    FRotator FinalRotator = UKismetMathLibrary::MakeRotator(ActorRotation.Roll, ClampedPitch, ActorRotation.Yaw);
//
//    // Actor�� ȸ���� ���� ȸ�������� �����Ͽ� ���� ȸ�� ����
//    NewSpringArm->GetOwner()->SetActorRotation(FinalRotator);
//}