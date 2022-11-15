// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PlayAttachedMetasound.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API UPlayAttachedMetasound : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPlayAttachedMetasound();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
