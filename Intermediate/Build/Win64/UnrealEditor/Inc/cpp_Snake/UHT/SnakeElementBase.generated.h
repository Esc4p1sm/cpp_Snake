// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeElementBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CPP_SNAKE_SnakeElementBase_generated_h
#error "SnakeElementBase.generated.h already included, missing '#pragma once' in SnakeElementBase.h"
#endif
#define CPP_SNAKE_SnakeElementBase_generated_h

#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_SPARSE_DATA
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleCollision); \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execSetFirstElementType);


#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_CALLBACK_WRAPPERS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp_Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeElementBase) \
	NO_API virtual ~ASnakeElementBase();


#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_14_PROLOG
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_SPARSE_DATA \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_CALLBACK_WRAPPERS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_SNAKE_API UClass* StaticClass<class ASnakeElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
