// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingActor.h"

// Sets default values
ABuildingActor::ABuildingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	//ClickableComponent = CreateDefaultSubobject<UCB_ClickableComponent>(TEXT("ClickableComponent"));
	PloppableComponent = CreateDefaultSubobject<UPloppableComponent>(TEXT("PloppableComponent"));

	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void ABuildingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuildingActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    // Call SetPlacement and UpdateState functions when overlap begins
    if (PloppableComponent)
    {
        PloppableComponent->SetPlacement(false);
        PloppableComponent->UpdateState();
    }
}

// Called when this actor stops overlapping another actor
void ABuildingActor::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);


    if (PloppableComponent)
    {
        PloppableComponent->SetPlacement(true);
        PloppableComponent->UpdateState();
    }
}