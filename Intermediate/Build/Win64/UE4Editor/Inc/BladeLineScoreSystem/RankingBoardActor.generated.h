// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
class ARankingBoardActor;
#ifdef BLADELINESCORESYSTEM_RankingBoardActor_generated_h
#error "RankingBoardActor.generated.h already included, missing '#pragma once' in RankingBoardActor.h"
#endif
#define BLADELINESCORESYSTEM_RankingBoardActor_generated_h

#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_SPARSE_DATA
#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecverNotRespond); \
	DECLARE_FUNCTION(execGetRankingRecver); \
	DECLARE_FUNCTION(execRankCheckRecver); \
	DECLARE_FUNCTION(execCreateUpdateRankingThread); \
	DECLARE_FUNCTION(execCreateRankCheckHandler); \
	DECLARE_FUNCTION(execCreateRankCheckThread); \
	DECLARE_FUNCTION(execCreateGetRankingHandler); \
	DECLARE_FUNCTION(execCreateGetRankingThread); \
	DECLARE_FUNCTION(execCreateServerConnectThread); \
	DECLARE_FUNCTION(execUpdateNewRanker); \
	DECLARE_FUNCTION(execGetRankingData); \
	DECLARE_FUNCTION(execPlayerRankCheck); \
	DECLARE_FUNCTION(execConnectRankingServer); \
	DECLARE_FUNCTION(execGetRangkerInfo); \
	DECLARE_FUNCTION(execGetConnectSuccess);


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecverNotRespond); \
	DECLARE_FUNCTION(execGetRankingRecver); \
	DECLARE_FUNCTION(execRankCheckRecver); \
	DECLARE_FUNCTION(execCreateUpdateRankingThread); \
	DECLARE_FUNCTION(execCreateRankCheckHandler); \
	DECLARE_FUNCTION(execCreateRankCheckThread); \
	DECLARE_FUNCTION(execCreateGetRankingHandler); \
	DECLARE_FUNCTION(execCreateGetRankingThread); \
	DECLARE_FUNCTION(execCreateServerConnectThread); \
	DECLARE_FUNCTION(execUpdateNewRanker); \
	DECLARE_FUNCTION(execGetRankingData); \
	DECLARE_FUNCTION(execPlayerRankCheck); \
	DECLARE_FUNCTION(execConnectRankingServer); \
	DECLARE_FUNCTION(execGetRangkerInfo); \
	DECLARE_FUNCTION(execGetConnectSuccess);


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARankingBoardActor(); \
	friend struct Z_Construct_UClass_ARankingBoardActor_Statics; \
public: \
	DECLARE_CLASS(ARankingBoardActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BladeLineScoreSystem"), NO_API) \
	DECLARE_SERIALIZER(ARankingBoardActor)


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARankingBoardActor(); \
	friend struct Z_Construct_UClass_ARankingBoardActor_Statics; \
public: \
	DECLARE_CLASS(ARankingBoardActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BladeLineScoreSystem"), NO_API) \
	DECLARE_SERIALIZER(ARankingBoardActor)


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARankingBoardActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARankingBoardActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARankingBoardActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARankingBoardActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARankingBoardActor(ARankingBoardActor&&); \
	NO_API ARankingBoardActor(const ARankingBoardActor&); \
public:


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARankingBoardActor(ARankingBoardActor&&); \
	NO_API ARankingBoardActor(const ARankingBoardActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARankingBoardActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARankingBoardActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARankingBoardActor)


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_PRIVATE_PROPERTY_OFFSET
#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_9_PROLOG
#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_PRIVATE_PROPERTY_OFFSET \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_SPARSE_DATA \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_RPC_WRAPPERS \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_INCLASS \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_PRIVATE_PROPERTY_OFFSET \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_SPARSE_DATA \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_INCLASS_NO_PURE_DECLS \
	BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLADELINESCORESYSTEM_API UClass* StaticClass<class ARankingBoardActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BladeLine_Plugins_BladeLineScoreSystem_Source_BladeLineScoreSystem_Public_RankingBoardActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
