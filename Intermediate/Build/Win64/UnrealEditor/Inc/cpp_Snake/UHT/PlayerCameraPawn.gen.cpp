// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp_Snake/PlayerCameraPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPP_SNAKE_API UClass* Z_Construct_UClass_APlayerCameraPawn();
	CPP_SNAKE_API UClass* Z_Construct_UClass_APlayerCameraPawn_NoRegister();
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_cpp_Snake();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCameraPawn::execHandlePlayerHorizontalInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerHorizontalInput(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraPawn::execHandlePlayerVerticalInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerVerticalInput(Z_Param_value);
		P_NATIVE_END;
	}
	void APlayerCameraPawn::StaticRegisterNativesAPlayerCameraPawn()
	{
		UClass* Class = APlayerCameraPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerHorizontalInput", &APlayerCameraPawn::execHandlePlayerHorizontalInput },
			{ "HandlePlayerVerticalInput", &APlayerCameraPawn::execHandlePlayerVerticalInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics
	{
		struct PlayerCameraPawn_eventHandlePlayerHorizontalInput_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraPawn_eventHandlePlayerHorizontalInput_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraPawn, nullptr, "HandlePlayerHorizontalInput", nullptr, nullptr, Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::PlayerCameraPawn_eventHandlePlayerHorizontalInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::PlayerCameraPawn_eventHandlePlayerHorizontalInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics
	{
		struct PlayerCameraPawn_eventHandlePlayerVerticalInput_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraPawn_eventHandlePlayerVerticalInput_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraPawn, nullptr, "HandlePlayerVerticalInput", nullptr, nullptr, Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::PlayerCameraPawn_eventHandlePlayerVerticalInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::PlayerCameraPawn_eventHandlePlayerVerticalInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCameraPawn);
	UClass* Z_Construct_UClass_APlayerCameraPawn_NoRegister()
	{
		return APlayerCameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawnCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snakeActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_snakeActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snakeActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_snakeActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp_Snake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCameraPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerHorizontalInput, "HandlePlayerHorizontalInput" }, // 274679649
		{ &Z_Construct_UFunction_APlayerCameraPawn_HandlePlayerVerticalInput, "HandlePlayerVerticalInput" }, // 2880356701
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCameraPawn.h" },
		{ "ModuleRelativePath", "PlayerCameraPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_pawnCamera_MetaData[] = {
		{ "Category", "PlayerCameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_pawnCamera = { "pawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraPawn, pawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_pawnCamera_MetaData), Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_pawnCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActor_MetaData[] = {
		{ "Category", "PlayerCameraPawn" },
		{ "ModuleRelativePath", "PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActor = { "snakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraPawn, snakeActor), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActor_MetaData), Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActorClass_MetaData[] = {
		{ "Category", "PlayerCameraPawn" },
		{ "ModuleRelativePath", "PlayerCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActorClass = { "snakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraPawn, snakeActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActorClass_MetaData), Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActorClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_pawnCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraPawn_Statics::NewProp_snakeActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraPawn_Statics::ClassParams = {
		&APlayerCameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCameraPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerCameraPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerCameraPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraPawn.OuterSingleton, Z_Construct_UClass_APlayerCameraPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCameraPawn.OuterSingleton;
	}
	template<> CPP_SNAKE_API UClass* StaticClass<APlayerCameraPawn>()
	{
		return APlayerCameraPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraPawn);
	APlayerCameraPawn::~APlayerCameraPawn() {}
	struct Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraPawn, APlayerCameraPawn::StaticClass, TEXT("APlayerCameraPawn"), &Z_Registration_Info_UClass_APlayerCameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraPawn), 4083817046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_403475118(TEXT("/Script/cpp_Snake"),
		Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_PlayerCameraPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
