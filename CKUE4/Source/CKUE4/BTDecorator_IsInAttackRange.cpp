// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsInAttackRange.h"
#include "AITankController.h"
#include "TankCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTDecorator_IsInAttackRange::UBTDecorator_IsInAttackRange() {
	NodeName = TEXT("CanAttack");
}


bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if(nullptr == ControllingPawn) return false;

	auto Target = Cast<ATankCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAITankController::TargetKey));
	if (nullptr == Target) return false;

	bResult = (Target->GetDistanceTo(ControllingPawn) <= 2000.0f);
	return bResult;
}
