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
    this->Disabled = false;
    this->ParentTab = NULL;
    this->BP_Activate = NULL;
    this->BP_Deactivate = NULL;
}

void UTrainingMenuRow::UpdateSetting() {
}

void UTrainingMenuRow::SetParentMenu(UTrainingMenuTabInterface* InParentMenu) {
}

void UTrainingMenuRow::SetNumberValue(float Value) {
}

void UTrainingMenuRow::SetCurrentIndex(int32 Index) {
}

void UTrainingMenuRow::SelectPreviousOption() {
}

void UTrainingMenuRow::SelectNextOption() {
}

void UTrainingMenuRow::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::OnRightArrowReleased(const int32 UserIndex) {
}

void UTrainingMenuRow::OnReleasedByPlayer(const int32 UserIndex) {
}

UWidget* UTrainingMenuRow::OnNavigate(EUINavigation Direction) {
    return NULL;
}

void UTrainingMenuRow::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::OnLeftStickRight(float Value) {
}

void UTrainingMenuRow::OnLeftStickLeft(float Value) {
}

void UTrainingMenuRow::OnLeftArrowReleased(const int32 UserIndex) {
}

void UTrainingMenuRow::OnHoveredByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::OnFocusedByPlayer(const int32 UserIndex) {
}

void UTrainingMenuRow::IncrementNumber(float Amount) {
}

bool UTrainingMenuRow::HasFocus() {
    return false;
}

FString UTrainingMenuRow::GetCurrentStringValue() {
    return TEXT("");
}

float UTrainingMenuRow::GetCurrentNumberValue() {
    return 0.0f;
}

void UTrainingMenuRow::DecrementNumber(float Amount) {
}


