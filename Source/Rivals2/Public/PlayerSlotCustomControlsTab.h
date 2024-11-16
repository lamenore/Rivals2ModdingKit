#pragma once
#include "CoreMinimal.h"
#include "PlayerSlotOptionsTabInterface.h"
#include "PlayerSlotCustomControlsTab.generated.h"

class UPlayerSlotOptionsButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotCustomControlsTab : public UPlayerSlotOptionsTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_BindingsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_TapJumpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_TapStrongButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_RightStickButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_TapWallJumpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_RumbleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_StickSensitivitiesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_ResetToDefaultButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_AdvancedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_BackButton;
    
public:
    UPlayerSlotCustomControlsTab();

};

