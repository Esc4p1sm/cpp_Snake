// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp_Snake/SnakeElementBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeElementBase() {}
// Cross Module References
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeElementBase();
	CPP_SNAKE_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	CPP_SNAKE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_cpp_Snake();
// End Cross Module References
	DEFINE_FUNCTION(ASnakeElementBase::execToggleCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeElementBase::execHandleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeginOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeElementBase::execSetFirstElementType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFirstElementType_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASnakeElementBase_SetFirstElementType = FName(TEXT("SetFirstElementType"));
	void ASnakeElementBase::SetFirstElementType()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASnakeElementBase_SetFirstElementType),NULL);
	}
	void ASnakeElementBase::StaticRegisterNativesASnakeElementBase()
	{
		UClass* Class = ASnakeElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBeginOverlap", &ASnakeElementBase::execHandleBeginOverlap },
			{ "SetFirstElementType", &ASnakeElementBase::execSetFirstElementType },
			{ "ToggleCollision", &ASnakeElementBase::execToggleCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics
	{
		struct SnakeElementBase_eventHandleBeginOverlap_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_overlappedComponent_MetaData), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_overlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherComp_MetaData), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SnakeElementBase_eventHandleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnakeElementBase_eventHandleBeginOverlap_Parms), &Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_sweepResult_MetaData), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_sweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "HandleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::SnakeElementBase_eventHandleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::SnakeElementBase_eventHandleBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "SetFirstElementType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "ToggleCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_ToggleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeElementBase);
	UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister()
	{
		return ASnakeElementBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snakeOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_snakeOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp_Snake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap, "HandleBeginOverlap" }, // 1069671456
		{ &Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType, "SetFirstElementType" }, // 3942025223
		{ &Z_Construct_UFunction_ASnakeElementBase_ToggleCollision, "ToggleCollision" }, // 592172514
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeElementBase.h" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_meshComponent_MetaData[] = {
		{ "Category", "SnakeElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeElementBase, meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_meshComponent_MetaData), Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_meshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_snakeOwner_MetaData[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_snakeOwner = { "snakeOwner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeElementBase, snakeOwner), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_snakeOwner_MetaData), Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_snakeOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_snakeOwner,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASnakeElementBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASnakeElementBase, IInteractable), false },  // 980349987
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeElementBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams = {
		&ASnakeElementBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASnakeElementBase()
	{
		if (!Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton, Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton;
	}
	template<> CPP_SNAKE_API UClass* StaticClass<ASnakeElementBase>()
	{
		return ASnakeElementBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeElementBase);
	ASnakeElementBase::~ASnakeElementBase() {}
	struct Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeElementBase, ASnakeElementBase::StaticClass, TEXT("ASnakeElementBase"), &Z_Registration_Info_UClass_ASnakeElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeElementBase), 3526894532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_3565788745(TEXT("/Script/cpp_Snake"),
		Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_SnakeElementBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
