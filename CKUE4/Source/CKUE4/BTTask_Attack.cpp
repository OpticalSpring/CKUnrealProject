// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Attack.h"
#include "AITankController.h"
#include "TankCharacter.h"

UBTTask_Attack::UBTTask_Attack()
{
	bNotifyTick = true;
	IsAttacking = false;
}

EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);
	UE_LOG(LogTemp, Log, TEXT("EnemyAttackReady"));

	auto ABCharacter = Cast<ATankCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (nullptr == ABCharacter) return EBTNodeResult::Failed;
	ABCharacter->Attack();
	UE_LOG(LogTemp, Log, TEXT("EnemyAttack"));

	IsAttacking = true;
	ABCharacter->OnAttackEnd.AddLambda([this]()->void {
		IsAttacking = false;
	});


	return EBTNodeResult::InProgress;
}

void UBTTask_Attack::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}
