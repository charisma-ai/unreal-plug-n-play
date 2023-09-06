// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Playthrough/CharismaPnPActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharismaPnPActorComponent() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaEntityComponent();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaPnPActorComponent();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaPnPActorComponent_NoRegister();
	CHARISMAPLUGNPLAY_API UFunction* Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Playthrough/CharismaPnPActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharismaPlugNPlay, nullptr, "OnResolve__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnResolve_DelegateWrapper(const FMulticastScriptDelegate& OnResolve)
{
	OnResolve.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCharismaPnPActorComponent::execResolve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resolve();
		P_NATIVE_END;
	}
	void UCharismaPnPActorComponent::StaticRegisterNativesUCharismaPnPActorComponent()
	{
		UClass* Class = UCharismaPnPActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Resolve", &UCharismaPnPActorComponent::execResolve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|New Actor" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaPnPActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaPnPActorComponent, nullptr, "Resolve", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharismaPnPActorComponent);
	UClass* Z_Construct_UClass_UCharismaPnPActorComponent_NoRegister()
	{
		return UCharismaPnPActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharismaPnPActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResolve_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResolve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharismaPnPActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharismaEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharismaPnPActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharismaPnPActorComponent_Resolve, "Resolve" }, // 2739591848
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaPnPActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Playthrough/CharismaPnPActorComponent.h" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaPnPActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaPnPActorComponent_Statics::NewProp_OnResolve_MetaData[] = {
		{ "Category", "Charisma|New Actor" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaPnPActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharismaPnPActorComponent_Statics::NewProp_OnResolve = { "OnResolve", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaPnPActorComponent, OnResolve), Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnResolve__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharismaPnPActorComponent_Statics::NewProp_OnResolve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaPnPActorComponent_Statics::NewProp_OnResolve_MetaData)) }; // 2978063233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharismaPnPActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaPnPActorComponent_Statics::NewProp_OnResolve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharismaPnPActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharismaPnPActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharismaPnPActorComponent_Statics::ClassParams = {
		&UCharismaPnPActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharismaPnPActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaPnPActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharismaPnPActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaPnPActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharismaPnPActorComponent()
	{
		if (!Z_Registration_Info_UClass_UCharismaPnPActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharismaPnPActorComponent.OuterSingleton, Z_Construct_UClass_UCharismaPnPActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharismaPnPActorComponent.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UCharismaPnPActorComponent>()
	{
		return UCharismaPnPActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharismaPnPActorComponent);
	UCharismaPnPActorComponent::~UCharismaPnPActorComponent() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaPnPActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaPnPActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharismaPnPActorComponent, UCharismaPnPActorComponent::StaticClass, TEXT("UCharismaPnPActorComponent"), &Z_Registration_Info_UClass_UCharismaPnPActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharismaPnPActorComponent), 2720424170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaPnPActorComponent_h_2768830670(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaPnPActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaPnPActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
