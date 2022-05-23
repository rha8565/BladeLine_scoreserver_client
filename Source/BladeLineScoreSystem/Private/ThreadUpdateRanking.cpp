// Fill out your copyright notice in the Description page of Project Settings.

#include "ThreadUpdateRanking.h"

ThreadUpdateRanking::ThreadUpdateRanking(ARankingBoardActor* OwnerActor, FString name, FString score)
{
	OwnerActorTemp = OwnerActor;
	newRankerName = name;
	newRankerScore = score;
}

uint32 ThreadUpdateRanking::Run()
{
	FString Commnand = TEXT("NewRanker " + newRankerName + " " + newRankerScore);
	TCHAR* CommnandChar = Commnand.GetCharArray().GetData();
	int32 size = FCString::Strlen(CommnandChar);
	int32 sent = 0;

	UE_LOG(LogTemp, Warning, TEXT("Send start"));
	if (!OwnerActorTemp->GetSocket()->Send((uint8*)TCHAR_TO_UTF8(CommnandChar), size, sent)) {
		OwnerActorTemp->SetConnectSuccess(false);
		OwnerActorTemp->SetStopAtent(true);
		return 0;
	}
	UE_LOG(LogTemp, Log, TEXT("Thread_UpdateRank! Suc"));
	OwnerActorTemp->SetConnectSuccess(true);
	OwnerActorTemp->SetStopAtent(true);
	return 0;
}


void ThreadUpdateRanking::Exit()
{
	// Here's where we can do any cleanup we want to 
}


void ThreadUpdateRanking::Stop()
{
	// Force our thread to stop early
}