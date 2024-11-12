#include "PlayerSlotOptionsMenuWidget.h"

UPlayerSlotOptionsMenuWidget::UPlayerSlotOptionsMenuWidget() {
    this->PlayerSlot = 0;
    this->ParentPopup = NULL;
    this->BP_TabSwitcher = NULL;
    this->BP_HomeTab = NULL;
    this->BP_TagsTab = NULL;
    this->BP_TagEntryTab = NULL;
    this->BP_ControlsTab = NULL;
    this->BP_BindingsTab = NULL;
    this->BP_RightStickTab = NULL;
    this->BP_AirParryTab = NULL;
    this->BP_AirGrabTab = NULL;
    this->BP_SensitivityTab = NULL;
    this->BP_NetworkTab = NULL;
    this->BP_RebindingTab = NULL;
    this->BP_SliderTab = NULL;
    this->BP_DeleteTagTab = NULL;
    this->PlayerController = NULL;
    this->BP_IconsTab = NULL;
    this->BP_PlatformsTab = NULL;
    this->BP_DeathEffectsTab = NULL;
    this->BP_AccountDetailsTab = NULL;
    this->BP_NoTagTab = NULL;
    this->BP_ConfirmTab = NULL;
    this->BP_OuterBorderTop = NULL;
    this->BP_OuterBorderBottom = NULL;
}

void UPlayerSlotOptionsMenuWidget::OpenMenu(bool OpenToTags, ARivalsPlayerController* InPlayerController, bool IsTopBar) {
}

bool UPlayerSlotOptionsMenuWidget::IsRebinding() {
    return false;
}

bool UPlayerSlotOptionsMenuWidget::IsLocked() {
    return false;
}


void UPlayerSlotOptionsMenuWidget::CloseMenu() {
}


