// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "RankingBoardActor.generated.h"

UCLASS()
class BLADELINESCORESYSTEM_API ARankingBoardActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARankingBoardActor();

/*Setter*/
public:
	void SetConnectSuccess(const bool p_connectSocketSuccess) { this->connectSocketSuccess = p_connectSocketSuccess; }
	void SetStopAtent(const bool p_StopAtent) { this->stopAtent = p_StopAtent; }
	void SetSocket(FSocket* p_Socket) { this->Socket = p_Socket; }

/*Getter*/
public: 	
	UFUNCTION(BlueprintCallable,Category = BladeLineRankSystem)
	bool GetConnectSuccess() const { return connectSocketSuccess;}

	UFUNCTION(BlueprintCallable, Category = BladeLineRankSystem)
	FString GetRangkerInfo() const { return RankerInfoArr; }

	bool GetStopAtent() const { return stopAtent; }
	FSocket* GetSocket() const  {return  Socket;}
 public:
	/*
	function
	랭킹서버에 접속합니다 게임 초기에 접속하고 소켓데이터를 게임인스턴스로 넘깁니다.
	인스턴스로 넘긴 소켓 데이터는 다른 잠복성 함수의 통신에 사용합니다.
	*/
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Connect rank server"))
	void ConnectRankingServer(/*ARankingBoardActor* SelfActor,/* bool& Success,*/ UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);

	// 플레이어가 랭킹에 들었는지 체크합니다.
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Player ranking check"))
	void PlayerRankCheck(ARankingBoardActor* SelfActor, FString score, UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);


	// 서버로부터 랭킹 데이터를 파싱합니다.
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Get Ranking Data"))
	void GetRankingData(/*ARankingBoardActor* SelfActor,*//* bool& Success,*/ UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);


	// 플레이어를 새로운 랭커로 등록합니다.
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Update Add New Ranker"))
	void UpdateNewRanker(/*ARankingBoardActor* SelfActor,*/ FString name, FString score, UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);	

	// 프로세스 블로킹을 막기 위해 서버접속 쓰레드를 만듭니다.
	UFUNCTION()
	void CreateServerConnectThread();

	UFUNCTION()
	void CreateGetRankingThread();

	UFUNCTION()
	void CreateGetRankingHandler();

	UFUNCTION()
	void CreateRankCheckThread(FString Score);

	UFUNCTION()
	void CreateRankCheckHandler();

	UFUNCTION()
	void CreateUpdateRankingThread(FString name, FString Score);
private:
	UFUNCTION()
	void RankCheckRecver();	

	UFUNCTION()
	void GetRankingRecver();

	// 리시버가 작동하지 않습니다.
	UFUNCTION()
	void RecverNotRespond();

private:
	bool connectSocketSuccess = false;

	FString RankerInfoArr;

	bool inRank = false;

	bool stopAtent = false;

	struct FTimerHandle RankCheckHandler;
	struct FTimerHandle GetRankingHandler;
	struct FTimerHandle NotResRecvHandler;

	// define val
	class FSocket* Socket;
	class FSocket* RecvSocket;

	class ThreadTcpConnect* TTcpConnecter = nullptr;
	class ThreadUpdateRanking* TRankingUpdater = nullptr;
	class ThreadGetRankingData* TRankingGetter = nullptr;
	class ThreadRankCheck* TRankChecker = nullptr;
	FRunnableThread* CurrentThread = nullptr;
	FRunnableThread* UpdateRankThread = nullptr;
};

