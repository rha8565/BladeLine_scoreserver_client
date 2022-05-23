// Fill out your copyright notice in the Description page of Project Settings.

#include "ThreadTcpConnect.h"

ThreadTcpConnect::ThreadTcpConnect(ARankingBoardActor* OwnerActor)
{
	OwnerActorTemp = OwnerActor;
}

uint32 ThreadTcpConnect::Run()
{
	//OwnerActorTemp->Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	OwnerActorTemp->SetSocket(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false));

	/* Rankserver_IP : 3,128,73,110 */
	FString address = TEXT("3,128,73,110");

	/* RankserverPort = 25000 */
	int32 port = 25000; 
	FIPv4Address ip = FIPv4Address(3, 128, 73, 110);

	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPlatformPort(port);

	/* Try Connected */
	bool connected = OwnerActorTemp->GetSocket()->Connect(*addr);

	/* Connection Success */
	if (connected) {
		UE_LOG(LogTemp, Warning, TEXT("Rankserver Connection Success!!!"));
		OwnerActorTemp->SetConnectSuccess(connected);
		OwnerActorTemp->SetStopAtent(true);
		return 0;
	}
	/* Catch Connection Fail */
	else {
		UE_LOG(LogTemp, Warning, TEXT("AIXServer connection failed!"));
		OwnerActorTemp->SetConnectSuccess(connected);
		OwnerActorTemp->SetStopAtent(true);
		return 0;
	}

	// Return success
	return 0;
}


void ThreadTcpConnect::Exit()
{
	// Here's where we can do any cleanup we want to 
}


void ThreadTcpConnect::Stop()
{
	// Force our thread to stop early
}