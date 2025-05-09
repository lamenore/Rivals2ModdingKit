#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "PauseMenuPopup.generated.h"

class UCanvasPanel;
class UImage;
class UMovingButtonHover;
class UPauseMenuDebugOptionsTab;
class UPauseMenuHUDOptionsTab;
class UPauseMenuHomeTab;
class UTextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TopLeftText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_TopLeftFadeBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuHomeTab* BP_HomeTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuHUDOptionsTab* BP_HUDOptionsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuDebugOptionsTab* BP_DebugOptionsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_EntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ChangeTabAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovingButtonHover* BP_MovingButtonHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_HoverContainer;
    
public:
    UPauseMenuPopup();

    UFUNCTION(BlueprintCallable)
    void RestartMatch(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnpause(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndMatch(const int32& PlayerIndex);
    
};

