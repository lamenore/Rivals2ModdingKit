#include "ResultsXpWidget.h"

UResultsXpWidget::UResultsXpWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MinimumAnimationLength = 1.00f;
    this->MaximumAnimationLength = 2.50f;
    this->AnimationLengthEaseExponent = 2.00f;
    this->AnimationEaseExponent = 2.00f;
    this->bHideImageBG = false;
    this->PlayerSlotIndex = 0;
    this->BP_ImageBG = NULL;
    this->BP_LeftProgressBar = NULL;
    this->BP_RightProgressBar = NULL;
    this->BP_ProgressBarGlow = NULL;
    this->BP_ProgressBarBackdrop = NULL;
    this->BP_LeftProgressBarOverlay = NULL;
    this->BP_RightProgressBarOverlay = NULL;
    this->BP_ProgressBarGlowOverlay = NULL;
    this->BP_MatchXp = NULL;
    this->BP_CurrentLevelText = NULL;
    this->BP_CurrentXpText = NULL;
    this->BP_CapXpText = NULL;
    this->BP_TrackItem = NULL;
}

void UResultsXpWidget::StartXpUpdateAnimation() {
}

void UResultsXpWidget::ResumeXpAnimation() {
}

void UResultsXpWidget::PlayLevelUpSound() {
}

void UResultsXpWidget::PauseXpAnimation() {
}

void UResultsXpWidget::OnCycledToFromBP() {
}

void UResultsXpWidget::OnCycledAwayFromBP() {
}

void UResultsXpWidget::OnActivatedFromBP(TScriptInterface<IXpUpdateDisplayInterface> InParent, int32 InPlayerSlot) {
}

UUserWidget* UResultsXpWidget::GetParentWidget() {
    return NULL;
}






