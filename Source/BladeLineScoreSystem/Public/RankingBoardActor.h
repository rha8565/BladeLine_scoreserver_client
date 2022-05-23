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
	��ŷ������ �����մϴ� ���� �ʱ⿡ �����ϰ� ���ϵ����͸� �����ν��Ͻ��� �ѱ�ϴ�.
	�ν��Ͻ��� �ѱ� ���� �����ʹ� �ٸ� �ẹ�� �Լ��� ��ſ� ����մϴ�.
	*/
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Connect rank server"))
	void ConnectRankingServer(/*ARankingBoardActor* SelfActor,/* bool& Success,*/ UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);

	// �÷��̾ ��ŷ�� ������� üũ�մϴ�.
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Player ranking check"))
	void PlayerRankCheck(ARankingBoardActor* SelfActor, FString score, UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);


	// �����κ��� ��ŷ �����͸� �Ľ��մϴ�.
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Get Ranking Data"))
	void GetRankingData(/*ARankingBoardActor* SelfActor,*//* bool& Success,*/ UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);


	// �÷��̾ ���ο� ��Ŀ�� ����մϴ�.
	UFUNCTION(Category = BladeLineRankSystem, meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"), BlueprintCallable, meta = (DisplayName = "Update Add New Ranker"))
	void UpdateNewRanker(/*ARankingBoardActor* SelfActor,*/ FString name, FString score, UObject* WorldContextObject, struct FLatentActionInfo LatentInfo);	

	// ���μ��� ���ŷ�� ���� ���� �������� �����带 ����ϴ�.
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

	// ���ù��� �۵����� �ʽ��ϴ�.
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

