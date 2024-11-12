#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "TimerHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTimerHUDWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UTimerHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOvertime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFrameRemainderString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedTimeRemainingString();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinalCountdownTick(int32 SecondsRemaining);
    
};

