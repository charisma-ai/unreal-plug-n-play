// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Animation/MorphTargetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorphTargetData() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetData();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MorphTargetData;
class UScriptStruct* FMorphTargetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MorphTargetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MorphTargetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMorphTargetData, (UObject*)Z_Construct_UPackage__Script_CharismaPlugNPlay(), TEXT("MorphTargetData"));
	}
	return Z_Registration_Info_UScriptStruct_MorphTargetData.OuterSingleton;
}
template<> CHARISMAPLUGNPLAY_API UScriptStruct* StaticStruct<FMorphTargetData>()
{
	return FMorphTargetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMorphTargetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/MorphTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMorphTargetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_MorphTargetName_MetaData[] = {
		{ "Category", "MorphTargetData" },
		{ "ModuleRelativePath", "Public/Animation/MorphTargetData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMorphTargetData, MorphTargetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_MorphTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_MorphTargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "MorphTargetData" },
		{ "ModuleRelativePath", "Public/Animation/MorphTargetData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMorphTargetData, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_Intensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMorphTargetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_MorphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewProp_Intensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMorphTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
		nullptr,
		&NewStructOps,
		"MorphTargetData",
		sizeof(FMorphTargetData),
		alignof(FMorphTargetData),
		Z_Construct_UScriptStruct_FMorphTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMorphTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetData()
	{
		if (!Z_Registration_Info_UScriptStruct_MorphTargetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MorphTargetData.InnerSingleton, Z_Construct_UScriptStruct_FMorphTargetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MorphTargetData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_MorphTargetData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_MorphTargetData_h_Statics::ScriptStructInfo[] = {
		{ FMorphTargetData::StaticStruct, Z_Construct_UScriptStruct_FMorphTargetData_Statics::NewStructOps, TEXT("MorphTargetData"), &Z_Registration_Info_UScriptStruct_MorphTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMorphTargetData), 1173412107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_MorphTargetData_h_3780248331(TEXT("/Script/CharismaPlugNPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_MorphTargetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_MorphTargetData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
