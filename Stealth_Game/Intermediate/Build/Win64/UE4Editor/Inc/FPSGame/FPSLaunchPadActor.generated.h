// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPSLaunchPadActor_generated_h
#error "FPSLaunchPadActor.generated.h already included, missing '#pragma once' in FPSLaunchPadActor.h"
#endif
#define FPSGAME_FPSLaunchPadActor_generated_h

#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSLaunchPadActor(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSLaunchPadActor(); \
public: \
	DECLARE_CLASS(AFPSLaunchPadActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSLaunchPadActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSLaunchPadActor(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSLaunchPadActor(); \
public: \
	DECLARE_CLASS(AFPSLaunchPadActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSLaunchPadActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSLaunchPadActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSLaunchPadActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSLaunchPadActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSLaunchPadActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSLaunchPadActor(AFPSLaunchPadActor&&); \
	NO_API AFPSLaunchPadActor(const AFPSLaunchPadActor&); \
public:


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSLaunchPadActor(AFPSLaunchPadActor&&); \
	NO_API AFPSLaunchPadActor(const AFPSLaunchPadActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSLaunchPadActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSLaunchPadActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSLaunchPadActor)


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollisionComp() { return STRUCT_OFFSET(AFPSLaunchPadActor, BoxCollisionComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSLaunchPadActor, MeshComp); }


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_12_PROLOG
#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_RPC_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_INCLASS \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Game_Source_FPSGame_Public_FPSLaunchPadActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
