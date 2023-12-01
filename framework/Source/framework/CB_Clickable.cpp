// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_Clickable.h"

// Sets default values
ACB_Clickable::ACB_Clickable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACB_Clickable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACB_Clickable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

