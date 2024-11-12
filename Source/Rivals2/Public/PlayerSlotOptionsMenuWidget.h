#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "PlayerSlotOptionsMenuWidget.generated.h"

class ARivalsPlayerController;
class UBorder;
class UPlayerSlotAccountDetailsTab;
class UPlayerSlotAirGrabTab;
class UPlayerSlotAirParryTab;
class UPlayerSlotCustomControlsTab;
class UPlayerSlotDeathEffectsTab;
class UPlayerSlotIconsTab;
class UPlayerSlotNetworkSettingsTab;
class UPlayerSlotOptionsBindingsTab;
class UPlayerSlotOptionsConfirmTab;
class UPlayerSlotOptionsHomeTab;
class UPlayerSlotOptionsNoTagTab;
class UPlayerSlotOptionsRebindingTab;
class UPlayerSlotOptionsSliderTab;
class UPlayerSlotOptionsTabInterface;
class UPlayerSlotOptionsTagDeleteTab;
class UPlayerSlotOptionsTagEntryTab;
class UPlayerSlotPlatformsTab;
class UPlayerSlotRightStickTab;
class UPlayerSlotStickSensitivityTab;
class UTagPlayerSlotOptionsTab;
class UTopBarPlayerSlotPopup;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotOptionsMenuWidget : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarPlayerSlotPopup* ParentPopup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsHomeTab* BP_HomeTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTagPlayerSlotOptionsTab* BP_TagsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsTagEntryTab* BP_TagEntryTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotCustomControlsTab* BP_ControlsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsBindingsTab* BP_BindingsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotRightStickTab* BP_RightStickTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotAirParryTab* BP_AirParryTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotAirGrabTab* BP_AirGrabTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotStickSensitivityTab* BP_SensitivityTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotNetworkSettingsTab* BP_NetworkTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsRebindingTab* BP_RebindingTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsSliderTab* BP_SliderTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsTagDeleteTab* BP_DeleteTagTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotIconsTab* BP_IconsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotPlatformsTab* BP_PlatformsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotDeathEffectsTab* BP_DeathEffectsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotAccountDetailsTab* BP_AccountDetailsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsNoTagTab* BP_NoTagTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsConfirmTab* BP_ConfirmTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_OuterBorderTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_OuterBorderBottom;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPlayerSlotOptionsTabInterface*> Tabs;
    
public:
    UPlayerSlotOptionsMenuWidget();

    UFUNCTION(BlueprintCallable)
    void OpenMenu(bool OpenToTags, ARivalsPlayerController* InPlayerController, bool IsTopBar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRebinding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePlayerSlotMenuHack();
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
};

