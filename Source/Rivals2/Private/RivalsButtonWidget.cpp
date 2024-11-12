#include "RivalsButtonWidget.h"

URivalsButtonWidget::URivalsButtonWidget() {
    this->ClickSoundEvent = EMenuSoundType::None;
    this->HoverOrFocusSoundEvent = EMenuSoundType::None;
    this->MinWidth = 0;
    this->MinHeight = 0;
    this->SupportsMouseFocus = false;
}

void URivalsButtonWidget::SetIsButtonFocusable(const bool bIsFocusable) {
}

void URivalsButtonWidget::OnUnhoveredRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnReleasedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnReceivedFocusRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnPressedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnLostFocusRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnHoveredRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnClickedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnAction4ReleasedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnAction4PressedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnAction3ReleasedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnAction3PressedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnAction2ReleasedRelay(const int32 UserIndex) {
}

void URivalsButtonWidget::OnAction2PressedRelay(const int32 UserIndex) {
}


