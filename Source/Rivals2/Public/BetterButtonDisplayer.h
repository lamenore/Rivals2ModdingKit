#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Blueprint/UserWidget.h"
#include "EDisplayStyle.h"
#include "EDisplayType.h"
#include "BetterButtonDisplayer.generated.h"

class ARivalsPlayerController;
class UCanvasPanel;
class UImage;
class UScaleBox;
class USizeBox;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UBetterButtonDisplayer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Colored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayType DisplayFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldListenForInputChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_WidthOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_HeightOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MinDesiredWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MinDesiredHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MaxDesiredWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MaxDesiredHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> Stretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> StretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreInheritedScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_ScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_ButtonIconScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_NothingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_KeyboardPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_KeyboardGlyphSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_KeyboardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_KeyboardGlyphImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* CurrentPlayerController;
    
public:
    UBetterButtonDisplayer();

    UFUNCTION(BlueprintCallable)
    void SetWidthOverride(float InWidthOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetStretch(TEnumAsByte<EStretch::Type> InStretch);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerController(ARivalsPlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredHeight(float InMinDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightOverride(float InHeightOverride);
    
    UFUNCTION(BlueprintCallable)
    void DisplayNothing();
    
    UFUNCTION(BlueprintCallable)
    void DisplayKey(const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void DisplayAction(FName InActionName, ARivalsPlayerController* InPlayerController, const int32 InBindingIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearWidthOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearHeightOverride();
    
};

