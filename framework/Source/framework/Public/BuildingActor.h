// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PloppableComponent.h"
#include "GameFramework/Actor.h"
#include "BuildingActor.generated.h"

UCLASS()
class FRAMEWORK_API ABuildingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;



public:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMeshComponent;

	//UPROPERTY(EditAnywhere)
	//class UCB_ClickableComponent* ClickableComponent;

	UPROPERTY(VisibleAnywhere)
	class UPloppableComponent* PloppableComponent;

};
