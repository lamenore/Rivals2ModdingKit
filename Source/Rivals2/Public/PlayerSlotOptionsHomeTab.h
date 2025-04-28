#pragma once
#include "CoreMinimal.h"
#include "PlayerSlotOptionsTabInterface.h"
#include "PlayerSlotOptionsHomeTab.generated.h"

class UPlayerSlotOptionsButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotOptionsHomeTab : public UPlayerSlotOptionsTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_PlayerProfilesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_RedeemCodeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_CreatorSupportButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_AccountDetailsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_ControlsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_NetworkSettingsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_RandomSkinsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_IconsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_PlatformsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_DeathEffectsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsButtonWidget* BP_CloseButton;
    
public:
    UPlayerSlotOptionsHomeTab();

    UFUNCTION(BlueprintCallable)
    void OnProfilesClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSettingsClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnControlsClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseClicked();
    
};

