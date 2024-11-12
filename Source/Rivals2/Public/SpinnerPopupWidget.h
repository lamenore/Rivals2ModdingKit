#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "SpinnerPopupWidget.generated.h"

class UImage;
class URivalsMenuButtonWidget;
class UScaleBox;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USpinnerPopupWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_SecondaryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_LoadingVisualContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_ErrorVisualContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_LoadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AlertTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_CircularLoadingColorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_Loading;
    
public:
    USpinnerPopupWidget();

    UFUNCTION(BlueprintCallable)
    void UnlockCancelButton();
    
    UFUNCTION(BlueprintCallable)
    void ShowSecondaryButton();
    
    UFUNCTION(BlueprintCallable)
    void ShowError(FText ErrorText);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryButtonText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelButtonText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLoading();
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void LockCancelButton();
    
    UFUNCTION(BlueprintCallable)
    void HideSecondaryButton();
    
};

