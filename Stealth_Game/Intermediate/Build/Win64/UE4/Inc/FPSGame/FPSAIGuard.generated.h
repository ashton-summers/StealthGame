// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FPSAIGuard_generated_h
#error "FPSAIGuard.generated.h already included, missing '#pragma once' in FPSAIGuard.h"
#endif
#define FPSGAME_FPSAIGuard_generated_h

#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPatrolPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=this->GetRandomPatrolPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToPatrolPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GoToPatrolPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPatrolPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=this->GetRandomPatrolPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToPatrolPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GoToPatrolPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_EVENT_PARMS \
	struct FPSAIGuard_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_CALLBACK_WRAPPERS
#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSAIGuard(); \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSAIGuard(); \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public:


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGuard)


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComponent() { return STRUCT_OFFSET(AFPSAIGuard, PawnSensingComponent); } \
	FORCEINLINE static uint32 __PPO__bShouldPatrol() { return STRUCT_OFFSET(AFPSAIGuard, bShouldPatrol); }


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_20_PROLOG \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_EVENT_PARMS


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_RPC_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_CALLBACK_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_INCLASS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_CALLBACK_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_INCLASS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
