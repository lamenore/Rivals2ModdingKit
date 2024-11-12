#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RivalsServerSubsystem.h"
#include "RivalsPlayFabServerSubsystem.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsPlayFabServerSubsystem : public URivalsServerSubsystem {
    GENERATED_BODY()
public:
    URivalsPlayFabServerSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGSDKShutdown();
    
    UFUNCTION(BlueprintCallable)
    void OnGSDKServerActive();
    
    UFUNCTION(BlueprintCallable)
    void OnGSDKReadyForPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnGSDKMaintenance(const FDateTime& InDateTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnGSDKHealthCheck();
    
};

