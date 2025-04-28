#pragma once
#include "CoreMinimal.h"
#include "PlayerSlotOptionsTabInterface.h"
#include "PlayerSlotAdvancedControlsTab.generated.h"

class UPlayerSlotOptionsButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotAdvancedControlsTab : public UPlayerSlotOptionsTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_DPadMovementButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_AutoWalkButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_DoubleTapDashButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_AirParryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_AirGrabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_AutoShorthopAerialButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_BackButton;
    
public:
    UPlayerSlotAdvancedControlsTab();

};

