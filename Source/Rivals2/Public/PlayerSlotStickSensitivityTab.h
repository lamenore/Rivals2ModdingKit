#pragma once
#include "CoreMinimal.h"
#include "PlayerSlotOptionsTabInterface.h"
#include "PlayerSlotStickSensitivityTab.generated.h"

class UPlayerSlotOptionsButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotStickSensitivityTab : public UPlayerSlotOptionsTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_LeftStickDeadzoneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_LeftStickSensitivityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_HardPressThresholdButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_RightStickThresholdButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_BackButton;
    
public:
    UPlayerSlotStickSensitivityTab();

};

