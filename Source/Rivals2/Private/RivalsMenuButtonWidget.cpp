#include "RivalsMenuButtonWidget.h"

URivalsMenuButtonWidget::URivalsMenuButtonWidget() {
    this->ButtonDisplayMode = 0;
    this->ButtonBindingDisplayMode = EMenuButtonWidgetBindingMode::None;
    this->ButtonIconTexture = NULL;
    this->EventTitle = FText::FromString(TEXT("Button Text"));
    this->UseUrl = false;
    this->BP_IconScaleBox = NULL;
    this->BP_IconImage = NULL;
    this->BP_TextScaleBox = NULL;
    this->BP_ButtonTextTextBlock = NULL;
    this->BP_ButtonTextRichTextBlock = NULL;
    this->BP_ButtonMappingDisplayer = NULL;
    this->BP_BGImage = NULL;
    this->BP_ContentSizeBox = NULL;
    this->BP_ContentMaxHeight = 0.00f;
    this->BP_ContentMinHeight = 0.00f;
    this->BP_ContentMaxWidth = 0.00f;
    this->BP_ContentMinWidth = 0.00f;
    this->IsTextButton = false;
    this->IsInHoverState = false;
    this->BP_LockedPanel = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_NormalAnim = NULL;
    this->BP_LinkIcon = NULL;
    this->bIsLocked = false;
}

void URivalsMenuButtonWidget::UnlockButton() {
}

void URivalsMenuButtonWidget::SyncVisuals() {
}

void URivalsMenuButtonWidget::SyncButtonMode() {
}

void URivalsMenuButtonWidget::SyncButtonLock() {
}

void URivalsMenuButtonWidget::SyncButtonDisplay() {
}

void URivalsMenuButtonWidget::OnUnhover() {
}

void URivalsMenuButtonWidget::OnReleasedByPlayer(const int32 UserIndex) {
}

void URivalsMenuButtonWidget::OnPressedByPlayer(const int32 UserIndex) {
}

void URivalsMenuButtonWidget::OnLostFocus(const int32 UserIndex) {
}

void URivalsMenuButtonWidget::OnHover() {
}

void URivalsMenuButtonWidget::OnFocus(const int32 UserIndex) {
}

void URivalsMenuButtonWidget::OnClick() {
}

void URivalsMenuButtonWidget::LockButton() {
}

bool URivalsMenuButtonWidget::IsButtonLocked() {
    return false;
}

void URivalsMenuButtonWidget::HideButtonMapping() {
}

bool URivalsMenuButtonWidget::HasFocus() const {
    return false;
}

void URivalsMenuButtonWidget::DisplayButton(FKey Key) {
}

void URivalsMenuButtonWidget::DisplayAction(FName Action, ARivalsPlayerController* PlayerController, const int32 BindingIndex) {
}


