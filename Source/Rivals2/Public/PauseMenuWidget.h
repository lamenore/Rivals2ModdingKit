#pragma once
#include "CoreMinimal.h"
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
    
public:
    UPauseMenuWidget();

    UFUNCTION(BlueprintCallable)
    void RestartMatch(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnpause(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndMatch(const int32& PlayerIndex);
    
};

