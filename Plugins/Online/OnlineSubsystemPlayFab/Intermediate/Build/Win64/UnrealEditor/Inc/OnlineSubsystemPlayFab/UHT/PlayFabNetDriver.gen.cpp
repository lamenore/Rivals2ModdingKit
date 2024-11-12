// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPlayFab/Public/PlayFabNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabNetDriver() {}

// Begin Cross Module References
ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabNetDriver();
ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabNetDriver_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPlayFab();
// End Cross Module References

// Begin Class UPlayFabNetDriver
void UPlayFabNetDriver::StaticRegisterNativesUPlayFabNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabNetDriver);
UClass* Z_Construct_UClass_UPlayFabNetDriver_NoRegister()
{
	return UPlayFabNetDriver::StaticClass();
}
struct Z_Construct_UClass_UPlayFabNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabNetDriver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabNetDriver_Statics::ClassParams = {
	&UPlayFabNetDriver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabNetDriver()
{
	if (!Z_Registration_Info_UClass_UPlayFabNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabNetDriver.OuterSingleton, Z_Construct_UClass_UPlayFabNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabNetDriver.OuterSingleton;
}
template<> ONLINESUBSYSTEMPLAYFAB_API UClass* StaticClass<UPlayFabNetDriver>()
{
	return UPlayFabNetDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabNetDriver);
UPlayFabNetDriver::~UPlayFabNetDriver() {}
// End Class UPlayFabNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabNetDriver, UPlayFabNetDriver::StaticClass, TEXT("UPlayFabNetDriver"), &Z_Registration_Info_UClass_UPlayFabNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabNetDriver), 4178232128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetDriver_h_3064236508(TEXT("/Script/OnlineSubsystemPlayFab"),
	Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
