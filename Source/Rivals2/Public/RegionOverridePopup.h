#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "RegionOverridePopup.generated.h"

class URegionPreferenceWidget;
class URivalsMenuButtonWidget;
class UTextBlock;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URegionOverridePopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URegionPreferenceWidget> WBP_RegionPreferenceEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ChoiceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PageForwardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PageBackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentPage;
    
public:
    URegionOverridePopup();

    UFUNCTION(BlueprintCallable)
    void OnRegionOverrideChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPageForward();
    
    UFUNCTION(BlueprintCallable)
    void OnPageBack();
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateUpFromBottomBar(EUINavigation NavigationDirection);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateDownFromTopBar(EUINavigation NavigationDirection);
    
};

