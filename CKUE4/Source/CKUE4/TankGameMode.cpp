// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameMode.h"
#include "PlayerTankController.h"
#include "TankCharacter.h"


ATankGameMode::ATankGameMode() {
	DefaultPawnClass = ATankCharacter::StaticClass();
	PlayerControllerClass = APlayerTankController::StaticClass();
}

void ATankGameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}
