// Fill out your copyright notice in the Description page of Project Settings.


#include "NpcAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "Navigation/CrowdFollowingComponent.h"

ANpcAIController::ANpcAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	if (UCrowdFollowingComponent* CrowdComp = Cast<UCrowdFollowingComponent>(GetComponentByClass(UCrowdFollowingComponent::StaticClass())))
	{
		CrowdComp->SuspendCrowdSteering(false);//true����������� ����ʹ��������ʧЧ
	}
}

void ANpcAIController::RunNpcBehaviorTree()
{
	RunBehaviorTree(NpcBehaviorTree);
 }
