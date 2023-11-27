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

    // Ŭ���� ������Ʈ�� ����Ʈ ĳ������ ���̷�Ż �޽� ������Ʈ�� ����ġ
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

    // ī�޶� �̵�
    PlayerInputComponent->BindAxis("MoveForward", this, &AMovingCamera::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMovingCamera::MoveRight);

    // ī�޶� ȸ��
    PlayerInputComponent->BindAxis("Rotate", this, &AMovingCamera::Rotate);

    // ī�޶� ��
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

    // �Է°��� ���� ȸ��
    FRotator NewRotation = MCCamera->GetComponentRotation();
    NewRotation.Yaw += Value * CameraRotationSpeed;

    // ���� �ӵ��� ���� �����Ͽ� ���
    float InterpSpeed = 10.0f;
    FRotator LerpedRotation = FMath::RInterpTo(MCCamera->GetComponentRotation(), NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed);

    MCCamera->SetWorldRotation(LerpedRotation);
}

void AMovingCamera::MouseWheelZoom(float Value)
{
    // ���콺 �� �Է°��� �̿��Ͽ� ī�޶� ���� �Ǵ� �ܾƿ�
    FVector CameraLocation = MCCamera->GetComponentLocation();
    FVector NewLocation = CameraLocation + MCCamera->GetForwardVector() * (Value * ZoomSpeed);

    // ���� ��迡 �������� �ʵ��� ��ġ ���� (���ϴ� ������ ���� ����)
    NewLocation.X = FMath::Clamp(NewLocation.X, MinZoomDistance, MaxZoomDistance);
    NewLocation.Y = FMath::Clamp(NewLocation.Y, MinZoomDistance, MaxZoomDistance);
    NewLocation.Z = FMath::Clamp(NewLocation.Z, MinZoomDistance, MaxZoomDistance);

    MCCamera->SetWorldLocation(NewLocation);
}