#include "HorizonMultiToggleButtonWidget.h"
#include "Components/SlateWrapperTypes.h"

UHorizonMultiToggleButtonWidget::UHorizonMultiToggleButtonWidget() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->Button_ToggleState_Prev = NULL;
    this->Button_ToggleState_Next = NULL;
    this->TextBlock_CurrentState = NULL;
    this->Image_CurrentState = NULL;
    this->bLoopToggleState = false;
    this->CurrentStateIndex = -1;
}

void UHorizonMultiToggleButtonWidget::ToggleState_Prev() {
}

void UHorizonMultiToggleButtonWidget::ToggleState_Next() {
}

void UHorizonMultiToggleButtonWidget::SetLoopToggleState(bool InLoopToggleState) {
}

void UHorizonMultiToggleButtonWidget::SetCurrentStateIndex(int32 InStateIndex) {
}

int32 UHorizonMultiToggleButtonWidget::GetToggleState_PrevIndex() {
    return 0;
}

int32 UHorizonMultiToggleButtonWidget::GetToggleState_NextIndex() {
    return 0;
}

bool UHorizonMultiToggleButtonWidget::GetLoopToggleState() {
    return false;
}

int32 UHorizonMultiToggleButtonWidget::GetCurrentStateIndex() {
    return 0;
}


