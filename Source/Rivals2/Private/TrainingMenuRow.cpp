#include "TrainingMenuRow.h"

UTrainingMenuRow::UTrainingMenuRow() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_LeftArrowImage = NULL;
    this->BP_LeftArrow = NULL;
    this->BP_RightArrowImage = NULL;
    this->BP_RightArrow = NULL;
    this->BP_SettingName = NULL;
    this->BP_SettingValue = NULL;
    this->BP_Background = NULL;
    this->BP_ButtonInteract = NULL;
    this->HoveredMaterial = NULL;
    this->DefaultMaterial = NULL;
    this->DefaultIndex = 0;
    this->Type = EValueType::String;
    this->NumberValue = 0.00f;
    this->MinNumberValue = 0.00f;
    this->MaxNumberValue = 100.00f;
    this->BoolValue = false;
}

void UTrainingMenuRow::UpdateSetting() {
}

void UTrainingMenuRow::SetNumberValue(float Value) {
}

void UTrainingMenuRow::SetFocused(bool NewHasFocus) {
}

void UTrainingMenuRow::SetCurrentIndex(int32 Index) {
}

void UTrainingMenuRow::SelectPreviousOption() {
}

void UTrainingMenuRow::SelectNextOption() {
}

void UTrainingMenuRow::OnRightArrowReleased(const int32 UserIndex) {
}

void UTrainingMenuRow::OnReleasedByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::OnLeftStickRight(ARivalsPlayerController* Controller) {
}

void UTrainingMenuRow::OnLeftStickLeft(ARivalsPlayerController* Controller) {
}

void UTrainingMenuRow::OnLeftArrowReleased(const int32 UserIndex) {
}

void UTrainingMenuRow::OnFocusedByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::IncrementNumber(float Amount) {
}

bool UTrainingMenuRow::HasFocus() {
    return false;
}

FText UTrainingMenuRow::GetDefaultValue() {
    return FText::GetEmpty();
}

FString UTrainingMenuRow::GetCurrentStringValue() {
    return TEXT("");
}

float UTrainingMenuRow::GetCurrentNumberValue() {
    return 0.0f;
}

void UTrainingMenuRow::DecrementNumber(float Amount) {
}


