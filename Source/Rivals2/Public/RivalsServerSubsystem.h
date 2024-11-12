#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsServerState.h"
#include "RivalsPlayerRankData.h"
#include "RivalsServerSubsystem.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsServerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsServerState ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRivalsPlayerRankData> PlayerRankDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConnectedPlayerIds;
    
public:
    URivalsServerSubsystem();

    UFUNCTION(BlueprintCallable)
    void RegisterConnectedPlayer(const FString& PlayerPlayFabTitleId);
    
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

