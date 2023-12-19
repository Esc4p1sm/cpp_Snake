// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCameraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_SNAKE_PlayerCameraPawn_generated_h
#error "PlayerCameraPawn.generated.h already included, missing '#pragma once' in PlayerCameraPawn.h"
#endif
#define CPP_SNAKE_PlayerCameraPawn_generated_h

#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_SPARSE_DATA
#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalInput); \
	DECLARE_FUNCTION(execHandlePlayerVerticalInput);


#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraPawn(); \
	friend struct Z_Construct_UClass_APlayerCameraPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp_Snake"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraPawn)


#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraPawn(APlayerCameraPawn&&); \
	NO_API APlayerCameraPawn(const APlayerCameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCameraPawn) \
	NO_API virtual ~APlayerCameraPawn();


#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_12_PROLOG
#define FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_SPARSE_DATA \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_SNAKE_API UClass* StaticClass<class APlayerCameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
