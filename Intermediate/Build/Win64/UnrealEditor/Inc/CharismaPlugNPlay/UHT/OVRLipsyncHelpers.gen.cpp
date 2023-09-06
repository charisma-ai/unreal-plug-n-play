// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Animation/OVRLipsyncHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipsyncHelpers() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UOVRLipsyncHelpers();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UOVRLipsyncHelpers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	DEFINE_FUNCTION(UOVRLipsyncHelpers::execGetAudioSegment)
	{
		P_GET_TARRAY(uint8,Z_Param_Audio);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UOVRLipsyncHelpers::GetAudioSegment(Z_Param_Audio,Z_Param_StartIndex,Z_Param_EndIndex);
		P_NATIVE_END;
	}
	void UOVRLipsyncHelpers::StaticRegisterNativesUOVRLipsyncHelpers()
	{
		UClass* Class = UOVRLipsyncHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioSegment", &UOVRLipsyncHelpers::execGetAudioSegment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics
	{
		struct OVRLipsyncHelpers_eventGetAudioSegment_Parms
		{
			TArray<uint8> Audio;
			int32 StartIndex;
			int32 EndIndex;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Audio_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Audio;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio_Inner = { "Audio", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipsyncHelpers_eventGetAudioSegment_Parms, Audio), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipsyncHelpers_eventGetAudioSegment_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipsyncHelpers_eventGetAudioSegment_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipsyncHelpers_eventGetAudioSegment_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_Audio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Helpers|Lipsync" },
		{ "ModuleRelativePath", "Public/Animation/OVRLipsyncHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipsyncHelpers, nullptr, "GetAudioSegment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::OVRLipsyncHelpers_eventGetAudioSegment_Parms), Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOVRLipsyncHelpers);
	UClass* Z_Construct_UClass_UOVRLipsyncHelpers_NoRegister()
	{
		return UOVRLipsyncHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipsyncHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipsyncHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipsyncHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipsyncHelpers_GetAudioSegment, "GetAudioSegment" }, // 2979757259
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipsyncHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animation/OVRLipsyncHelpers.h" },
		{ "ModuleRelativePath", "Public/Animation/OVRLipsyncHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipsyncHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipsyncHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipsyncHelpers_Statics::ClassParams = {
		&UOVRLipsyncHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipsyncHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipsyncHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipsyncHelpers()
	{
		if (!Z_Registration_Info_UClass_UOVRLipsyncHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipsyncHelpers.OuterSingleton, Z_Construct_UClass_UOVRLipsyncHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOVRLipsyncHelpers.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UOVRLipsyncHelpers>()
	{
		return UOVRLipsyncHelpers::StaticClass();
	}
	UOVRLipsyncHelpers::UOVRLipsyncHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipsyncHelpers);
	UOVRLipsyncHelpers::~UOVRLipsyncHelpers() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_OVRLipsyncHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_OVRLipsyncHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipsyncHelpers, UOVRLipsyncHelpers::StaticClass, TEXT("UOVRLipsyncHelpers"), &Z_Registration_Info_UClass_UOVRLipsyncHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipsyncHelpers), 3991605878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_OVRLipsyncHelpers_h_3617206008(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_OVRLipsyncHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Animation_OVRLipsyncHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
