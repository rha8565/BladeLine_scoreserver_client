// Fill out your copyright notice in the Description page of Project Settings.

#include "LatentRankCheck.h"

LatentRankCheck::LatentRankCheck(ARankingBoardActor * OwnerActor, FString score, FLatentActionInfo & LatentInfo)
	: ExecutionFunction(LatentInfo.ExecutionFunction)
	, OutputLink(LatentInfo.Linkage)
	, CallbackTarget(LatentInfo.CallbackTarget)
{
	OwnerActorTemp = OwnerActor;
	OwnerActorTemp->CreateRankCheckThread(score);
	OwnerActorTemp->CreateRankCheckHandler();
}

void LatentRankCheck::UpdateOperation(FLatentResponse & Response)
{
	Response.FinishAndTriggerIf(OwnerActorTemp->GetStopAtent(), ExecutionFunction, OutputLink, CallbackTarget);
}
