#include "PlayerSlotOptionsButtonWidget.h"

UPlayerSlotOptionsButtonWidget::UPlayerSlotOptionsButtonWidget() {
    this->UseNavigationDelegate = false;
    this->ButtonLabel = TEXT("Default Button Label");
    this->bMultilineTooltip = false;
    this->SliderValue = 100;
    this->DisplayAreaType = EPlayerSlotOptionButtonDisplayAreaType::Any;
    this->DisplayType = EPlayerSlotOptionButtonDisplayType::Any;
    this->ButtonType = EPlayerSlotOptionButtonType::Button;
    this->SliderType = EPlayerSlotOptionButtonSliderType::Percent;
    this->BP_Highlight1 = NULL;
    this->BP_Highlight2 = NULL;
    this->bBackArrowActive = false;
    this->bOpenURL = false;
    this->BP_BackArrow = NULL;
    this->BP_Check = NULL;
    this->BP_ButtonLabelTextBlock = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_SliderValueTextBlock = NULL;
    this->BP_SliderValueTypeText = NULL;
    this->BP_ButtonLabelContainer = NULL;
    this->BP_BindingDisplayerContainer = NULL;
    this->BP_SliderValueContainer = NULL;
    this->BP_IconContainer = NULL;
    this->BP_MappingDisplayer0 = NULL;
    this->BP_MappingDisplayer1 = NULL;
    this->BP_MappingDisplayer2 = NULL;
    this->BP_MappingDisplayer3 = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
}

void UPlayerSlotOptionsButtonWidget::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void UPlayerSlotOptionsButtonWidget::OnReleased(const int32 UserIndex) {
}

void UPlayerSlotOptionsButtonWidget::OnReceivedFocusByPlayer(const int32 UserIndex) {
}

void UPlayerSlotOptionsButtonWidget::OnPressed(const int32 UserIndex) {
}

UWidget* UPlayerSlotOptionsButtonWidget::OnNavigateButtons(EUINavigation NavigationDirection) {
    return NULL;
}

void UPlayerSlotOptionsButtonWidget::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UPlayerSlotOptionsButtonWidget::OnHoveredFocusByPlayer(const int32 UserIndex) {
}

void UPlayerSlotOptionsButtonWidget::OnAction4Released(const int32 PlayerIndex) {
}


