#include "ArcadeModeGameOverWidget.h"

UArcadeModeGameOverWidget::UArcadeModeGameOverWidget() {
    this->BP_ContinueButton = NULL;
    this->BP_ContinueText = NULL;
    this->BP_GiveUpButton = NULL;
    this->BP_GiveUpText = NULL;
    this->BP_TimeContainer = NULL;
    this->RivalCapture = NULL;
    this->PlatformRenderer = NULL;
    this->RivalRenderer = NULL;
    this->SequencePlayer = NULL;
    this->SequenceActor = NULL;
    this->FallingSequence = NULL;
    this->ContinueSequence = NULL;
    this->GiveUpSequence = NULL;
    this->CharacterMount = NULL;
    this->PlatformMount = NULL;
    this->bIsGameOver = false;
    this->bIsContinue = false;
    this->bIsFalling = false;
    this->ElapsedFrames = 0;
    this->ElapsedSeconds = 0.00f;
    this->BP_ToContinueAnim = NULL;
    this->BP_ToGiveUpAnim = NULL;
    this->BP_PressedAnim = NULL;
}

void UArcadeModeGameOverWidget::TauntEvent() {
}

void UArcadeModeGameOverWidget::StartFallEvent() {
}

void UArcadeModeGameOverWidget::StartFadeEvent() {
}

void UArcadeModeGameOverWidget::SetPlatformLocation(FVector Location) {
}

void UArcadeModeGameOverWidget::ReloadStage() {
}

void UArcadeModeGameOverWidget::PlayGiveUpSequence() {
}

void UArcadeModeGameOverWidget::PlayFallSequence() {
}

void UArcadeModeGameOverWidget::PlayContinueSequence() {
}

void UArcadeModeGameOverWidget::PlatformHitEvent() {
}

void UArcadeModeGameOverWidget::OnSequenceFinished() {
}

void UArcadeModeGameOverWidget::OnGiveUpReleased(const int32 UserIndex) {
}

void UArcadeModeGameOverWidget::OnGiveUpFocused(const int32 UserIndex) {
}

void UArcadeModeGameOverWidget::OnContinueReleased(const int32 UserIndex) {
}

void UArcadeModeGameOverWidget::OnContinueFocused(const int32 UserIndex) {
}

void UArcadeModeGameOverWidget::IdleEvent() {
}

void UArcadeModeGameOverWidget::GetupEvent() {
}

void UArcadeModeGameOverWidget::GameOver() {
}

void UArcadeModeGameOverWidget::EndFadeEvent() {
}

void UArcadeModeGameOverWidget::Continue() {
}


