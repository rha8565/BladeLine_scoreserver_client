// Fill out your copyright notice in the Description page of Project Settings.

#include "RankingBoardActor.h"
#include "HAL/RunnableThread.h"
#include "LatentDataTunnel.h"
#include "ThreadTcpConnect.h"
#include "UpdateRankingAction.h"
#include "ThreadUpdateRanking.h"
#include "LatentRankCheck.h"
#include "ThreadRankCheck.h"
#include "LatentGetRanking.h"
#include "ThreadGetRankingData.h"
#include "LatentActions.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "IPAddress.h"
#include "TimerManager.h"
#include "Misc/MessageDialog.h"
#include "GenericPlatform/GenericPlatformMisc.h"

// Sets default values
ARankingBoardActor::ARankingBoardActor(){
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //Tick 끔
}


// 랭크 시스템에 접속
void ARankingBoardActor::ConnectRankingServer(/*ARankingBoardActor* SelfActor,*//* bool& Success, */UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
	stopAtent = false;
	connectSocketSuccess = false;
	CurrentThread = nullptr;
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject)){
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<LatentDataTunnel>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new LatentDataTunnel(this, LatentInfo));		
	}//end of If

	//Success = connectSocketSuccess;
	if (connectSocketSuccess) {
		UE_LOG(LogTemp, Log, TEXT("ConnectRankingServer_Function Success!"));
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("ConnectRankingServer_Function Failed..!"));
	}
}

void ARankingBoardActor::CreateServerConnectThread() {
	if (!CurrentThread && FPlatformProcess::SupportsMultithreading()){
		TTcpConnecter = new ThreadTcpConnect(this);
		CurrentThread = FRunnableThread::Create(TTcpConnecter, TEXT("CreateServerConnectThread"));
	}
}


//플레이어의 랭크를 체크
void ARankingBoardActor::PlayerRankCheck(ARankingBoardActor* SelfActor, FString score, UObject* WorldContextObject,  FLatentActionInfo LatentInfo) {
	stopAtent = false;
	inRank = false;
	connectSocketSuccess = false;
	CurrentThread = nullptr;
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<LatentRankCheck>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new LatentRankCheck(SelfActor, score, LatentInfo));
		}
	}
}

void ARankingBoardActor::CreateRankCheckThread(FString score) {
	if (!CurrentThread && FPlatformProcess::SupportsMultithreading()){
		TRankChecker = new ThreadRankCheck(this, score);
		CurrentThread = FRunnableThread::Create(TRankChecker, TEXT("CreateRankCheckThread"));
	}
}


void ARankingBoardActor::CreateRankCheckHandler(){
	FTimerDelegate RecvDelegate;
	RecvDelegate.BindUFunction(this, FName("RankCheckRecver"));
	GetWorldTimerManager().SetTimer(RankCheckHandler, RecvDelegate, 0.5f, true);
	FTimerDelegate ResDelegate;
	ResDelegate.BindUFunction(this, FName("RecverNotRespond"));
	GetWorldTimerManager().SetTimer(NotResRecvHandler, ResDelegate, 10, false);
}

void ARankingBoardActor::RankCheckRecver(){
	TArray<uint8> inData;
	FString inDataString = "NO DATA";
	UE_LOG(LogTemp, Warning, TEXT("RecvCall"));
	uint32 dataSize = 0;
	while (Socket->HasPendingData(dataSize)) {
		int32 byteCount = 0;
		inData.Init(0, dataSize);
		Socket->Recv(inData.GetData(), dataSize, byteCount);

	}

	if (inData.Num() > 0) {
		inData.Add(0);
		FString RecvData = *FString(ANSI_TO_TCHAR(reinterpret_cast<const char*>(inData.GetData())));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *RecvData);
		if (RecvData.Equals(FString("Ranker"))) {
			UE_LOG(LogTemp, Warning, TEXT("You in Ranker"));
			GetWorld()->GetTimerManager().ClearTimer(NotResRecvHandler);
			GetWorld()->GetTimerManager().ClearTimer(RankCheckHandler);
			inRank = true;
			stopAtent = true;
		}else if(RecvData.Equals(FString("NotRanker"))){
			UE_LOG(LogTemp, Warning, TEXT("You Not Ranker"));
			GetWorld()->GetTimerManager().ClearTimer(NotResRecvHandler);
			GetWorld()->GetTimerManager().ClearTimer(RankCheckHandler);
			inRank = false;
			stopAtent = true;
		}
	}
}

// 랭크 데이터를 가져옵니다.
void ARankingBoardActor::GetRankingData(/*ARankingBoardActor* SelfActor,*/ /*bool& Success,*/ UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
	stopAtent = false;
	connectSocketSuccess = false;
	CurrentThread = nullptr;

	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<LatentGetRanking>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL){
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new LatentGetRanking(this, LatentInfo));


		}
	}
}

void ARankingBoardActor::CreateGetRankingThread() {
	if (!CurrentThread && FPlatformProcess::SupportsMultithreading()){
		TRankingGetter = new ThreadGetRankingData(this);
		CurrentThread = FRunnableThread::Create(TRankingGetter, TEXT("ThreadGetRankingData"));
	}
}

// 새로운 랭커를 업데이트합니다. 
void ARankingBoardActor::UpdateNewRanker(/*ARankingBoardActor* SelfActor,*/ FString name, FString score, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
	stopAtent = false;
	connectSocketSuccess = false;
	UpdateRankThread = nullptr;
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<UpdateRankingAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new UpdateRankingAction(this, name, score, LatentInfo));
		}
	}
}

void ARankingBoardActor::CreateUpdateRankingThread(FString name, FString score){
	UE_LOG(LogTemp, Warning, TEXT("CreateUpdateRankingThread"));
	if (!UpdateRankThread && FPlatformProcess::SupportsMultithreading()){
		TRankingUpdater = new ThreadUpdateRanking(this, name, score);
		UpdateRankThread = FRunnableThread::Create(TRankingUpdater, TEXT("CreateUpdateRankingThread"));
	}
}


void ARankingBoardActor::GetRankingRecver() {
	TArray<uint8> inData;
	FString inDataString = "NO DATA";
	uint32 dataSize = 0;
	//TArray<FString> RankerArrTemp;

	while (Socket->HasPendingData(dataSize)) {
		int32 byteCount = 0;
		inData.Init(0, dataSize);
		Socket->Recv(inData.GetData(), dataSize, byteCount);

	}

	if (inData.Num() > 0) {
		inData.Add(0);
		FString RecvData = *FString(ANSI_TO_TCHAR(reinterpret_cast<const char*>(inData.GetData())));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *RecvData);
		/*if (RecvData.Equals(FString("RankEof"))) {
			UE_LOG(LogTemp, Warning, TEXT("RankEof!!!"));
			RankerInfoArr = RankerArrTemp;
			GetWorld()->GetTimerManager().ClearTimer(GetRankingHandler);
			GetWorld()->GetTimerManager().ClearTimer(RankCheckHandler);
			connectSocketSuccess = true;
			stopAtent = true;
		}*/
		RankerInfoArr = RecvData;
		GetWorld()->GetTimerManager().ClearTimer(GetRankingHandler);
		GetWorld()->GetTimerManager().ClearTimer(RankCheckHandler);
		UE_LOG(LogTemp, Log, TEXT("connectSocketSuccess is Suc!"));
	}
		connectSocketSuccess = true;
		stopAtent = true;
		
}



void ARankingBoardActor::CreateGetRankingHandler() {
	FTimerDelegate RecvDelegate;
	RecvDelegate.BindUFunction(this, FName("GetRankingRecver"));
	GetWorldTimerManager().SetTimer(GetRankingHandler, RecvDelegate, 1.0f, true);
	FTimerDelegate ResDelegate;
	ResDelegate.BindUFunction(this, FName("RecverNotRespond"));
	GetWorldTimerManager().SetTimer(NotResRecvHandler, ResDelegate, 20, false);
}


void ARankingBoardActor::RecverNotRespond(){
	UE_LOG(LogTemp, Warning, TEXT("NotRespond"));
	GetWorld()->GetTimerManager().ClearTimer(GetRankingHandler);
	GetWorld()->GetTimerManager().ClearTimer(RankCheckHandler);
	GetWorld()->GetTimerManager().ClearTimer(NotResRecvHandler);

	connectSocketSuccess = false;
	stopAtent = true;
}

