// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMovingCamera::AMovingCamera()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MCCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MCCapsule"));
    RootComponent = MCCapsule;

    // 컴포넌트 Init
    MCSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MCSpringArm"));
    MCSpringArm->SetupAttachment(RootComponent);
    MCSpringArm->TargetArmLength = 1000.0f;
    MCSpringArm->bUsePawnControlRotation = true;

    MCCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MCCamera"));
    MCCamera->SetupAttachment(MCSpringArm);
    MCCamera->bUsePawnControlRotation = false;

    //// 클래스 컴포넌트를 디폴트 캐릭터의 스켈레탈 메시 컴포넌트에 어태치
    //MCCamera->SetupAttachment(GetMesh());

    // 카메라 세팅
    bUseControllerRotationPitch = false;
    bUseControllerRotationRoll = false;
    bUseControllerRotationYaw = false;
    
    bAllowCameraRotation = false;
}

// Called when the game starts or when spawned
void AMovingCamera::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMovingCamera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMovingCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // 카메라 이동
    PlayerInputComponent->BindAxis("MoveForward", this, &AMovingCamera::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMovingCamera::MoveRight);

    // 카메라 좌우 회전
    PlayerInputComponent->BindAxis("Rotate", this, &AMovingCamera::Rotate);

    // 카메라 상하 회전
    PlayerInputComponent->BindAxis("CameraPitch", this, &AMovingCamera::CameraPitch);

    // 카메라 줌
    PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AMovingCamera::ZoomIn);
    PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &AMovingCamera::ZoomOut);

    // MouseX, MouseY
    PlayerInputComponent->BindAxis("MouseX", this, &AMovingCamera::Rotate);
    PlayerInputComponent->BindAxis("MouseY", this, &AMovingCamera::CameraPitch);

    // 마우스 우클릭
    PlayerInputComponent->BindAction("MouseRightClick", IE_Pressed, this, &AMovingCamera::OnMouseRightClick);
    PlayerInputComponent->BindAction("MouseRightClick", IE_Released, this, &AMovingCamera::OnMouseRightRelease);
}

void AMovingCamera::MoveForward(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("MoveForward Called: %f"), Value);

    FVector Direction = UKismetMathLibrary::GetForwardVector(FRotator(0.0f, GetControlRotation().Yaw, 0.0f));
    AddMovementInput(Direction, Value);
}

void AMovingCamera::MoveRight(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("MoveRight Called: %f"), Value);

    FVector Direction = UKismetMathLibrary::GetRightVector(FRotator(0.0f, GetControlRotation().Yaw, 0.0f));
    AddMovementInput(Direction, Value);
}

void AMovingCamera::OnMouseRightClick()
{
    // 마우스 우클릭 시작 시 회전을 허용
    bAllowCameraRotation = true;
}

void AMovingCamera::OnMouseRightRelease()
{
    // 마우스 우클릭 종료 시 회전을 중지
    bAllowCameraRotation = false;
}

void AMovingCamera::Rotate(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("RotateRight Called"));

    AddControllerYawInput(Value);

    if (bAllowCameraRotation)
    {
        AddControllerYawInput(Value);
    }
}

void AMovingCamera::CameraPitch(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("CameraPitch Called"));

    // 키보드 입력이 있는 경우에만 회전을 적용
    if (FMath::Abs(Value) > 0.0f)
    {
        // 현재 카메라의 회전 값을 가져옵니다.
        FRotator CurrentRotation = Controller->GetControlRotation();

        // 입력된 값을 이용하여 새로운 피치 값을 계산합니다.
        float NewPitch = FMath::ClampAngle(CurrentRotation.Pitch + Value * CameraRotationSpeed, CameraMinClamp, CameraMaxClamp);

        // 새로 계산된 피치 값을 설정합니다.
        FRotator NewRotation = FRotator(NewPitch, CurrentRotation.Yaw, CurrentRotation.Roll);

        // 부드러운 회전을 위해 보간을 사용합니다.
        float InterpSpeed = 10.0f;  // 보간 속도 조절
        FRotator SmoothRotation = FMath::RInterpTo(CurrentRotation, NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed);

        // 보간된 회전 값을 적용합니다.
        Controller->SetControlRotation(SmoothRotation);
    }

    // 마우스 우클릭 중에만 상하 회전을 처리
    if (bAllowCameraRotation)
    {
        float CurrentPitch = Controller->GetControlRotation().Pitch;
        float NewPitch = FMath::ClampAngle(CurrentPitch + Value * CameraRotationSpeed, CameraMinClamp, CameraMaxClamp);
        FRotator NewRotation = FRotator(NewPitch, Controller->GetControlRotation().Yaw, Controller->GetControlRotation().Roll);

        float InterpSpeed = 10.0f;  // 보간 속도 조절
        FRotator SmoothRotation = FMath::RInterpTo(Controller->GetControlRotation(), NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed);
        Controller->SetControlRotation(SmoothRotation);
    }
}

//void AMovingCamera::MouseWheelZoom(float Value)
//{
//    // 마우스 휠 입력값을 이용하여 카메라 줌인 또는 줌아웃
//    FVector CameraLocation = MCCamera->GetComponentLocation();
//    FVector NewLocation = CameraLocation + MCCamera->GetForwardVector() * (Value * ZoomSpeed);
//
//    MCCamera->SetWorldLocation(NewLocation);
//}

void AMovingCamera::CameraZoom(float Magnitude)
{
    // 현재 Arm 길이를 가져옴
    float CurrentArmLength = MCSpringArm->TargetArmLength;

    // 새로운 Arm 길이를 계산
    float NewArmLength = CurrentArmLength + (Magnitude * ZoomSpeed);

    // Arm 길이를 Clamp
    float ClampedArmLength = FMath::Clamp(NewArmLength, ZoomMin, ZoomMax);

    // 새로운 Arm 길이를 설정
    MCSpringArm->TargetArmLength = ClampedArmLength;
}

void AMovingCamera::ZoomIn()
{
    CameraZoom(-10.0f);
}

void AMovingCamera::ZoomOut()
{
    CameraZoom(10.0f);
}