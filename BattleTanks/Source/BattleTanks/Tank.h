// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankAimmingComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.generated.h"

UCLASS()
class BATTLETANKS_API ATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector OutHitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);

	// Sets default values for this pawn's properties
	ATank();

protected:

	UTankAimmingComponent* TankAimmingComponent = nullptr;
private:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = Firing)
		float LauchSpeed = 100000; // TODO Find sensible firing speed
};
