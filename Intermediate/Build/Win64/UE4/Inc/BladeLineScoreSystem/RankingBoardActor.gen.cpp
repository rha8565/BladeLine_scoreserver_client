// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BladeLineScoreSystem/Public/RankingBoardActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankingBoardActor() {}
// Cross Module References
	BLADELINESCORESYSTEM_API UClass* Z_Construct_UClass_ARankingBoardActor_NoRegister();
	BLADELINESCORESYSTEM_API UClass* Z_Construct_UClass_ARankingBoardActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BladeLineScoreSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARankingBoardActor::execRecverNotRespond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecverNotRespond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execGetRankingRecver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRankingRecver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execRankCheckRecver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankCheckRecver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execCreateUpdateRankingThread)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateUpdateRankingThread(Z_Param_name,Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execCreateRankCheckHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateRankCheckHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execCreateRankCheckThread)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateRankCheckThread(Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execCreateGetRankingHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGetRankingHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execCreateGetRankingThread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGetRankingThread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execCreateServerConnectThread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateServerConnectThread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execUpdateNewRanker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_score);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNewRanker(Z_Param_name,Z_Param_score,Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execGetRankingData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRankingData(Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execPlayerRankCheck)
	{
		P_GET_OBJECT(ARankingBoardActor,Z_Param_SelfActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_score);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerRankCheck(Z_Param_SelfActor,Z_Param_score,Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execConnectRankingServer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectRankingServer(Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execGetRangkerInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRangkerInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARankingBoardActor::execGetConnectSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetConnectSuccess();
		P_NATIVE_END;
	}
	void ARankingBoardActor::StaticRegisterNativesARankingBoardActor()
	{
		UClass* Class = ARankingBoardActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectRankingServer", &ARankingBoardActor::execConnectRankingServer },
			{ "CreateGetRankingHandler", &ARankingBoardActor::execCreateGetRankingHandler },
			{ "CreateGetRankingThread", &ARankingBoardActor::execCreateGetRankingThread },
			{ "CreateRankCheckHandler", &ARankingBoardActor::execCreateRankCheckHandler },
			{ "CreateRankCheckThread", &ARankingBoardActor::execCreateRankCheckThread },
			{ "CreateServerConnectThread", &ARankingBoardActor::execCreateServerConnectThread },
			{ "CreateUpdateRankingThread", &ARankingBoardActor::execCreateUpdateRankingThread },
			{ "GetConnectSuccess", &ARankingBoardActor::execGetConnectSuccess },
			{ "GetRangkerInfo", &ARankingBoardActor::execGetRangkerInfo },
			{ "GetRankingData", &ARankingBoardActor::execGetRankingData },
			{ "GetRankingRecver", &ARankingBoardActor::execGetRankingRecver },
			{ "PlayerRankCheck", &ARankingBoardActor::execPlayerRankCheck },
			{ "RankCheckRecver", &ARankingBoardActor::execRankCheckRecver },
			{ "RecverNotRespond", &ARankingBoardActor::execRecverNotRespond },
			{ "UpdateNewRanker", &ARankingBoardActor::execUpdateNewRanker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics
	{
		struct RankingBoardActor_eventConnectRankingServer_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventConnectRankingServer_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventConnectRankingServer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "BladeLineRankSystem" },
		{ "Comment", "/*ARankingBoardActor* SelfActor,/* bool& Success,*/" },
		{ "DisplayName", "Connect rank server" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
		{ "ToolTip", "ARankingBoardActor* SelfActor, bool& Success," },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "ConnectRankingServer", nullptr, nullptr, sizeof(RankingBoardActor_eventConnectRankingServer_Parms), Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "CreateGetRankingHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "CreateGetRankingThread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "CreateRankCheckHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics
	{
		struct RankingBoardActor_eventCreateRankCheckThread_Parms
		{
			FString Score;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventCreateRankCheckThread_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::NewProp_Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "CreateRankCheckThread", nullptr, nullptr, sizeof(RankingBoardActor_eventCreateRankCheckThread_Parms), Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???\xce\xbc??? ????\xc5\xb7?? ???? ???? ???????? ?????\xe5\xb8\xa6 ?????\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
		{ "ToolTip", "???\xce\xbc??? ????\xc5\xb7?? ???? ???? ???????? ?????\xe5\xb8\xa6 ?????\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "CreateServerConnectThread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics
	{
		struct RankingBoardActor_eventCreateUpdateRankingThread_Parms
		{
			FString name;
			FString Score;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventCreateUpdateRankingThread_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventCreateUpdateRankingThread_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "CreateUpdateRankingThread", nullptr, nullptr, sizeof(RankingBoardActor_eventCreateUpdateRankingThread_Parms), Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics
	{
		struct RankingBoardActor_eventGetConnectSuccess_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RankingBoardActor_eventGetConnectSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RankingBoardActor_eventGetConnectSuccess_Parms), &Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "BladeLineRankSystem" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "GetConnectSuccess", nullptr, nullptr, sizeof(RankingBoardActor_eventGetConnectSuccess_Parms), Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics
	{
		struct RankingBoardActor_eventGetRangkerInfo_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventGetRangkerInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "BladeLineRankSystem" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "GetRangkerInfo", nullptr, nullptr, sizeof(RankingBoardActor_eventGetRangkerInfo_Parms), Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics
	{
		struct RankingBoardActor_eventGetRankingData_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventGetRankingData_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventGetRankingData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BladeLineRankSystem" },
		{ "Comment", "/* bool& Success,*/" },
		{ "DisplayName", "Get Ranking Data" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
		{ "ToolTip", "bool& Success," },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "GetRankingData", nullptr, nullptr, sizeof(RankingBoardActor_eventGetRankingData_Parms), Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_GetRankingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_GetRankingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "GetRankingRecver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics
	{
		struct RankingBoardActor_eventPlayerRankCheck_Parms
		{
			ARankingBoardActor* SelfActor;
			FString score;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventPlayerRankCheck_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventPlayerRankCheck_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventPlayerRankCheck_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventPlayerRankCheck_Parms, SelfActor), Z_Construct_UClass_ARankingBoardActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::NewProp_SelfActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "BladeLineRankSystem" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ??\xc5\xb7?? ???????? \xc3\xbc\xc5\xa9?\xd5\xb4\xcf\xb4?.\n" },
		{ "DisplayName", "Player ranking check" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ??\xc5\xb7?? ???????? \xc3\xbc\xc5\xa9?\xd5\xb4\xcf\xb4?." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "PlayerRankCheck", nullptr, nullptr, sizeof(RankingBoardActor_eventPlayerRankCheck_Parms), Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "RankCheckRecver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???\xc3\xb9??? ?\xdb\xb5????? ?\xca\xbd??\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
		{ "ToolTip", "???\xc3\xb9??? ?\xdb\xb5????? ?\xca\xbd??\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "RecverNotRespond", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics
	{
		struct RankingBoardActor_eventUpdateNewRanker_Parms
		{
			FString name;
			FString score;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventUpdateNewRanker_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventUpdateNewRanker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventUpdateNewRanker_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RankingBoardActor_eventUpdateNewRanker_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::Function_MetaDataParams[] = {
		{ "Category", "BladeLineRankSystem" },
		{ "Comment", "/*ARankingBoardActor* SelfActor,*/" },
		{ "DisplayName", "Update Add New Ranker" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
		{ "ToolTip", "ARankingBoardActor* SelfActor," },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARankingBoardActor, nullptr, "UpdateNewRanker", nullptr, nullptr, sizeof(RankingBoardActor_eventUpdateNewRanker_Parms), Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARankingBoardActor_NoRegister()
	{
		return ARankingBoardActor::StaticClass();
	}
	struct Z_Construct_UClass_ARankingBoardActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARankingBoardActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BladeLineScoreSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARankingBoardActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARankingBoardActor_ConnectRankingServer, "ConnectRankingServer" }, // 776893476
		{ &Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingHandler, "CreateGetRankingHandler" }, // 2248392462
		{ &Z_Construct_UFunction_ARankingBoardActor_CreateGetRankingThread, "CreateGetRankingThread" }, // 503955889
		{ &Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckHandler, "CreateRankCheckHandler" }, // 3573319165
		{ &Z_Construct_UFunction_ARankingBoardActor_CreateRankCheckThread, "CreateRankCheckThread" }, // 4001539754
		{ &Z_Construct_UFunction_ARankingBoardActor_CreateServerConnectThread, "CreateServerConnectThread" }, // 3274274536
		{ &Z_Construct_UFunction_ARankingBoardActor_CreateUpdateRankingThread, "CreateUpdateRankingThread" }, // 1145064764
		{ &Z_Construct_UFunction_ARankingBoardActor_GetConnectSuccess, "GetConnectSuccess" }, // 3748360496
		{ &Z_Construct_UFunction_ARankingBoardActor_GetRangkerInfo, "GetRangkerInfo" }, // 2423629361
		{ &Z_Construct_UFunction_ARankingBoardActor_GetRankingData, "GetRankingData" }, // 570199491
		{ &Z_Construct_UFunction_ARankingBoardActor_GetRankingRecver, "GetRankingRecver" }, // 1641490136
		{ &Z_Construct_UFunction_ARankingBoardActor_PlayerRankCheck, "PlayerRankCheck" }, // 2535480640
		{ &Z_Construct_UFunction_ARankingBoardActor_RankCheckRecver, "RankCheckRecver" }, // 290408395
		{ &Z_Construct_UFunction_ARankingBoardActor_RecverNotRespond, "RecverNotRespond" }, // 2276907097
		{ &Z_Construct_UFunction_ARankingBoardActor_UpdateNewRanker, "UpdateNewRanker" }, // 3484235732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARankingBoardActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RankingBoardActor.h" },
		{ "ModuleRelativePath", "Public/RankingBoardActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARankingBoardActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARankingBoardActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARankingBoardActor_Statics::ClassParams = {
		&ARankingBoardActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARankingBoardActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARankingBoardActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARankingBoardActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARankingBoardActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARankingBoardActor, 4236768552);
	template<> BLADELINESCORESYSTEM_API UClass* StaticClass<ARankingBoardActor>()
	{
		return ARankingBoardActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARankingBoardActor(Z_Construct_UClass_ARankingBoardActor, &ARankingBoardActor::StaticClass, TEXT("/Script/BladeLineScoreSystem"), TEXT("ARankingBoardActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARankingBoardActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
