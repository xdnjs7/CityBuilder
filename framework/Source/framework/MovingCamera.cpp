// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AMovingCamera::AMovingCamera()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MCCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MCCapsule"));
    MCCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MCCamera"));

    // 클래스 컴포넌트를 디폴트 캐릭터의 스켈레탈 메시 컴포넌트에 어태치
    MCCamera->SetupAttachment(GetMesh());
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

    // 카메라 회전
    PlayerInputComponent->BindAxis("Rotate", this, &AMovingCamera::Rotate);

    // 카메라 줌
    PlayerInputComponent->BindAxis("Zoom", this, &AMovingCamera::MouseWheelZoom);
}

void AMovingCamera::MoveForward(float Value)
{
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
    AddMovementInput(Direction, Value);
}

void AMovingCamera::MoveRight(float Value)
{
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
    AddMovementInput(Direction, Value);
}

void AMovingCamera::Rotate(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("RotateRight Called"));

    // 입력값에 따라 회전
    FRotator NewRotation = MCCamera->GetComponentRotation();
    NewRotation.Yaw += Value * CameraRotationSpeed;

    // 보간 속도를 따로 지정하여 사용
    float InterpSpeed = 10.0f;
    FRotator LerpedRotation = FMath::RInterpTo(MCCamera->GetComponentRotation(), NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed);

    MCCamera->SetWorldRotation(LerpedRotation);
}

void AMovingCamera::MouseWheelZoom(float Value)
{
    // 마우스 휠 입력값을 이용하여 카메라 줌인 또는 줌아웃
    FVector CameraLocation = MCCamera->GetComponentLocation();
    FVector NewLocation = CameraLocation + MCCamera->GetForwardVector() * (Value * ZoomSpeed);

    // 월드 경계에 도달하지 않도록 위치 조정 (원하는 범위로 수정 가능)
    NewLocation.X = FMath::Clamp(NewLocation.X, MinZoomDistance, MaxZoomDistance);
    NewLocation.Y = FMath::Clamp(NewLocation.Y, MinZoomDistance, MaxZoomDistance);
    NewLocation.Z = FMath::Clamp(NewLocation.Z, MinZoomDistance, MaxZoomDistance);

    MCCamera->SetWorldLocation(NewLocation);
}