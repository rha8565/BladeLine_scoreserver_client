// Fill out your copyright notice in the Description page of Project Settings.

#include "LatentDataTunnel.h"

LatentDataTunnel::LatentDataTunnel(ARankingBoardActor* OwnerActor, FLatentActionInfo& LatentInfo)
	: ExecutionFunction(LatentInfo.ExecutionFunction)
	, OutputLink(LatentInfo.Linkage)
	, CallbackTarget(LatentInfo.CallbackTarget)
{
	OwnerActorTemp = OwnerActor;
	OwnerActorTemp->CreateServerConnectThread();
}

void LatentDataTunnel::UpdateOperation(FLatentResponse & Response)
{
	Response.FinishAndTriggerIf(OwnerActorTemp->GetStopAtent(), ExecutionFunction, OutputLink, CallbackTarget);
}