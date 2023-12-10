// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PloppableComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FRAMEWORK_API UPloppableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPloppableComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//변수
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Materials)
	UMaterial* ploppableMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Materials)
	UMaterial* invalidPloppableMeta;

	UPROPERTY()
	UStaticMeshComponent* StaticMeshComponent;

	//함수
public:
	//void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp);

	UFUNCTION(BlueprintCallable)
	void UpdateState();
	UFUNCTION(BlueprintCallable)
	void SetPlacement(bool onoff);


	bool GetPlaceMent() const;
};
