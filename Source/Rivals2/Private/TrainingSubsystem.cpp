#include "TrainingSubsystem.h"

UTrainingSubsystem::UTrainingSubsystem() {
    this->EdgeguardSpawnDirection = ERivalsFacingDirection::Left;
    this->EdgeguardHeight = EEdgeguardHeight::Random;
    this->EdgeguardPlayerDamage = 0;
    this->EdgeguardCpuDamage = 70;
    this->bCpuWasEdgeguarded = false;
    this->bCpuDiedNormally = true;
    this->CpuKillFrame = 2147483647;
    this->EdgeguardRespawnTimer = 0;
    this->bRecordingInputs = false;
    this->bLoopPlayback = true;
    this->bAutoRestore = false;
    this->CurrentRecordingFrame = -1;
    this->CpuRecordingIndex = 255;
    this->CpuRecordingFacingDir = (ERivalsFacingDirection)0;
    this->CpuPlaybackMode = ERivalsCpuPlaybackMode::Disabled;
    this->TrainingGrid = NULL;
    this->bGridVisible = false;
    this->bGeometryVisible = false;
    this->TrainingSettings = NULL;
    this->BaseUIWidget = NULL;
    this->InputHistoryWidget = NULL;
    this->SuccessCount = 0;
    this->bStageLoadInProgress = false;
    this->CurrentTrainingGame = ETrainingGameMode::None;
}

void UTrainingSubsystem::StartEyebreakStage() {
}

void UTrainingSubsystem::SpawnRandomEye() {
}

void UTrainingSubsystem::SpawnEye(FVector2D Location) {
}

void UTrainingSubsystem::SpawnEdgeguardCPU(ERivalsFacingDirection FacingDirection) {
}

void UTrainingSubsystem::ShowTraining() {
}

void UTrainingSubsystem::ShowStage() {
}

void UTrainingSubsystem::ShowEnvironment() {
}

void UTrainingSubsystem::SetupTrainingPlatforms(FName StageName) {
}

void UTrainingSubsystem::SetTrainingStage(FName StageName) {
}

void UTrainingSubsystem::SetTrainingPlatformsVisible(bool IsVisible) {
}

void UTrainingSubsystem::SetTrainingGridVisible(bool IsVisible) {
}

void UTrainingSubsystem::SetTrainingGameMode(ETrainingGameMode GameMode) {
}

void UTrainingSubsystem::SetEdgeguardHeight(EEdgeguardHeight Height) {
}

void UTrainingSubsystem::SetEdgeguardDir(ERivalsFacingDirection Dir) {
}

void UTrainingSubsystem::QueueForMatchmaking() {
}

void UTrainingSubsystem::OpenTrainingMode() {
}

void UTrainingSubsystem::OnStageHidden() {
}

void UTrainingSubsystem::OnMatchRestarted(ERivalsSessionState SessionState) {
}

void UTrainingSubsystem::OnMatchFound() {
}

void UTrainingSubsystem::OnLeaveTrainingMode() {
}

void UTrainingSubsystem::OnLeaveCSS() {
}

void UTrainingSubsystem::LoadTrainingLevel() {
}

bool UTrainingSubsystem::IsTrainingStage() {
    return false;
}

bool UTrainingSubsystem::IsTrainingGridVisible() {
    return false;
}

bool UTrainingSubsystem::IsTrainingGeometryVisible() {
    return false;
}

bool UTrainingSubsystem::IsEyeBreak() {
    return false;
}

bool UTrainingSubsystem::IsEdgeguard() {
    return false;
}

void UTrainingSubsystem::InitTrainingStage() {
}

void UTrainingSubsystem::InitTrainingMode() {
}

void UTrainingSubsystem::InitTrainingGame(ETrainingGameMode GameMode) {
}

void UTrainingSubsystem::InitEyeBreak() {
}

void UTrainingSubsystem::InitEdgeguard() {
}

void UTrainingSubsystem::IncrementSuccesses() {
}

void UTrainingSubsystem::HideTraining() {
}

void UTrainingSubsystem::HideStage() {
}

void UTrainingSubsystem::HideEnvironment() {
}

ETrainingGameMode UTrainingSubsystem::GetTrainingGameMode() {
    return ETrainingGameMode::None;
}

int32 UTrainingSubsystem::GetSuccessCount() {
    return 0;
}

FName UTrainingSubsystem::GetSublevelName(FName StageName, ETrainingSublevel SublevelType) {
    return NAME_None;
}

UInputHistoryWidget* UTrainingSubsystem::GetInputHistoryWidget() {
    return NULL;
}

ARivalsGameStateEntity* UTrainingSubsystem::GetGameState() {
    return NULL;
}

int32 UTrainingSubsystem::GetGameplayFrame() {
    return 0;
}

URivalsStageData* UTrainingSubsystem::GetCurrentStageData() {
    return NULL;
}

UTrainingModeUIBase* UTrainingSubsystem::GetBaseUIWidget() {
    return NULL;
}

void UTrainingSubsystem::GameplayTick() {
}


