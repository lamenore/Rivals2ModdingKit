#pragma once
#include "CoreMinimal.h"
#include "ERivalsSessionState.h"
#include "RivalsWidget.h"
#include "TimerHUDWidget.generated.h"

class UCanvasPanel;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTimerHUDWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_MinutesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SecondsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_FramesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_Separator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_OvertimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_CountdownPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OvertimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_TimerCanvas;
    
    UTimerHUDWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateMatchTime();
    
    UFUNCTION(BlueprintCallable)
    void SetIsCountdown(bool NewIsCountdown);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchRestarted(ERivalsSessionState SessionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastTenSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOvertime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCountdown();
    
};

