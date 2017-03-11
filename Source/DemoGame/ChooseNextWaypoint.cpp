// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoGame.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ChooseNextWaypoint.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	UKismetSystemLibrary::PrintString(this, "AI in C++");
	return EBTNodeResult::Succeeded;
}


