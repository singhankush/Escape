// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Escape.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Escape() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();

	ESCAPE_API class UClass* Z_Construct_UClass_AEscapeGameModeBase_NoRegister();
	ESCAPE_API class UClass* Z_Construct_UClass_AEscapeGameModeBase();
	ESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	ESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor();
	ESCAPE_API class UClass* Z_Construct_UClass_UPositionInfo_NoRegister();
	ESCAPE_API class UClass* Z_Construct_UClass_UPositionInfo();
	ESCAPE_API class UPackage* Z_Construct_UPackage__Script_Escape();
	void AEscapeGameModeBase::StaticRegisterNativesAEscapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEscapeGameModeBase_NoRegister()
	{
		return AEscapeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEscapeGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Escape();
			OuterClass = AEscapeGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AEscapeGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EscapeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EscapeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeGameModeBase, 478757575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeGameModeBase(Z_Construct_UClass_AEscapeGameModeBase, &AEscapeGameModeBase::StaticClass, TEXT("/Script/Escape"), TEXT("AEscapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeGameModeBase);
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Escape();
			OuterClass = UOpenDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PressurePlate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressurePlate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PressurePlate, UOpenDoor), 0x0040000000000001, Z_Construct_UClass_ATriggerVolume_NoRegister());
				UProperty* NewProp_OpenAngle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OpenAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OpenAngle, UOpenDoor), 0x0040000000020001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OpenAngle, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_OpenAngle, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 82531144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/Escape"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
	void UPositionInfo::StaticRegisterNativesUPositionInfo()
	{
	}
	UClass* Z_Construct_UClass_UPositionInfo_NoRegister()
	{
		return UPositionInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UPositionInfo()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Escape();
			OuterClass = UPositionInfo::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPositionInfo> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PositionInfo.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PositionInfo.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionInfo, 3268149978);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionInfo(Z_Construct_UClass_UPositionInfo, &UPositionInfo::StaticClass, TEXT("/Script/Escape"), TEXT("UPositionInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionInfo);
	UPackage* Z_Construct_UPackage__Script_Escape()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Escape")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x01D13296;
			Guid.B = 0xF6B462F5;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
