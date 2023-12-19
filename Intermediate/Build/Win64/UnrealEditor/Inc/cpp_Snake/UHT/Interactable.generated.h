// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_SNAKE_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define CPP_SNAKE_Interactable_generated_h

#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_SPARSE_DATA
#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_ACCESSORS
#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CPP_SNAKE_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CPP_SNAKE_API UInteractable(UInteractable&&); \
	CPP_SNAKE_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CPP_SNAKE_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	CPP_SNAKE_API virtual ~UInteractable();


#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/cpp_Snake"), CPP_SNAKE_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_GENERATED_UINTERFACE_BODY() \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_11_PROLOG
#define FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_SPARSE_DATA \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_ACCESSORS \
	FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_SNAKE_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
