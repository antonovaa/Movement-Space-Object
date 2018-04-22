// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MYPROJECT_MyC_generated_h
#error "MyC.generated.h already included, missing '#pragma once' in MyC.h"
#endif
#define MYPROJECT_MyC_generated_h

#define MyProject_Source_MyProject_MyC_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execchangelocX) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_f0); \
		P_GET_TARRAY(float,Z_Param_m); \
		P_GET_TARRAY(FVector,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->changelocX(Z_Param_f0,Z_Param_m,Z_Param_f); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execchangelocX) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_f0); \
		P_GET_TARRAY(float,Z_Param_m); \
		P_GET_TARRAY(FVector,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->changelocX(Z_Param_f0,Z_Param_m,Z_Param_f); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyC(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyC(); \
public: \
	DECLARE_CLASS(AMyC, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyC_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyC(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyC(); \
public: \
	DECLARE_CLASS(AMyC, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyC_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyC(AMyC&&); \
	NO_API AMyC(const AMyC&); \
public:


#define MyProject_Source_MyProject_MyC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyC(AMyC&&); \
	NO_API AMyC(const AMyC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyC)


#define MyProject_Source_MyProject_MyC_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MyC_h_9_PROLOG
#define MyProject_Source_MyProject_MyC_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyC_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyC_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyC_h_12_INCLASS \
	MyProject_Source_MyProject_MyC_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyC_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyC_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
