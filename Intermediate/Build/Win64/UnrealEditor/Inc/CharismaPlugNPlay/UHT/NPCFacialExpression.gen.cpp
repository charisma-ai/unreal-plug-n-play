// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Animation/NPCFacialExpression.h"
#include "CharismaPlugNPlay/Public/Animation/MorphTargetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCFacialExpression() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UNPCFacialExpression();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UNPCFacialExpression_NoRegister();
	CHARISMAPLUGNPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	void UNPCFacialExpression::StaticRegisterNativesUNPCFacialExpression()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCFacialExpression);
	UClass* Z_Construct_UClass_UNPCFacialExpression_NoRegister()
	{
		return UNPCFacialExpression::StaticClass();
	}
	struct Z_Construct_UClass_UNPCFacialExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharismaEmotion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssociatedCharismaEmotion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MorphTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCFacialExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCFacialExpression_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animation/NPCFacialExpression.h" },
		{ "ModuleRelativePath", "Public/Animation/NPCFacialExpression.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_AssociatedCharismaEmotion_MetaData[] = {
		{ "Category", "NPCFacialExpression" },
		{ "ModuleRelativePath", "Public/Animation/NPCFacialExpression.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_AssociatedCharismaEmotion = { "AssociatedCharismaEmotion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCFacialExpression, AssociatedCharismaEmotion), METADATA_PARAMS(Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_AssociatedCharismaEmotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_AssociatedCharismaEmotion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets_Inner = { "MorphTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMorphTargetData, METADATA_PARAMS(nullptr, 0) }; // 1173412107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets_MetaData[] = {
		{ "Category", "NPCFacialExpression" },
		{ "ModuleRelativePath", "Public/Animation/NPCFacialExpression.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCFacialExpression, MorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets_MetaData)) }; // 1173412107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCFacialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_AssociatedCharismaEmotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCFacialExpression_Statics::NewProp_MorphTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCFacialExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCFacialExpression>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCFacialExpression_Statics::ClassParams = {
		&UNPCFacialExpression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNPCFacialExpression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFacialExpression_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCFacialExpression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFacialExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCFacialExpression()
	{
		if (!Z_Registration_Info_UClass_UNPCFacialExpression.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCFacialExpression.OuterSingleton, Z_Construct_UClass_UNPCFacialExpression_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCFacialExpression.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UNPCFacialExpression>()
	{
		return UNPCFacialExpression::StaticClass();
	}
	UNPCFacialExpression::UNPCFacialExpression(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCFacialExpression);
	UNPCFacialExpression::~UNPCFacialExpression() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_NPCFacialExpression_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_NPCFacialExpression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCFacialExpression, UNPCFacialExpression::StaticClass, TEXT("UNPCFacialExpression"), &Z_Registration_Info_UClass_UNPCFacialExpression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCFacialExpression), 103701374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_NPCFacialExpression_h_2012741372(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_NPCFacialExpression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_NPCFacialExpression_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
