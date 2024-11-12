#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetServerScript.generated.h"

class USnapNetServerScript;

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetServerScript : public UObject {
    GENERATED_BODY()
public:
    USnapNetServerScript();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USnapNetServerScript* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPlayerRemoved(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPlayerJoined(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintClientDisconnected(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintClientConnected(int32 ClientIndex);
    
};

