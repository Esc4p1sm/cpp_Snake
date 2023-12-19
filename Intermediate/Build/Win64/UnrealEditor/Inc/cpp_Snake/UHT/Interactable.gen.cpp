// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp_Snake/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CPP_SNAKE_API UClass* Z_Construct_UClass_UInteractable();
	CPP_SNAKE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_cpp_Snake();
// End Cross Module References
	void UInteractable::StaticRegisterNativesUInteractable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
	UClass* Z_Construct_UClass_UInteractable_NoRegister()
	{
		return UInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp_Snake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
		&UInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractable()
	{
		if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
	}
	template<> CPP_SNAKE_API UClass* StaticClass<UInteractable>()
	{
		return UInteractable::StaticClass();
	}
	UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
	UInteractable::~UInteractable() {}
	struct Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 980349987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_2320504808(TEXT("/Script/cpp_Snake"),
		Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_proj_cpp_Snake_Source_cpp_Snake_Interactable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
