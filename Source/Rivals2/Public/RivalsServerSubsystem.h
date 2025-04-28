#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsServerState.h"
#include "PlayFabPlayStreamServerReportPlayerObject.h"
#include "RivalsPlayerRankData.h"
#include "RivalsServerSubsystem.generated.h"

class ARivalsPlayerEntity;

UCLASS(Blueprintable)
class RIVALS2_API URivalsServerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ValidMatchPlayerElos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ValidMatchPlayerRanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ValidMatchMasterIds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsServerState ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRivalsPlayerRankData> PlayerRankDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> InitialLeaderboardPositionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPlayFabPlayStreamServerReportPlayerObject> ServerReportMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConnectedPlayerIds;
    
public:
    URivalsServerSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterConnectedPlayer(const FString& PlayerPlayFabTitleId);
    
    UFUNCTION(BlueprintCallable)
    void ReportServerForPlayer(ARivalsPlayerEntity* PlayerEntity);
    
    UFUNCTION(BlueprintCallable)
    void RegisterConnectedPlayer(const FString& PlayerPlayFabTitleId);
    
    UFUNCTION(BlueprintCallable)
    void ProcessServerReports();
    
    UFUNCTION(BlueprintCallable)
    ERivalsServerState GetServerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetRegisteredConnectedPlayerIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegisteredConnectedPlayerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConnectedPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(const ERivalsServerState NewState);
    
};

