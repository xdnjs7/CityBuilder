// Fill out your copyright notice in the Description page of Project Settings.


#include "PloppableComponent.h"

// Sets default values for this component's properties
UPloppableComponent::UPloppableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

}


// Called when the game starts
void UPloppableComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	AActor* Owner = GetOwner();
	if (Owner)
	{
		StaticMeshComponent = Owner->FindComponentByClass<UStaticMeshComponent>();
	}
	
}


// Called every frame
void UPloppableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPloppableComponent::SetPlacement(bool onoff)
{
	isPlacement = onoff;
}

bool UPloppableComponent::GetPlaceMent() const
{
	return isPlacement;
}

void UPloppableComponent::UpdateState()
{
	if (StaticMeshComponent)
	{
		if (GetPlaceMent())
		{
			StaticMeshComponent->SetMaterial(0, ploppableMeta);
		}
		else
		{
			StaticMeshComponent->SetMaterial(0, invalidPloppableMeta);
		}
	}
}
