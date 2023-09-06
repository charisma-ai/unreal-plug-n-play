// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/PluginUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginUtilities() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UPluginUtilities();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UPluginUtilities_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	DEFINE_FUNCTION(UPluginUtilities::execIsPluginModuleLoaded)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ModuleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginUtilities::IsPluginModuleLoaded(Z_Param_ModuleName);
		P_NATIVE_END;
	}
	void UPluginUtilities::StaticRegisterNativesUPluginUtilities()
	{
		UClass* Class = UPluginUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPluginModuleLoaded", &UPluginUtilities::execIsPluginModuleLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics
	{
		struct PluginUtilities_eventIsPluginModuleLoaded_Parms
		{
			FName ModuleName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginUtilities_eventIsPluginModuleLoaded_Parms, ModuleName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginUtilities_eventIsPluginModuleLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginUtilities_eventIsPluginModuleLoaded_Parms), &Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Plugins" },
		{ "ModuleRelativePath", "Public/PluginUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginUtilities, nullptr, "IsPluginModuleLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::PluginUtilities_eventIsPluginModuleLoaded_Parms), Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginUtilities);
	UClass* Z_Construct_UClass_UPluginUtilities_NoRegister()
	{
		return UPluginUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPluginUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPluginUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPluginUtilities_IsPluginModuleLoaded, "IsPluginModuleLoaded" }, // 252259592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PluginUtilities.h" },
		{ "ModuleRelativePath", "Public/PluginUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginUtilities_Statics::ClassParams = {
		&UPluginUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPluginUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginUtilities()
	{
		if (!Z_Registration_Info_UClass_UPluginUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginUtilities.OuterSingleton, Z_Construct_UClass_UPluginUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPluginUtilities.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UPluginUtilities>()
	{
		return UPluginUtilities::StaticClass();
	}
	UPluginUtilities::UPluginUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginUtilities);
	UPluginUtilities::~UPluginUtilities() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_PluginUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_PluginUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPluginUtilities, UPluginUtilities::StaticClass, TEXT("UPluginUtilities"), &Z_Registration_Info_UClass_UPluginUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginUtilities), 3531606115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_PluginUtilities_h_3189216592(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_PluginUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_PluginUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
