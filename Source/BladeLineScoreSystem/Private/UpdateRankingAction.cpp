// Fill out your copyright notice in the Description page of Project Settings.

#include "UpdateRankingAction.h"

UpdateRankingAction::UpdateRankingAction(ARankingBoardActor* OwnerActor, FString name, FString score, FLatentActionInfo& LatentInfo)
	: ExecutionFunction(LatentInfo.ExecutionFunction)
	, OutputLink(LatentInfo.Linkage)
	, CallbackTarget(LatentInfo.CallbackTarget) 
{
	OwnerActorTemp = OwnerActor;
	OwnerActorTemp->CreateUpdateRankingThread(name, score);
}

void UpdateRankingAction::UpdateOperation(FLatentResponse & Response)
{
	Response.FinishAndTriggerIf(OwnerActorTemp->GetStopAtent(), ExecutionFunction, OutputLink, CallbackTarget);
}

