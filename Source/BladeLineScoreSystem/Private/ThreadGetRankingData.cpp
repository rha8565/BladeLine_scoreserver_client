// Fill out your copyright notice in the Description page of Project Settings.

#include "ThreadGetRankingData.h"

ThreadGetRankingData::ThreadGetRankingData(ARankingBoardActor* OwnerActor)
{
	OwnerActorTemp = OwnerActor;
}

uint32 ThreadGetRankingData::Run()
{
	FString Commnand = TEXT("RequestRanking");
	TCHAR* CommnandChar = Commnand.GetCharArray().GetData();
	int32 size = FCString::Strlen(CommnandChar);
	int32 sent = 0;

	if (!OwnerActorTemp->GetSocket()->Send((uint8*)TCHAR_TO_UTF8(CommnandChar), size, sent)) {
		OwnerActorTemp->SetConnectSuccess(false);
		OwnerActorTemp->SetStopAtent(true);
		return 0;
	}

	UE_LOG(LogTemp,Log,TEXT("ThreadGetRangkingData! Suc"));
	OwnerActorTemp->SetConnectSuccess(true);
	return 0;
}


void ThreadGetRankingData::Exit()
{
	// Here's where we can do any cleanup we want to 
}


void ThreadGetRankingData::Stop()
{
	// Force our thread to stop early
}