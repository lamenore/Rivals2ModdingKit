#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "RegionPreferencePopup.generated.h"

class URegionPreferenceWidget;
class URivalsMenuButtonWidget;
class UTextBlock;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URegionPreferencePopup : public UBasePopupWidget {
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
    URivalsMenuButtonWidget* BP_PresetForwardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PresetBackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentPreset;
    
public:
    URegionPreferencePopup();

    UFUNCTION(BlueprintCallable)
    void OnRegionPreferencesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPresetForward();
    
    UFUNCTION(BlueprintCallable)
    void OnPresetBack();
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateUpFromBottomBar(EUINavigation NavigationDirection);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateDownFromTopBar(EUINavigation NavigationDirection);
    
};

