#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "BaseScreenWidget.h"
#include "ELetterboxTransition.h"
#include "LetterboxSlotInfo.h"
#include "RivalsServerMatchInfo.h"
#include "MatchHUDWidget.generated.h"

class ARivalsPlayerController;
class UBasePopupWidget;
class UCanvasPanel;
class UFreeCamWidget;
class UHordeStockDisplayWidget;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMatchHUDWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBox_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBox_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBox_OpenToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBox_CloseToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBox_CloseFromFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFreeCamWidget* BP_FreeCamOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_ClientStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_ServerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BP_HoldToPauseContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHordeStockDisplayWidget* BP_HordeStockDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasProcessedMatchStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* HoldToPauseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBasePopupWidget* PauseMenuPopup;
    
    UMatchHUDWidget();

    UFUNCTION(BlueprintCallable)
    void ShowLetterbox(ELetterboxTransition TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowingLetterbox(const TArray<FLetterboxSlotInfo>& LetterboxSlots, bool bIsArcadeMode, ELetterboxTransition TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsServerMatchInfo GetServerMatchInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScale(FGeometry Geometry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAbsolutePositionAtCoordinates(FGeometry Geometry, const FVector2D Coordinates) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceOpenLetterbox();
    
};

