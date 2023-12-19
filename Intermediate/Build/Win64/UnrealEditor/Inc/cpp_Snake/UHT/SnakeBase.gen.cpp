// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp_Snake/SnakeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeBase();
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	CPP_SNAKE_API UEnum* Z_Construct_UEnum_cpp_Snake_EMovementDirection();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_cpp_Snake();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementDirection;
	static UEnum* EMovementDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_cpp_Snake_EMovementDirection, (UObject*)Z_Construct_UPackage__Script_cpp_Snake(), TEXT("EMovementDirection"));
		}
		return Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton;
	}
	template<> CPP_SNAKE_API UEnum* StaticEnum<EMovementDirection>()
	{
		return EMovementDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::Enumerators[] = {
		{ "EMovementDirection::UP", (int64)EMovementDirection::UP },
		{ "EMovementDirection::DOWN", (int64)EMovementDirection::DOWN },
		{ "EMovementDirection::LEFT", (int64)EMovementDirection::LEFT },
		{ "EMovementDirection::RIGHT", (int64)EMovementDirection::RIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::Enum_MetaDataParams[] = {
		{ "DOWN.Name", "EMovementDirection::DOWN" },
		{ "LEFT.Name", "EMovementDirection::LEFT" },
		{ "ModuleRelativePath", "SnakeBase.h" },
		{ "RIGHT.Name", "EMovementDirection::RIGHT" },
		{ "UP.Name", "EMovementDirection::UP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_cpp_Snake,
		nullptr,
		"EMovementDirection",
		"EMovementDirection",
		Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_cpp_Snake_EMovementDirection()
	{
		if (!Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton, Z_Construct_UEnum_cpp_Snake_EMovementDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(ASnakeBase::execSnakeElementOverlap)
	{
		P_GET_OBJECT(ASnakeElementBase,Z_Param_overlappedBlock);
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnakeElementOverlap(Z_Param_overlappedBlock,Z_Param_other);
		P_NATIVE_END;
	}
	void ASnakeBase::StaticRegisterNativesASnakeBase()
	{
		UClass* Class = ASnakeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SnakeElementOverlap", &ASnakeBase::execSnakeElementOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics
	{
		struct SnakeBase_eventSnakeElementOverlap_Parms
		{
			ASnakeElementBase* overlappedBlock;
			AActor* other;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedBlock;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_overlappedBlock = { "overlappedBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeBase_eventSnakeElementOverlap_Parms, overlappedBlock), Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeBase_eventSnakeElementOverlap_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_overlappedBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBase, nullptr, "SnakeElementOverlap", nullptr, nullptr, Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::SnakeBase_eventSnakeElementOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::SnakeBase_eventSnakeElementOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeBase);
	UClass* Z_Construct_UClass_ASnakeBase_NoRegister()
	{
		return ASnakeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_elementSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_elementSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_snakeElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snakeElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_snakeElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastMoveDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastMoveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_lastMoveDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp_Snake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap, "SnakeElementOverlap" }, // 1121519764
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeBase.h" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBase, SnakeElementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData), Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_elementSize_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_elementSize = { "elementSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBase, elementSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_elementSize_MetaData), Z_Construct_UClass_ASnakeBase_Statics::NewProp_elementSize_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements_Inner = { "snakeElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements = { "snakeElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBase, snakeElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements_MetaData), Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBase, movementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_movementSpeed_MetaData), Z_Construct_UClass_ASnakeBase_Statics::NewProp_movementSpeed_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection = { "lastMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBase, lastMoveDirection), Z_Construct_UEnum_cpp_Snake_EMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection_MetaData), Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection_MetaData) }; // 4275923563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_elementSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_snakeElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_movementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_lastMoveDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeBase_Statics::ClassParams = {
		&ASnakeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASnakeBase()
	{
		if (!Z_Registration_Info_UClass_ASnakeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeBase.OuterSingleton, Z_Construct_UClass_ASnakeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakeBase.OuterSingleton;
	}
	template<> CPP_SNAKE_API UClass* StaticClass<ASnakeBase>()
	{
		return ASnakeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeBase);
	ASnakeBase::~ASnakeBase() {}
	struct Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics::EnumInfo[] = {
		{ EMovementDirection_StaticEnum, TEXT("EMovementDirection"), &Z_Registration_Info_UEnum_EMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4275923563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeBase, ASnakeBase::StaticClass, TEXT("ASnakeBase"), &Z_Registration_Info_UClass_ASnakeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeBase), 4118902625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_2591333265(TEXT("/Script/cpp_Snake"),
		Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
