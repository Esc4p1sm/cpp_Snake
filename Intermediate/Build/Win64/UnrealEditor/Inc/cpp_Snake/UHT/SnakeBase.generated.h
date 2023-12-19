// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASnakeElementBase;
#ifdef CPP_SNAKE_SnakeBase_generated_h
#error "SnakeBase.generated.h already included, missing '#pragma once' in SnakeBase.h"
#endif
#define CPP_SNAKE_SnakeBase_generated_h

#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_SPARSE_DATA
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap);


#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp_Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeBase) \
	NO_API virtual ~ASnakeBase();


#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_22_PROLOG
#define FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_SPARSE_DATA \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_SNAKE_API UClass* StaticClass<class ASnakeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> struct TIsUEnumClass<EMovementDirection> { enum { Value = true }; };
template<> CPP_SNAKE_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
