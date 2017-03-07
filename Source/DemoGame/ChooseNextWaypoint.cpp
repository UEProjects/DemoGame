// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoGame.h"
#include "ChooseNextWaypoint.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
	UKismetSystemLibrary::PrintString(this, "AI in C++");
	return EBTNodeResult::Succeeded;
}


