// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CKUE4_API ATankGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	
public:
	ATankGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
};
