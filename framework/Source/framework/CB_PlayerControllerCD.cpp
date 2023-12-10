// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_PlayerControllerCD.h"

void ACB_PlayerControllerCD::BeginPlay()
{
    Super::BeginPlay();

    
    SpawnActorAtMousePosition();
}

void ACB_PlayerControllerCD::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateActorPositionToMousePosition();
}

void ACB_PlayerControllerCD::SetupInputComponent()
{
    Super::SetupInputComponent();

    // 마우스 클릭 이벤트에 대한 바인딩 추가
    InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ACB_PlayerControllerCD::OnLeftMouseClick);
}

void ACB_PlayerControllerCD::SpawnActorAtMousePosition()
{
    // 원하는 액터 클래스에 대한 UClass*를 얻음
    UClass* ActorClass = buildingType; // 자신의 액터 클래스로 변경

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // 액터를 스폰하고, placeableActor로 저장
    placeableActor = GetWorld()->SpawnActor<AActor>(ActorClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
}




void ACB_PlayerControllerCD::UpdateActorPositionToMousePosition()
{
    if (placeableActor) {
        FVector WorldLocation;
        FVector WorldDirection;

        float MouseX, MouseY;
        this->GetMousePosition(MouseX, MouseY);
        if (this->DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection))
        {
            FHitResult HitResult;
            FVector Start = WorldLocation;
            FVector End = Start + WorldDirection * 10000;

            if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_GameTraceChannel1))
            {
                placeableActor->SetActorLocation(HitResult.Location);
            }
        }
    }
}

void ACB_PlayerControllerCD::OnLeftMouseClick()
{
    UPloppableComponent* PloppableComponent = placeableActor->FindComponentByClass<UPloppableComponent>();
    if (PloppableComponent)
    {
        bool isPlacement = PloppableComponent->isPlacement;
        if (isPlacement==true)
        {
            placeableActor = nullptr;

            SpawnActorAtMousePosition();
        }
    }

}




