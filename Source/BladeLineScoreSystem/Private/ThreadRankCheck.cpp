// Fill out your copyright notice in the Description page of Project Settings.

#include "ThreadRankCheck.h"

ThreadRankCheck::ThreadRankCheck(ARankingBoardActor* OwnerActor, FString score)
{
	OwnerActorTemp = OwnerActor;
	playerScore = score;
}

uint32 ThreadRankCheck::Run()
{
	FString Commnand = TEXT("RankCheck " + playerScore);
	TCHAR* CommnandChar = Commnand.GetCharArray().GetData();
	int32 size = FCString::Strlen(CommnandChar);
	int32 sent = 0;

	// 명령어 전송 실패
	if (!OwnerActorTemp->GetSocket()->Send((uint8*)TCHAR_TO_UTF8(CommnandChar), size, sent)) {
		OwnerActorTemp->SetConnectSuccess(false);
		OwnerActorTemp->SetStopAtent(true);
		return 0;
	}
	UE_LOG(LogTemp, Log, TEXT("Thread_RangkCheck! Suc"));
	OwnerActorTemp->SetConnectSuccess(true);
	return 0;
}


void ThreadRankCheck::Exit()
{
	// Here's where we can do any cleanup we want to 
}


void ThreadRankCheck::Stop()
{
	// Force our thread to stop early
}
