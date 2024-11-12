#include "TrainingModeUIBase.h"

UTrainingModeUIBase::UTrainingModeUIBase() {
    this->BP_InputsBox = NULL;
    this->bMenuOpen = false;
    this->bGridVisible = false;
    this->bGeometryVisible = false;
}

void UTrainingModeUIBase::TrainingPlatformSetup(FName StageName) {
}

void UTrainingModeUIBase::ShowTraining(int32 Linkage) {
}

void UTrainingModeUIBase::ShowStage(int32 Linkage) {
}

void UTrainingModeUIBase::ShowResults(int32 Linkage) {
}

void UTrainingModeUIBase::ShowEnvironment(int32 Linkage) {
}

void UTrainingModeUIBase::SetTrainingStage(FName StageName) {
}

void UTrainingModeUIBase::SetTrainingPlatformsVisible(bool IsVisible) {
}

void UTrainingModeUIBase::SetTrainingGridVisible(bool IsVisible) {
}

void UTrainingModeUIBase::SetMenuOpen(bool IsOpen) {
}

void UTrainingModeUIBase::LoadTrainingLevel(FName StageName) {
}

bool UTrainingModeUIBase::IsTrainingGridVisible() {
    return false;
}

bool UTrainingModeUIBase::IsTrainingGeometryVisible() {
    return false;
}

void UTrainingModeUIBase::HideTraining(int32 Linkage) {
}

void UTrainingModeUIBase::HideStage(int32 Linkage) {
}

void UTrainingModeUIBase::HideResults(int32 Linkage) {
}

void UTrainingModeUIBase::HideEnvironment(int32 Linkage) {
}

URivalsStageData* UTrainingModeUIBase::GetCurrentStageData() {
    return NULL;
}


