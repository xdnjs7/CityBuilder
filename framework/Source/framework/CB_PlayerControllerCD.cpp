// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_PlayerControllerCD.h"
#include "BuildingTypeEnum.h"
#include "GridCell.h"

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

    // ���콺 Ŭ�� �̺�Ʈ�� ���� ���ε� �߰�
    InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ACB_PlayerControllerCD::OnLeftMouseClick);
}

void ACB_PlayerControllerCD::SpawnActorAtMousePosition()
{
    // ���ϴ� ���� Ŭ������ ���� UClass*�� ����
    UClass* ActorClass = buildingType; // �ڽ��� ���� Ŭ������ ����

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


    placeableActor = GetWorld()->SpawnActor<ABuildingActor>(ActorClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
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
                SelectLocation = gridManager->GetClosestGridPosition(HitResult.Location);
                placeableActor->SetActorLocation(SelectLocation);
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
        bool isOccupied = gridManager->GetClosestGridCell(SelectLocation)->IsOccupied;
        if (isPlacement==true&&isOccupied==false)
        {
            OccupyingType = EBuildingTypeEnum::Placed;
            gridManager->GetClosestGridCell(SelectLocation)->NorthCell->SetOccupied(OccupyingType, placeableActor);
            gridManager->GetClosestGridCell(SelectLocation)->SouthCell->SetOccupied(OccupyingType, placeableActor);
            gridManager->GetClosestGridCell(SelectLocation)->EastCell->SetOccupied(OccupyingType, placeableActor);
            gridManager->GetClosestGridCell(SelectLocation)->WestCell->SetOccupied(OccupyingType, placeableActor);

            placeableActor = nullptr;

            SpawnActorAtMousePosition();
        }
    }

}






