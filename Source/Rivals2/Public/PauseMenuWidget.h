#pragma once
#include "CoreMinimal.h"
#include "FMODBlueprintStatics.h"
#include "RivalsWidget.h"
#include "PauseMenuWidget.generated.h"

class APlayerController;
class UMatchHUDWidget;
class URivalsGameInstance;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchHUDWidget* ParentHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsGameInstance* RivalsGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Controller;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance PauseSnapshotInstance;
    
public:
    UPauseMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleVisibility(bool bMakeVisible);
    
    UFUNCTION(BlueprintCallable)
    void StopPauseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void StartPauseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void SetFreeCameraVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void RestartMatch(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnpause(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndMatch(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate(APlayerController* InController, bool bPlayExitSound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate(APlayerController* InController);
    
};

