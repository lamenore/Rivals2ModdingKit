#include "RivalsTutorialSubsystem.h"

URivalsTutorialSubsystem::URivalsTutorialSubsystem() {
    this->Orby = NULL;
    this->OrbyChargeBar = NULL;
    this->TutorialHUD = NULL;
    this->bKilledByTutorial = false;
    this->bCanDoAirdodgeAttack = false;
    this->CurrentDifficulty = ERivalsTutorialDifficulty::None;
    this->CurrentType = ERivalsTutorialType::None;
    this->CurrentStage = 0;
    this->PreviousStage = 0;
    this->ActionSuccessCounter = 0;
    this->MaxActionSuccesses = 3;
    this->CurrentDialogueIndex = 0;
    this->DialogueQueue = NULL;
    this->bDialogueShouldEndLevel = false;
    this->bDialogeShouldMoveOrby = false;
    this->PrevFacingDirection = 0.00f;
    this->CurrentFacingDirection = 0.00f;
    this->bWaitingToStartTutorial = false;
}

void URivalsTutorialSubsystem::UpdateOffense() {
}

void URivalsTutorialSubsystem::UpdateDialogueTriggers() {
}

void URivalsTutorialSubsystem::UpdateDefense() {
}

void URivalsTutorialSubsystem::UpdateCheckpoints() {
}

void URivalsTutorialSubsystem::UpdateActionText() {
}

void URivalsTutorialSubsystem::UnlockAllActions() {
}

void URivalsTutorialSubsystem::StartTutorialLevel() {
}

void URivalsTutorialSubsystem::SpawnSpike(ARivalsSpikeSpawn* SpikeSpawn) {
}

void URivalsTutorialSubsystem::SpawnOrby(ARivalsOrbySpawn* OrbySpawn) {
}

void URivalsTutorialSubsystem::ShowDialogue(URivalsDialogueGroup* Dialogue, bool bShowChar) {
}

void URivalsTutorialSubsystem::SetLevelType(ERivalsTutorialType LevelType) {
}

void URivalsTutorialSubsystem::SetHUDWidget(UTutorialHUD* TutorialHUDWidget) {
}

void URivalsTutorialSubsystem::SetDifficulty(ERivalsTutorialDifficulty Difficulty) {
}

void URivalsTutorialSubsystem::SetActionLockedForPlayer(ERivalsBufferedInputAction Action, bool bIsLocked) {
}

void URivalsTutorialSubsystem::SaveProgress() {
}

void URivalsTutorialSubsystem::ResetLevel() {
}

void URivalsTutorialSubsystem::PlayTaunt() {
}

void URivalsTutorialSubsystem::OnTutorialStageChange() {
}

void URivalsTutorialSubsystem::OnLevelStart() {
}

void URivalsTutorialSubsystem::OnLevelEnd() {
}

void URivalsTutorialSubsystem::OnFacingDirChanged() {
}

void URivalsTutorialSubsystem::OnDialogueOpened() {
}

void URivalsTutorialSubsystem::OnDialogueClosed() {
}

void URivalsTutorialSubsystem::OnActionFailed() {
}

void URivalsTutorialSubsystem::LockAllActions() {
}

void URivalsTutorialSubsystem::LoadTutorialLevel(ERivalsTutorialDifficulty Difficulty, ERivalsTutorialType TutorialType) {
}

UTutorialSaveGame* URivalsTutorialSubsystem::LoadProgress() {
    return NULL;
}

void URivalsTutorialSubsystem::KillPlayer() {
}

void URivalsTutorialSubsystem::InitTutorial() {
}

void URivalsTutorialSubsystem::IncrementActionSuccesses() {
}

UMatchHUDWidget* URivalsTutorialSubsystem::GetMatchHUDWidget(UObject* WorldContextObject) {
    return NULL;
}

ERivalsTutorialType URivalsTutorialSubsystem::GetLevelType() {
    return ERivalsTutorialType::None;
}

ERivalsTutorialDifficulty URivalsTutorialSubsystem::GetDifficulty() {
    return ERivalsTutorialDifficulty::None;
}

uint8 URivalsTutorialSubsystem::GetActionSuccesses() {
    return 0;
}

FText URivalsTutorialSubsystem::GetActionString() {
    return FText::GetEmpty();
}

URivalsTutorialSubsystem* URivalsTutorialSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void URivalsTutorialSubsystem::EndLevel() {
}

void URivalsTutorialSubsystem::CompleteTutorial() {
}

void URivalsTutorialSubsystem::CloseShutter() {
}

void URivalsTutorialSubsystem::AdvanceTutorialStage() {
}


