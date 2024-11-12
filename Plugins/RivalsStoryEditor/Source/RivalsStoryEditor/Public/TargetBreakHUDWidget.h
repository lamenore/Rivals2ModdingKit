#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "TargetBreakHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALSSTORYEDITOR_API UTargetBreakHUDWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UTargetBreakHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedRemainingTargets();
    
};

