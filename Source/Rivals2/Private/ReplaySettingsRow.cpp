#include "ReplaySettingsRow.h"

UReplaySettingsRow::UReplaySettingsRow() : UUserWidget(FObjectInitializer::Get()) {
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
    this->Type = EReplaySettingsType::String;
    this->NumberValue = 0.00f;
    this->BoolValue = false;
    this->ParentTab = NULL;
    this->BP_Activate = NULL;
    this->BP_Deactivate = NULL;
}

void UReplaySettingsRow::UpdateSetting() {
}

void UReplaySettingsRow::SetParentMenu(UReplaySettingsTabInterface* InParentMenu) {
}

void UReplaySettingsRow::SetNumberValue(float Value) {
}

void UReplaySettingsRow::SetCurrentIndex(int32 Index) {
}

void UReplaySettingsRow::SelectPreviousOption() {
}

void UReplaySettingsRow::SelectNextOption() {
}

void UReplaySettingsRow::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void UReplaySettingsRow::OnRightArrowReleased(const int32 UserIndex) {
}

void UReplaySettingsRow::OnReleasedByPlayer(const int32 UserIndex) {
}

UWidget* UReplaySettingsRow::OnNavigate(EUINavigation Direction) {
    return NULL;
}

void UReplaySettingsRow::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UReplaySettingsRow::OnLeftStickRight(float Value) {
}

void UReplaySettingsRow::OnLeftStickLeft(float Value) {
}

void UReplaySettingsRow::OnLeftArrowReleased(const int32 UserIndex) {
}

void UReplaySettingsRow::OnHoveredByPlayer(const int32 UserIndex) {
}

void UReplaySettingsRow::OnFocusedByPlayer(const int32 UserIndex) {
}

void UReplaySettingsRow::IncrementNumber(float Amount) {
}

bool UReplaySettingsRow::HasFocus() {
    return false;
}

FText UReplaySettingsRow::GetCurrentStringValue() {
    return FText::GetEmpty();
}

float UReplaySettingsRow::GetCurrentNumberValue() {
    return 0.0f;
}

void UReplaySettingsRow::DecrementNumber(float Amount) {
}


