#include "GenericInputFieldWidget.h"

UGenericInputFieldWidget::UGenericInputFieldWidget() {
    this->TipText = FText::FromString(TEXT("Enter Text"));
    this->ObscureText = false;
    this->HoverScaleAmount = 1.00f;
    this->PressedScaleAmount = 1.00f;
    this->BP_InputBox = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UGenericInputFieldWidget::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UGenericInputFieldWidget::OnReleasedByPlayer(const int32 UserIndex) {
}

void UGenericInputFieldWidget::OnPressedByPlayer(const int32 UserIndex) {
}

void UGenericInputFieldWidget::OnLostFocus(const int32 UserIndex) {
}

void UGenericInputFieldWidget::OnHoverByPlayer(const int32 UserIndex) {
}

void UGenericInputFieldWidget::OnFocus(const int32 UserIndex) {
}

void UGenericInputFieldWidget::EndTyping(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UGenericInputFieldWidget::BeginTyping() {
}


