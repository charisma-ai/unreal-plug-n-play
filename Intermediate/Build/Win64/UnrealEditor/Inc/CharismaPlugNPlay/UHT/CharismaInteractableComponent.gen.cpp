// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/Playthrough/CharismaInteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharismaInteractableComponent() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaEntityComponent();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaInteractableComponent();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaInteractableComponent_NoRegister();
	CHARISMAPLUGNPLAY_API UFunction* Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CharismaPlugNPlay, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract)
{
	OnInteract.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCharismaInteractableComponent::execResetUsage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetUsage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaInteractableComponent::execIsAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaInteractableComponent::execSetAvailable)
	{
		P_GET_UBOOL(Z_Param_available);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvailable(Z_Param_available);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaInteractableComponent::execHasBeenUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaInteractableComponent::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	void UCharismaInteractableComponent::StaticRegisterNativesUCharismaInteractableComponent()
	{
		UClass* Class = UCharismaInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasBeenUsed", &UCharismaInteractableComponent::execHasBeenUsed },
			{ "Interact", &UCharismaInteractableComponent::execInteract },
			{ "IsAvailable", &UCharismaInteractableComponent::execIsAvailable },
			{ "ResetUsage", &UCharismaInteractableComponent::execResetUsage },
			{ "SetAvailable", &UCharismaInteractableComponent::execSetAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics
	{
		struct CharismaInteractableComponent_eventHasBeenUsed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharismaInteractableComponent_eventHasBeenUsed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CharismaInteractableComponent_eventHasBeenUsed_Parms), &Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Interactable" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaInteractableComponent, nullptr, "HasBeenUsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::CharismaInteractableComponent_eventHasBeenUsed_Parms), Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaInteractableComponent_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaInteractableComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Interactable" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaInteractableComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaInteractableComponent, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaInteractableComponent_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaInteractableComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaInteractableComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics
	{
		struct CharismaInteractableComponent_eventIsAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharismaInteractableComponent_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CharismaInteractableComponent_eventIsAvailable_Parms), &Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Interactable" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaInteractableComponent, nullptr, "IsAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::CharismaInteractableComponent_eventIsAvailable_Parms), Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Interactable" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaInteractableComponent, nullptr, "ResetUsage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics
	{
		struct CharismaInteractableComponent_eventSetAvailable_Parms
		{
			bool available;
		};
		static void NewProp_available_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_available;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::NewProp_available_SetBit(void* Obj)
	{
		((CharismaInteractableComponent_eventSetAvailable_Parms*)Obj)->available = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::NewProp_available = { "available", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CharismaInteractableComponent_eventSetAvailable_Parms), &Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::NewProp_available_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::NewProp_available,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Interactable" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaInteractableComponent, nullptr, "SetAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::CharismaInteractableComponent_eventSetAvailable_Parms), Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharismaInteractableComponent);
	UClass* Z_Construct_UClass_UCharismaInteractableComponent_NoRegister()
	{
		return UCharismaInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharismaInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Used_MetaData[];
#endif
		static void NewProp_Used_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Used;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Available_MetaData[];
#endif
		static void NewProp_Available_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Available;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharismaInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharismaEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharismaInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharismaInteractableComponent_HasBeenUsed, "HasBeenUsed" }, // 2526080436
		{ &Z_Construct_UFunction_UCharismaInteractableComponent_Interact, "Interact" }, // 2929313153
		{ &Z_Construct_UFunction_UCharismaInteractableComponent_IsAvailable, "IsAvailable" }, // 2692599134
		{ &Z_Construct_UFunction_UCharismaInteractableComponent_ResetUsage, "ResetUsage" }, // 282175260
		{ &Z_Construct_UFunction_UCharismaInteractableComponent_SetAvailable, "SetAvailable" }, // 3823847692
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Playthrough/CharismaInteractableComponent.h" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_OnInteract_MetaData[] = {
		{ "Category", "Charisma|Interactable" },
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaInteractableComponent, OnInteract), Z_Construct_UDelegateFunction_CharismaPlugNPlay_OnInteract__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_OnInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_OnInteract_MetaData)) }; // 1114237345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((UCharismaInteractableComponent*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharismaInteractableComponent), &Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used_SetBit(void* Obj)
	{
		((UCharismaInteractableComponent*)Obj)->Used = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used = { "Used", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharismaInteractableComponent), &Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Range_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaInteractableComponent, Range), METADATA_PARAMS(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playthrough/CharismaInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available_SetBit(void* Obj)
	{
		((UCharismaInteractableComponent*)Obj)->Available = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharismaInteractableComponent), &Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharismaInteractableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_OnInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Used,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaInteractableComponent_Statics::NewProp_Available,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharismaInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharismaInteractableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharismaInteractableComponent_Statics::ClassParams = {
		&UCharismaInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharismaInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharismaInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharismaInteractableComponent()
	{
		if (!Z_Registration_Info_UClass_UCharismaInteractableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharismaInteractableComponent.OuterSingleton, Z_Construct_UClass_UCharismaInteractableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharismaInteractableComponent.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UCharismaInteractableComponent>()
	{
		return UCharismaInteractableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharismaInteractableComponent);
	UCharismaInteractableComponent::~UCharismaInteractableComponent() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaInteractableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaInteractableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharismaInteractableComponent, UCharismaInteractableComponent::StaticClass, TEXT("UCharismaInteractableComponent"), &Z_Registration_Info_UClass_UCharismaInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharismaInteractableComponent), 2696573486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaInteractableComponent_h_3014807383(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaInteractableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_Playthrough_CharismaInteractableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
