#include "ArcadeModeDifficultyWidget.h"

UArcadeModeDifficultyWidget::UArcadeModeDifficultyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_LeftButton = NULL;
    this->BP_RightButton = NULL;
    this->BP_DifficultyText = NULL;
    this->BP_ScoreTextEasy = NULL;
    this->BP_ScoreTextMedium = NULL;
    this->BP_ScoreTextHard = NULL;
    this->BP_EasyMedal = NULL;
    this->BP_MediumMedal = NULL;
    this->BP_HardMedal = NULL;
}

void UArcadeModeDifficultyWidget::UpdateState(const URivalsCharacterDefinition* CharacterDefinition) {
}

void UArcadeModeDifficultyWidget::ShowDifficultyButtons() {
}

void UArcadeModeDifficultyWidget::SetDifficultyText(ERivalsArcadeModeDifficultySetting Difficulty) {
}

void UArcadeModeDifficultyWidget::OnRightReleased() {
}

void UArcadeModeDifficultyWidget::OnLeftReleased() {
}

void UArcadeModeDifficultyWidget::HideDifficultyButton(URivalsButtonWidget* Button) {
}


