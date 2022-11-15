// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayAttachedMetasound.h"
#include "AIController.h"
#include "ShooterCharacter.h"

UPlayAttachedMetasound::UPlayAttachedMetasound()
{
    NodeName = "Play Metasound";
}

EBTNodeResult::Type UPlayAttachedMetasound::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if (OwnerComp.GetAIOwner() == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    AShooterCharacter* Character = Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());
    if (Character == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    Character->PlayMetasound();

    return EBTNodeResult::Succeeded;
}