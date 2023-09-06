// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharismaPlugNPlay/Public/CharismaTextboxHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharismaTextboxHelper() {}
// Cross Module References
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaTextboxHelper();
	CHARISMAPLUGNPLAY_API UClass* Z_Construct_UClass_UCharismaTextboxHelper_NoRegister();
	CHARISMAPLUGNPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FCharismaTextboxCollider();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CharismaPlugNPlay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharismaTextboxCollider;
class UScriptStruct* FCharismaTextboxCollider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharismaTextboxCollider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharismaTextboxCollider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharismaTextboxCollider, (UObject*)Z_Construct_UPackage__Script_CharismaPlugNPlay(), TEXT("CharismaTextboxCollider"));
	}
	return Z_Registration_Info_UScriptStruct_CharismaTextboxCollider.OuterSingleton;
}
template<> CHARISMAPLUGNPLAY_API UScriptStruct* StaticStruct<FCharismaTextboxCollider>()
{
	return FCharismaTextboxCollider::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharismaTextboxCollider>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
		nullptr,
		&NewStructOps,
		"CharismaTextboxCollider",
		sizeof(FCharismaTextboxCollider),
		alignof(FCharismaTextboxCollider),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharismaTextboxCollider()
	{
		if (!Z_Registration_Info_UScriptStruct_CharismaTextboxCollider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharismaTextboxCollider.InnerSingleton, Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharismaTextboxCollider.InnerSingleton;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execGetNonCollidingPositionForTargetRect)
	{
		P_GET_STRUCT(FCharismaTextboxCollider,Z_Param_targetRect);
		P_GET_STRUCT(FCharismaTextboxCollider,Z_Param_collidingRect);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_pushback);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_excess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetNonCollidingPositionForTargetRect(Z_Param_targetRect,Z_Param_collidingRect,Z_Param_Out_pushback,Z_Param_Out_excess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execGetExcessOutsideOfBounds)
	{
		P_GET_STRUCT(FCharismaTextboxCollider,Z_Param_targetRect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetExcessOutsideOfBounds(Z_Param_targetRect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execDoCollidersOverlap)
	{
		P_GET_STRUCT(FCharismaTextboxCollider,Z_Param_colliderOne);
		P_GET_STRUCT(FCharismaTextboxCollider,Z_Param_colliderTwo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoCollidersOverlap(Z_Param_colliderOne,Z_Param_colliderTwo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execFitPositionToViewport)
	{
		P_GET_STRUCT(FVector2D,Z_Param_pendingPosition);
		P_GET_STRUCT(FVector2D,Z_Param_size);
		P_GET_STRUCT(FVector2D,Z_Param_viewportSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->FitPositionToViewport(Z_Param_pendingPosition,Z_Param_size,Z_Param_viewportSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execUpdateTextboxesOverlapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextboxesOverlapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execUpdateTextboxesInScreenSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextboxesInScreenSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharismaTextboxHelper::execUpdateTextboxesOnScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextboxesOnScreen();
		P_NATIVE_END;
	}
	void UCharismaTextboxHelper::StaticRegisterNativesUCharismaTextboxHelper()
	{
		UClass* Class = UCharismaTextboxHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoCollidersOverlap", &UCharismaTextboxHelper::execDoCollidersOverlap },
			{ "FitPositionToViewport", &UCharismaTextboxHelper::execFitPositionToViewport },
			{ "GetExcessOutsideOfBounds", &UCharismaTextboxHelper::execGetExcessOutsideOfBounds },
			{ "GetNonCollidingPositionForTargetRect", &UCharismaTextboxHelper::execGetNonCollidingPositionForTargetRect },
			{ "UpdateTextboxesInScreenSpace", &UCharismaTextboxHelper::execUpdateTextboxesInScreenSpace },
			{ "UpdateTextboxesOnScreen", &UCharismaTextboxHelper::execUpdateTextboxesOnScreen },
			{ "UpdateTextboxesOverlapping", &UCharismaTextboxHelper::execUpdateTextboxesOverlapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics
	{
		struct CharismaTextboxHelper_eventDoCollidersOverlap_Parms
		{
			FCharismaTextboxCollider colliderOne;
			FCharismaTextboxCollider colliderTwo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_colliderOne;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colliderTwo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_colliderOne = { "colliderOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventDoCollidersOverlap_Parms, colliderOne), Z_Construct_UScriptStruct_FCharismaTextboxCollider, METADATA_PARAMS(nullptr, 0) }; // 2704791030
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_colliderTwo = { "colliderTwo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventDoCollidersOverlap_Parms, colliderTwo), Z_Construct_UScriptStruct_FCharismaTextboxCollider, METADATA_PARAMS(nullptr, 0) }; // 2704791030
	void Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharismaTextboxHelper_eventDoCollidersOverlap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CharismaTextboxHelper_eventDoCollidersOverlap_Parms), &Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_colliderOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_colliderTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "DoCollidersOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::CharismaTextboxHelper_eventDoCollidersOverlap_Parms), Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics
	{
		struct CharismaTextboxHelper_eventFitPositionToViewport_Parms
		{
			FVector2D pendingPosition;
			FVector2D size;
			FVector2D viewportSize;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pendingPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_viewportSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_pendingPosition = { "pendingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventFitPositionToViewport_Parms, pendingPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventFitPositionToViewport_Parms, size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_viewportSize = { "viewportSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventFitPositionToViewport_Parms, viewportSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventFitPositionToViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_pendingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_viewportSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "FitPositionToViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::CharismaTextboxHelper_eventFitPositionToViewport_Parms), Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics
	{
		struct CharismaTextboxHelper_eventGetExcessOutsideOfBounds_Parms
		{
			FCharismaTextboxCollider targetRect;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetRect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::NewProp_targetRect = { "targetRect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetExcessOutsideOfBounds_Parms, targetRect), Z_Construct_UScriptStruct_FCharismaTextboxCollider, METADATA_PARAMS(nullptr, 0) }; // 2704791030
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetExcessOutsideOfBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::NewProp_targetRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "GetExcessOutsideOfBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::CharismaTextboxHelper_eventGetExcessOutsideOfBounds_Parms), Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics
	{
		struct CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms
		{
			FCharismaTextboxCollider targetRect;
			FCharismaTextboxCollider collidingRect;
			FVector2D pushback;
			FVector2D excess;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetRect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_collidingRect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pushback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_excess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_targetRect = { "targetRect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms, targetRect), Z_Construct_UScriptStruct_FCharismaTextboxCollider, METADATA_PARAMS(nullptr, 0) }; // 2704791030
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_collidingRect = { "collidingRect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms, collidingRect), Z_Construct_UScriptStruct_FCharismaTextboxCollider, METADATA_PARAMS(nullptr, 0) }; // 2704791030
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_pushback = { "pushback", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms, pushback), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_excess = { "excess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms, excess), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_targetRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_collidingRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_pushback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_excess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "GetNonCollidingPositionForTargetRect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::CharismaTextboxHelper_eventGetNonCollidingPositionForTargetRect_Parms), Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "UpdateTextboxesInScreenSpace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charisma|Textbox" },
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "UpdateTextboxesOnScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharismaTextboxHelper, nullptr, "UpdateTextboxesOverlapping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharismaTextboxHelper);
	UClass* Z_Construct_UClass_UCharismaTextboxHelper_NoRegister()
	{
		return UCharismaTextboxHelper::StaticClass();
	}
	struct Z_Construct_UClass_UCharismaTextboxHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Widgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewportScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colliders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colliders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colliders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharismaTextboxHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharismaPlugNPlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharismaTextboxHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_DoCollidersOverlap, "DoCollidersOverlap" }, // 2719790906
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_FitPositionToViewport, "FitPositionToViewport" }, // 2298899741
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_GetExcessOutsideOfBounds, "GetExcessOutsideOfBounds" }, // 471237670
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_GetNonCollidingPositionForTargetRect, "GetNonCollidingPositionForTargetRect" }, // 1756435813
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesInScreenSpace, "UpdateTextboxesInScreenSpace" }, // 2157438876
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOnScreen, "UpdateTextboxesOnScreen" }, // 2196053483
		{ &Z_Construct_UFunction_UCharismaTextboxHelper_UpdateTextboxesOverlapping, "UpdateTextboxesOverlapping" }, // 3159390021
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaTextboxHelper_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharismaTextboxHelper.h" },
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "Charisma|Textbox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaTextboxHelper, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets_MetaData[] = {
		{ "Category", "Charisma|Textbox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaTextboxHelper, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportSize = { "ViewportSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaTextboxHelper, ViewportSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportScale = { "ViewportScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaTextboxHelper, ViewportScale), METADATA_PARAMS(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportScale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders_Inner = { "Colliders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCharismaTextboxCollider, METADATA_PARAMS(nullptr, 0) }; // 2704791030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharismaTextboxHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders = { "Colliders", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharismaTextboxHelper, Colliders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders_MetaData)) }; // 2704791030
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharismaTextboxHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Widgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_ViewportScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharismaTextboxHelper_Statics::NewProp_Colliders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharismaTextboxHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharismaTextboxHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharismaTextboxHelper_Statics::ClassParams = {
		&UCharismaTextboxHelper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharismaTextboxHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharismaTextboxHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharismaTextboxHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharismaTextboxHelper()
	{
		if (!Z_Registration_Info_UClass_UCharismaTextboxHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharismaTextboxHelper.OuterSingleton, Z_Construct_UClass_UCharismaTextboxHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharismaTextboxHelper.OuterSingleton;
	}
	template<> CHARISMAPLUGNPLAY_API UClass* StaticClass<UCharismaTextboxHelper>()
	{
		return UCharismaTextboxHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharismaTextboxHelper);
	UCharismaTextboxHelper::~UCharismaTextboxHelper() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics::ScriptStructInfo[] = {
		{ FCharismaTextboxCollider::StaticStruct, Z_Construct_UScriptStruct_FCharismaTextboxCollider_Statics::NewStructOps, TEXT("CharismaTextboxCollider"), &Z_Registration_Info_UScriptStruct_CharismaTextboxCollider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharismaTextboxCollider), 2704791030U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharismaTextboxHelper, UCharismaTextboxHelper::StaticClass, TEXT("UCharismaTextboxHelper"), &Z_Registration_Info_UClass_UCharismaTextboxHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharismaTextboxHelper), 1731143070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_1599477756(TEXT("/Script/CharismaPlugNPlay"),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Unreal_SDK_Test_PlugNPlay46_Plugins_CharismaPlugNPlay_Source_CharismaPlugNPlay_Public_CharismaTextboxHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
