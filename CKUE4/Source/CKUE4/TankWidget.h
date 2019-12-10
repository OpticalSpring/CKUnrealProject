// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TankWidget.generated.h"

/**
 * 
 */
UCLASS()
class CKUE4_API UTankWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void BindCharacterStat(class UTankCharacter* NewCharacterStat);

private:
	TWeakObjectPtr<class UTankCharacter> CurrentCharacterStat;
};
