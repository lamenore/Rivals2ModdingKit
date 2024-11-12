#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConnectedPlayer.h"
#include "GameServerConnectionInfo.h"
#include "OnGSDKHealthCheck_DynDelegate.h"
#include "OnGSDKMaintenance_DynDelegate.h"
#include "OnGSDKReadyForPlayers_DynDelegate.h"
#include "OnGSDKServerActive_DynDelegate.h"
#include "OnGSDKShutdown_DynDelegate.h"
#include "GSDKUtils.generated.h"

UCLASS(Blueprintable)
class PLAYFABGSDK_API UGSDKUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSDKUtils();

    UFUNCTION(BlueprintCallable)
    static void UpdateConnectedPlayers(const TArray<FConnectedPlayer>& CurrentlyConnectedPlayers);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDefaultServerHostPort();
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGSDKShutdownDelegate(const FOnGSDKShutdown_Dyn& OnGSDKShutdownDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGSDKServerActiveDelegate(const FOnGSDKServerActive_Dyn& OnGSDKServerActiveDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGSDKReadyForPlayers(const FOnGSDKReadyForPlayers_Dyn& OnGSDKReadyForPlayersDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGSDKMaintenanceDelegate(const FOnGSDKMaintenance_Dyn& OnGSDKMaintenanceDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGSDKHealthCheckDelegate(const FOnGSDKHealthCheck_Dyn& OnGSDKHealthCheckDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void ReadyForPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVMId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTitleId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSharedContentDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetServerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRegionName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMetaDataValue(const FString& MetaDataName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMatchSessionCookie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMatchId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLogsDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetInitialPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameServerConnectionInfo GetGameServerConnectionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildId();
    
};

