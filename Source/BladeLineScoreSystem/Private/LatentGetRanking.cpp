// Fill out your copyright notice in the Description page of Project Settings.

#include "LatentGetRanking.h"

LatentGetRanking::LatentGetRanking(ARankingBoardActor * OwnerActor, FLatentActionInfo & LatentInfo)
	: ExecutionFunction(LatentInfo.ExecutionFunction)
	, OutputLink(LatentInfo.Linkage)
	, CallbackTarget(LatentInfo.CallbackTarget)
{
	OwnerActorTemp = OwnerActor;
	OwnerActorTemp->CreateGetRankingThread();
	OwnerActorTemp->CreateGetRankingHandler();
}

void LatentGetRanking::UpdateOperation(FLatentResponse & Response)
{
	Response.FinishAndTriggerIf(OwnerActorTemp->GetStopAtent(), ExecutionFunction, OutputLink, CallbackTarget);
}
