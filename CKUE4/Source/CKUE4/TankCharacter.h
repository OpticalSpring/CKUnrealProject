// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "TankCharacter.generated.h"

UCLASS()
class CKUE4_API ATankCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATankCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector DirectionToMove = FVector::ZeroVector;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Visual)
	UStaticMeshComponent* Body;
	UPROPERTY(VisibleAnywhere, Category = Visual)
	UStaticMeshComponent* LeftWheel;
	UPROPERTY(VisibleAnywhere, Category = Visual)
	UStaticMeshComponent* RightWheel;
	UPROPERTY(VisibleAnywhere, Category = Visual)
	UStaticMeshComponent* Turret;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	
};
