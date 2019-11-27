// Fill out your copyright notice in the Description page of Project Settings.


#include "AITankController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

AAITankController::AAITankController()
{
	
}

void AAITankController::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);
}

void AAITankController::OnUnPossess()
{
	Super::OnUnPossess();
}