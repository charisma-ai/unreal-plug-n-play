// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Playthrough/CharismaEntityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharismaEntityComponent() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaEntityComponent();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaEntityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	DEFINE_FUNCTION(UCharismaEntityComponent::execSetLive)
	{
		P_GET_UBOOL(Z_Param_live);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLive(Z_Param_live);
		P_NATIVE_END;
	}
	void UCharismaEntityComponent::StaticRegisterNativesUCharismaEntityComponent()
	{
		UClass* Class = UCharismaEntityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLive", &UCharismaEntityComponent::execSetLive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics
	{
		struct CharismaEntityComponent_eventSetLive_Parms
		{
			bool live;
		};
		static void NewProp_live_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_live;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::NewProp_live_SetBit(void* Obj)
	{
		((CharismaEntityComponent_eventSetLive_Parms*)Obj)->live = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::NewProp_live = { "live", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CharismaEntityComponent_eventSetLive_Parms), &Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::NewProp_live_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::NewProp_live,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|EntityComponent" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaEntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaEntityComponent, nullptr, "SetLive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::CharismaEntityComponent_eventSetLive_Parms), Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaEntityComponent_SetLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaEntityComponent_SetLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharismaEntityComponent);
	UClass* Z_Construct_UClass_UCharismaEntityComponent_NoRegister()
	{
		return UCharismaEntityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharismaEntityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntityId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLive_MetaData[];
#endif
		static void NewProp_StartLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLive_MetaData[];
#endif
		static void NewProp_IsLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharismaEntityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharismaEntityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharismaEntityComponent_SetLive, "SetLive" }, // 622834532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaEntityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Playthrough/CharismaEntityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaEntityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_EntityId_MetaData[] = {
		{ "Category", "Charisma|EntityComponent" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaEntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_EntityId = { "EntityId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaEntityComponent, EntityId), METADATA_PARAMS(Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_EntityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_EntityId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive_MetaData[] = {
		{ "Category", "Charisma|EntityComponent" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaEntityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive_SetBit(void* Obj)
	{
		((UCharismaEntityComponent*)Obj)->StartLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive = { "StartLive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharismaEntityComponent), &Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive_MetaData[] = {
		{ "Category", "Charisma|EntityComponent" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaEntityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive_SetBit(void* Obj)
	{
		((UCharismaEntityComponent*)Obj)->IsLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive = { "IsLive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharismaEntityComponent), &Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharismaEntityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_EntityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_StartLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaEntityComponent_Statics::NewProp_IsLive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharismaEntityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharismaEntityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharismaEntityComponent_Statics::ClassParams = {
		&UCharismaEntityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharismaEntityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaEntityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharismaEntityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaEntityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharismaEntityComponent()
	{
		if (!Z_Registration_Info_UClass_UCharismaEntityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharismaEntityComponent.OuterSingleton, Z_Construct_UClass_UCharismaEntityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharismaEntityComponent.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UCharismaEntityComponent>()
	{
		return UCharismaEntityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharismaEntityComponent);
	UCharismaEntityComponent::~UCharismaEntityComponent() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaEntityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaEntityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharismaEntityComponent, UCharismaEntityComponent::StaticClass, TEXT("UCharismaEntityComponent"), &Z_Registration_Info_UClass_UCharismaEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharismaEntityComponent), 3129701120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaEntityComponent_h_2779696695(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaEntityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaEntityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
