#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "3DPreviewModal.generated.h"

class AMenuRivalCapture;
class UBetterImage;
class UEquipmentItemAsset;
class UHorizontalBox;
class UMenuButtonWidget;
class UPreviewPaletteButton;
class URivalsMenuButtonWidget;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API U3DPreviewModal : public UBasePopupWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentItemAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuRivalCapture* OutCharacterDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuRivalCapture* ShadowCharacterDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_CloseButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseButtonDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_CycleColorsButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CycleColorsButtonDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_PlayAnimationButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_PlayAnimationButtonDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_RotateButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_RotateButtonDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_CurrencyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CostText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PurchaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_PaletteBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPreviewPaletteButton* BP_PaletteBorderDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPreviewPaletteButton* BP_PaletteBorderRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPreviewPaletteButton* BP_PaletteBorderGreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPreviewPaletteButton* BP_PaletteBorderBlue;
    
public:
    U3DPreviewModal();

    UFUNCTION(BlueprintCallable)
    void ReplayAnimation(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void Purchase();
    
    UFUNCTION(BlueprintCallable)
    void PlayTaunt();
    
    UFUNCTION(BlueprintCallable)
    void CycleColorsForward(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void CycleColorsBackward(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void CycleColors(bool backwards);
    
};

