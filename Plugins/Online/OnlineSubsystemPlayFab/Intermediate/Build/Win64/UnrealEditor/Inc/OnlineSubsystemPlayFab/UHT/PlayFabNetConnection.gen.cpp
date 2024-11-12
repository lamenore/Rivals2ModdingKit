// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPlayFab/Public/PlayFabNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabNetConnection() {}

// Begin Cross Module References
ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabNetConnection();
ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabNetConnection_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPlayFab();
// End Cross Module References

// Begin Class UPlayFabNetConnection
void UPlayFabNetConnection::StaticRegisterNativesUPlayFabNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabNetConnection);
UClass* Z_Construct_UClass_UPlayFabNetConnection_NoRegister()
{
	return UPlayFabNetConnection::StaticClass();
}
struct Z_Construct_UClass_UPlayFabNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabNetConnection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabNetConnection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabNetConnection_Statics::ClassParams = {
	&UPlayFabNetConnection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabNetConnection()
{
	if (!Z_Registration_Info_UClass_UPlayFabNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabNetConnection.OuterSingleton, Z_Construct_UClass_UPlayFabNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabNetConnection.OuterSingleton;
}
template<> ONLINESUBSYSTEMPLAYFAB_API UClass* StaticClass<UPlayFabNetConnection>()
{
	return UPlayFabNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabNetConnection);
UPlayFabNetConnection::~UPlayFabNetConnection() {}
// End Class UPlayFabNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabNetConnection, UPlayFabNetConnection::StaticClass, TEXT("UPlayFabNetConnection"), &Z_Registration_Info_UClass_UPlayFabNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabNetConnection), 1373981011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetConnection_h_569141825(TEXT("/Script/OnlineSubsystemPlayFab"),
	Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Danilo_Documents_Unreal_Projects_Rivals2_Plugins_Online_OnlineSubsystemPlayFab_Source_OnlineSubsystemPlayFab_Public_PlayFabNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
