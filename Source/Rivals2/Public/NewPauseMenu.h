#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "NewPauseMenu.generated.h"

class UImage;
class UMenuButtonWidget;
class UMovingButtonHover;
class UPauseMenuHUDOptionsTab;
class UPauseMenuHomeTab;
class UPauseMenuSaveStatesTab;
class UTextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UNewPauseMenu : public URivalsWidget {
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
    UPauseMenuSaveStatesTab* BP_SaveStatesTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuHUDOptionsTab* BP_HUDOptionsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_EntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovingButtonHover* BP_MovingButtonHover;
    
public:
    UNewPauseMenu();

    UFUNCTION(BlueprintCallable)
    void OnFrameAdvance(bool bFrameAdvanceEnabled);
    
};

