#pragma once
#include "CoreMinimal.h"
#include "FMODBlueprintStatics.h"
#include "RivalsWidget.h"
#include "PauseMenuWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuWidget : public URivalsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance PauseSnapshotInstance;
    
public:
    UPauseMenuWidget();

    UFUNCTION(BlueprintCallable)
    void StopPauseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void StartPauseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void RestartMatch(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnpause(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndMatch(const int32& PlayerIndex);
    
};

