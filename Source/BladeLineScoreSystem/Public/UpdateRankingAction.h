// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/LatentActionManager.h"
#include "LatentActions.h"
#include "CoreMinimal.h"
#include "RankingBoardActor.h"

class BLADELINESCORESYSTEM_API UpdateRankingAction : public FPendingLatentAction
{
public:
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;
	ARankingBoardActor* OwnerActorTemp;

public:
	UpdateRankingAction(ARankingBoardActor* OwnerActor, FString name, FString score, FLatentActionInfo& LatentInfo);
	virtual void UpdateOperation(FLatentResponse& Response) override;
};
