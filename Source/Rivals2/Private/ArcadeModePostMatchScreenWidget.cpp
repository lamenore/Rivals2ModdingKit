#include "ArcadeModePostMatchScreenWidget.h"

UArcadeModePostMatchScreenWidget::UArcadeModePostMatchScreenWidget() {
    this->BP_ResultsTop = NULL;
    this->BP_TopEnterAnim = NULL;
    this->BP_BottomEnterAnim = NULL;
    this->BP_BottomFinalEnterAnim = NULL;
    this->BP_LetterBox_Close = NULL;
    this->BP_StageTime = NULL;
    this->BP_StageTime_Frames = NULL;
    this->BP_TotalTime = NULL;
    this->BP_TotalTime_Frames = NULL;
    this->BP_VictoryCanvas = NULL;
    this->BP_GameOverCanvas = NULL;
    this->BP_MedalHistoryContainer = NULL;
    this->BP_StageMedal = NULL;
    this->BP_MedalsTopRow = NULL;
    this->BP_MedalsBottomRow = NULL;
    this->WidgetLockoutTimer = 1.00f;
    this->PlayingOutroAnimation = false;
    this->bIsVictory = false;
    this->StageFramesElapsed = 0;
    this->TotalFramesElapsed = 0;
}

void UArcadeModePostMatchScreenWidget::UpdateArcadeMedals() {
}


void UArcadeModePostMatchScreenWidget::PlayIntroAnim() {
}


void UArcadeModePostMatchScreenWidget::GoToNextStage() {
}


