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

    // ������Ʈ Init
    MCSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MCSpringArm"));
    MCSpringArm->SetupAttachment(RootComponent);
    MCSpringArm->TargetArmLength = 1000.0f;
    MCSpringArm->bUsePawnControlRotation = true;

    MCCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MCCamera"));
    MCCamera->SetupAttachment(MCSpringArm);
    MCCamera->bUsePawnControlRotation = false;

    //// Ŭ���� ������Ʈ�� ����Ʈ ĳ������ ���̷�Ż �޽� ������Ʈ�� ����ġ
    //MCCamera->SetupAttachment(GetMesh());

    // ī�޶� ����
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

    // ī�޶� �̵�
    PlayerInputComponent->BindAxis("MoveForward", this, &AMovingCamera::AMoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMovingCamera::AMoveRight);

    // ī�޶� �¿� ȸ��
    PlayerInputComponent->BindAxis("Rotate", this, &AMovingCamera::ARotate);

    // ī�޶� ���� ȸ��
    PlayerInputComponent->BindAxis("CameraPitch", this, &AMovingCamera::ACameraPitch);

    // ī�޶� ��
    PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AMovingCamera::AZoomIn);
    PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &AMovingCamera::AZoomOut);

    // MouseX, MouseY
    PlayerInputComponent->BindAxis("MouseX", this, &AMovingCamera::ARotate);
    PlayerInputComponent->BindAxis("MouseY", this, &AMovingCamera::ACameraPitch);

    // ���콺 ��Ŭ��
    PlayerInputComponent->BindAction("MouseRightClick", IE_Pressed, this, &AMovingCamera::AOnMouseRightClick);
    PlayerInputComponent->BindAction("MouseRightClick", IE_Released, this, &AMovingCamera::AOnMouseRightRelease);
}

void AMovingCamera::AMoveForward(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("MoveForward Called: %f"), Value);

    FVector Direction = UKismetMathLibrary::GetForwardVector(FRotator(0.0f, GetControlRotation().Yaw, 0.0f));
    AddMovementInput(Direction, Value);
}

void AMovingCamera::AMoveRight(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("MoveRight Called: %f"), Value);

    FVector Direction = UKismetMathLibrary::GetRightVector(FRotator(0.0f, GetControlRotation().Yaw, 0.0f));
    AddMovementInput(Direction, Value);
}

void AMovingCamera::AOnMouseRightClick()
{
    // ���콺 ��Ŭ�� ���� �� ȸ���� ���
    bAllowCameraRotation = true;
}

void AMovingCamera::AOnMouseRightRelease()
{
    // ���콺 ��Ŭ�� ���� �� ȸ���� ����
    bAllowCameraRotation = false;
}

void AMovingCamera::ARotate(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("RotateRight Called"));

    AddControllerYawInput(Value);

    if (bAllowCameraRotation)
    {
        AddControllerYawInput(Value);
    }
}

void AMovingCamera::ACameraPitch(float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("CameraPitch Called"));

    // Ű���� �Է��� �ִ� ��쿡�� ȸ���� ����
    if (FMath::Abs(Value) > 0.0f)
    {
        // ���� ī�޶��� ȸ�� ���� �����ɴϴ�.
        FRotator CurrentRotation = Controller->GetControlRotation();

        // �Էµ� ���� �̿��Ͽ� ���ο� ��ġ ���� ����մϴ�.
        float NewPitch = FMath::ClampAngle(CurrentRotation.Pitch + Value * CameraRotationSpeed, CameraMinClamp, CameraMaxClamp);

        // ���� ���� ��ġ ���� �����մϴ�.
        FRotator NewRotation = FRotator(NewPitch, CurrentRotation.Yaw, CurrentRotation.Roll);

        // �ε巯�� ȸ���� ���� ������ ����մϴ�.
        float InterpSpeed = 10.0f;  // ���� �ӵ� ����
        FRotator SmoothRotation = FMath::RInterpTo(CurrentRotation, NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed);

        // ������ ȸ�� ���� �����մϴ�.
        Controller->SetControlRotation(SmoothRotation);
    }

    // ���콺 ��Ŭ�� �߿��� ���� ȸ���� ó��
    if (bAllowCameraRotation)
    {
        float CurrentPitch = Controller->GetControlRotation().Pitch;
        float NewPitch = FMath::ClampAngle(CurrentPitch + Value * CameraRotationSpeed, CameraMinClamp, CameraMaxClamp);
        FRotator NewRotation = FRotator(NewPitch, Controller->GetControlRotation().Yaw, Controller->GetControlRotation().Roll);

        float InterpSpeed = 10.0f;  // ���� �ӵ� ����
        FRotator SmoothRotation = FMath::RInterpTo(Controller->GetControlRotation(), NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed);
        Controller->SetControlRotation(SmoothRotation);
    }
}

//void AMovingCamera::MouseWheelZoom(float Value)
//{
//    // ���콺 �� �Է°��� �̿��Ͽ� ī�޶� ���� �Ǵ� �ܾƿ�
//    FVector CameraLocation = MCCamera->GetComponentLocation();
//    FVector NewLocation = CameraLocation + MCCamera->GetForwardVector() * (Value * ZoomSpeed);
//
//    MCCamera->SetWorldLocation(NewLocation);
//}

void AMovingCamera::ACameraZoom(float Magnitude)
{
    // ���� Arm ���̸� ������
    float CurrentArmLength = MCSpringArm->TargetArmLength;

    // ���ο� Arm ���̸� ���
    float NewArmLength = CurrentArmLength + (Magnitude * ZoomSpeed);

    // Arm ���̸� Clamp
    float ClampedArmLength = FMath::Clamp(NewArmLength, ZoomMin, ZoomMax);

    // ���ο� Arm ���̸� ����
    MCSpringArm->TargetArmLength = ClampedArmLength;
}

void AMovingCamera::AZoomIn()
{
    ACameraZoom(-10.0f);
}

void AMovingCamera::AZoomOut()
{
    ACameraZoom(10.0f);
}