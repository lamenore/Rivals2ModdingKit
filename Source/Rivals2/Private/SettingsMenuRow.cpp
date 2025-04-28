#include "SettingsMenuRow.h"

USettingsMenuRow::USettingsMenuRow() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_LeftArrowImage = NULL;
    this->BP_LeftArrow = NULL;
    this->BP_RightArrowImage = NULL;
    this->BP_RightArrow = NULL;
    this->BP_SettingName = NULL;
    this->BP_SettingValue = NULL;
    this->BP_Background = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_RightArrowBox = NULL;
    this->BP_LeftArrowBox = NULL;
    this->BP_LRBox = NULL;
    this->HoveredMaterial = NULL;
    this->DefaultMaterial = NULL;
    this->TrueValueText = FText::FromString(TEXT("True"));
    this->FalseValueText = FText::FromString(TEXT("False"));
    this->DefaultIndex = 0;
    this->Type = EValueType::String;
    this->NumberValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 100.00f;
    this->BoolValue = false;
    this->ParentTab = NULL;
    this->BP_Activate = NULL;
    this->BP_Deactivate = NULL;
}

void USettingsMenuRow::UpdateSetting() {
}

void USettingsMenuRow::SetParentMenu(USettingsMenuTabInterface* InParentMenu) {
}

void USettingsMenuRow::SetNumberValue(float Value) {
}

void USettingsMenuRow::SetCurrentIndex(int32 Index) {
}

void USettingsMenuRow::SelectPreviousOption() {
}

void USettingsMenuRow::SelectNextOption() {
}

void USettingsMenuRow::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void USettingsMenuRow::OnRightArrowReleased(const int32 UserIndex) {
}

void USettingsMenuRow::OnReleasedByPlayer(const int32 UserIndex) {
}

UWidget* USettingsMenuRow::OnNavigate(EUINavigation Direction) {
    return NULL;
}

void USettingsMenuRow::OnLostFocusByPlayer(const int32 UserIndex) {
}

void USettingsMenuRow::OnLeftStickRight(float Value) {
}

void USettingsMenuRow::OnLeftStickLeft(float Value) {
}

void USettingsMenuRow::OnLeftArrowReleased(const int32 UserIndex) {
}

void USettingsMenuRow::OnHoveredByPlayer(const int32 UserIndex) {
}

void USettingsMenuRow::OnFocusedByPlayer(const int32 UserIndex) {
}

void USettingsMenuRow::IncrementNumber(float Amount) {
}

bool USettingsMenuRow::HasFocus() {
    return false;
}

FString USettingsMenuRow::GetCurrentStringValue() {
    return TEXT("");
}

float USettingsMenuRow::GetCurrentNumberValue() {
    return 0.0f;
}

void USettingsMenuRow::DecrementNumber(float Amount) {
}


