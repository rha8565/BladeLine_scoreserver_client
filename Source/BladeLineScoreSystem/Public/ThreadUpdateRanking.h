// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HAL/Runnable.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "IPAddress.h"
#include "RankingBoardActor.h"

/**
 * 
 */

class BLADELINESCORESYSTEM_API ThreadUpdateRanking : public FRunnable
{
public:
	ThreadUpdateRanking(ARankingBoardActor* OwnerActor, FString name, FString score);

	ARankingBoardActor* OwnerActorTemp;
	FString newRankerName;
	FString newRankerScore;

	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;
};
