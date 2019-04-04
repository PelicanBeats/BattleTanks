// Fill out your copyright notice in the Description page of Project Settings.





#include "Tank.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/World.h" 
#include "GameFramework/PlayerController.h"

// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TankAimmingComponent = CreateDefaultSubobject<UTankAimmingComponent>(FName("Aiming Component"));

}


void ATank::SetBarrelReference(UStaticMeshComponent* BarrelToSet)
{
	TankAimmingComponent->SetBarrelReference(BarrelToSet);
}


// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATank::AimAt(FVector OutHitLocation)
{
	TankAimmingComponent->AimAt(OutHitLocation, LauchSpeed);

}