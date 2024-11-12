#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "BaseScreenWidget.h"
#include "ELetterboxTransition.h"
#include "LetterboxSlotInfo.h"
#include "RivalsServerMatchInfo.h"
#include "MatchHUDWidget.generated.h"

class UHordeStockDisplayWidget;
class UPauseMenuWidget;
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
    UWidgetAnimation* BP_LetterBox_FocusOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBox_FocusClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHordeStockDisplayWidget* BP_HordeStockDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasProcessedMatchStart;
    
    UMatchHUDWidget();

    UFUNCTION(BlueprintCallable)
    void ShowLetterbox(TEnumAsByte<ELetterboxTransition> TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPauseMenuVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsServerMatchInfo GetServerMatchInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScale(FGeometry Geometry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPauseMenuWidget* GetPauseMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAbsolutePositionAtCoordinates(FGeometry Geometry, const FVector2D Coordinates) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceOpenLetterbox();
    
};

