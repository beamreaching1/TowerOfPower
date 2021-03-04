// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerOfPower/Golem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGolem() {}
// Cross Module References
	TOWEROFPOWER_API UClass* Z_Construct_UClass_AGolem_NoRegister();
	TOWEROFPOWER_API UClass* Z_Construct_UClass_AGolem();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TowerOfPower();
// End Cross Module References
	DEFINE_FUNCTION(AGolem::execStopSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGolem::execStartSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGolem::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGolem::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGolem::execStrafe)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Strafe(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGolem::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	void AGolem::StaticRegisterNativesAGolem()
	{
		UClass* Class = AGolem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AGolem::execMoveForward },
			{ "StartJump", &AGolem::execStartJump },
			{ "StartSprint", &AGolem::execStartSprint },
			{ "StopJump", &AGolem::execStopJump },
			{ "StopSprint", &AGolem::execStopSprint },
			{ "Strafe", &AGolem::execStrafe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGolem_MoveForward_Statics
	{
		struct Golem_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGolem_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Golem_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGolem_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolem_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolem_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Handles input for moving forward and backward.\n" },
		{ "ModuleRelativePath", "Golem.h" },
		{ "ToolTip", "Handles input for moving forward and backward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolem_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolem, nullptr, "MoveForward", nullptr, nullptr, sizeof(Golem_eventMoveForward_Parms), Z_Construct_UFunction_AGolem_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolem_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolem_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolem_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGolem_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolem_StartJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Sets jump flag when key is pressed.\n" },
		{ "ModuleRelativePath", "Golem.h" },
		{ "ToolTip", "Sets jump flag when key is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolem_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolem, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolem_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolem_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolem_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGolem_StartSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolem_StartSprint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Sets sprint flag when key is pressed.\n" },
		{ "ModuleRelativePath", "Golem.h" },
		{ "ToolTip", "Sets sprint flag when key is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolem_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolem, nullptr, "StartSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolem_StartSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_StartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolem_StartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolem_StartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGolem_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolem_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clears jump flag when key is released.\n" },
		{ "ModuleRelativePath", "Golem.h" },
		{ "ToolTip", "Clears jump flag when key is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolem_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolem, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolem_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolem_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolem_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGolem_StopSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolem_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clears sprint flag when key is released.\n" },
		{ "ModuleRelativePath", "Golem.h" },
		{ "ToolTip", "Clears sprint flag when key is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolem_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolem, nullptr, "StopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolem_StopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolem_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolem_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGolem_Strafe_Statics
	{
		struct Golem_eventStrafe_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGolem_Strafe_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Golem_eventStrafe_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGolem_Strafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolem_Strafe_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolem_Strafe_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Handles input for moving right and left.\n" },
		{ "ModuleRelativePath", "Golem.h" },
		{ "ToolTip", "Handles input for moving right and left." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolem_Strafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolem, nullptr, "Strafe", nullptr, nullptr, sizeof(Golem_eventStrafe_Parms), Z_Construct_UFunction_AGolem_Strafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_Strafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolem_Strafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGolem_Strafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolem_Strafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolem_Strafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGolem_NoRegister()
	{
		return AGolem::StaticClass();
	}
	struct Z_Construct_UClass_AGolem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sprintMul_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sprintMul;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGolem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOfPower,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGolem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGolem_MoveForward, "MoveForward" }, // 3789568432
		{ &Z_Construct_UFunction_AGolem_StartJump, "StartJump" }, // 2166893338
		{ &Z_Construct_UFunction_AGolem_StartSprint, "StartSprint" }, // 359455300
		{ &Z_Construct_UFunction_AGolem_StopJump, "StopJump" }, // 3771965864
		{ &Z_Construct_UFunction_AGolem_StopSprint, "StopSprint" }, // 2069000225
		{ &Z_Construct_UFunction_AGolem_Strafe, "Strafe" }, // 3902432296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Golem.h" },
		{ "ModuleRelativePath", "Golem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolem_Statics::NewProp_sprintMul_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ModuleRelativePath", "Golem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGolem_Statics::NewProp_sprintMul = { "sprintMul", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGolem, sprintMul), METADATA_PARAMS(Z_Construct_UClass_AGolem_Statics::NewProp_sprintMul_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGolem_Statics::NewProp_sprintMul_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGolem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGolem_Statics::NewProp_sprintMul,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGolem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGolem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGolem_Statics::ClassParams = {
		&AGolem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGolem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGolem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGolem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGolem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGolem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGolem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGolem, 3367828290);
	template<> TOWEROFPOWER_API UClass* StaticClass<AGolem>()
	{
		return AGolem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGolem(Z_Construct_UClass_AGolem, &AGolem::StaticClass, TEXT("/Script/TowerOfPower"), TEXT("AGolem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGolem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
