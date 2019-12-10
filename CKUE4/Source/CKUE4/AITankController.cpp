// Fill out your copyright notice in the Description page of Project Settings.


#include "AITankController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

const FName AAITankController::HomePosKey(TEXT("HomePos"));
const FName AAITankController::PatrolPosKey(TEXT("PatrolPos"));
const FName AAITankController::TargetKey(TEXT("Target"));
const FName AAITankController::HPValueKey(TEXT("HPValue"));

AAITankController::AAITankController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("BlackboardData'/Game/AI/BB_ABCharacter.BB_ABCharacter'"));

	if (BBObject.Succeeded()) {
		BBAsset = BBObject.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("BehaviorTree'/Game/AI/BT_ABCharacter.BT_ABCharacter'"));

	if (BTObject.Succeeded()) {
		BTAsset = BTObject.Object;
	}

}

void AAITankController::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);
	if (UseBlackboard(BBAsset, Blackboard)) {
		Blackboard->SetValueAsVector(HomePosKey, InPawn->GetActorLocation());
		if (!RunBehaviorTree(BTAsset)) {

		}
	}
}

void AAITankController::OnUnPossess()
{
	Super::OnUnPossess();
}
