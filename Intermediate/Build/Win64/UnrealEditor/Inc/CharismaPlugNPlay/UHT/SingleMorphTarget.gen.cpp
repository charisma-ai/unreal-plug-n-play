// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Animation/SingleMorphTarget.h"
#include "CharismaPlugNPlay/Public/Animation/MorphTargetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleMorphTarget() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_USingleMorphTarget();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_USingleMorphTarget_NoRegister();
	CHARISMAPLUGNPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	void USingleMorphTarget::StaticRegisterNativesUSingleMorphTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleMorphTarget);
	UClass* Z_Construct_UClass_USingleMorphTarget_NoRegister()
	{
		return USingleMorphTarget::StaticClass();
	}
	struct Z_Construct_UClass_USingleMorphTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MorphTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleMorphTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleMorphTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animation/SingleMorphTarget.h" },
		{ "ModuleRelativePath", "Public/Animation/SingleMorphTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleMorphTarget_Statics::NewProp_MorphTarget_MetaData[] = {
		{ "Category", "SingleMorphTarget" },
		{ "ModuleRelativePath", "Public/Animation/SingleMorphTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USingleMorphTarget_Statics::NewProp_MorphTarget = { "MorphTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleMorphTarget, MorphTarget), Z_Construct_UScriptStruct_FMorphTargetData, METADATA_PARAMS(Z_Construct_UClass_USingleMorphTarget_Statics::NewProp_MorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleMorphTarget_Statics::NewProp_MorphTarget_MetaData)) }; // 1173412107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleMorphTarget_Statics::NewProp_MorphTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleMorphTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleMorphTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleMorphTarget_Statics::ClassParams = {
		&USingleMorphTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleMorphTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleMorphTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USingleMorphTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleMorphTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleMorphTarget()
	{
		if (!Z_Registration_Info_UClass_USingleMorphTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleMorphTarget.OuterSingleton, Z_Construct_UClass_USingleMorphTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleMorphTarget.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<USingleMorphTarget>()
	{
		return USingleMorphTarget::StaticClass();
	}
	USingleMorphTarget::USingleMorphTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleMorphTarget);
	USingleMorphTarget::~USingleMorphTarget() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_SingleMorphTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_SingleMorphTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleMorphTarget, USingleMorphTarget::StaticClass, TEXT("USingleMorphTarget"), &Z_Registration_Info_UClass_USingleMorphTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleMorphTarget), 916171919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_SingleMorphTarget_h_415192663(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_SingleMorphTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_SingleMorphTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
