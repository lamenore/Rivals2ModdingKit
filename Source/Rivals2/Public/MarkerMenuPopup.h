#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "EMarkerCameraType.h"
#include "MarkerMenuPopup.generated.h"

class URivalsButtonWidget;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMarkerMenuPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarkerCameraType CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_EditCameraButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_DeleteKeyframeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_CameraTypeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_EditCameraText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CameraTypeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_FrameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_FOVText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_PositionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_RotationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_IndexText;
    
    UMarkerMenuPopup();

    UFUNCTION(BlueprintCallable)
    void ToggleCameraType();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraType(EMarkerCameraType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraInfoText();
    
    UFUNCTION(BlueprintCallable)
    void OnEditCameraPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteKeyframePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTypePressed();
    
};

