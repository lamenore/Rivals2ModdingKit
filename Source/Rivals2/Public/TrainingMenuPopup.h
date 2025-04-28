#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "TrainingMenuPopup.generated.h"

class UBorder;
class URivalsButtonWidget;
class UTrainingMenuCPUTab;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuCPUTab* BP_CPUTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_MenuBorder;
    
    UTrainingMenuPopup();

private:
    UFUNCTION(BlueprintCallable)
    void OnCloseReleased(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseLostFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseFocused(const int32 UserIndex);
    
};

