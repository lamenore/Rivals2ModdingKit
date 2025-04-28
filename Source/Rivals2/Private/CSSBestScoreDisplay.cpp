#include "CSSBestScoreDisplay.h"

UCSSBestScoreDisplay::UCSSBestScoreDisplay() : UUserWidget(FObjectInitializer::Get()) {
    this->TotalScore = 0;
    this->BP_TitleText = NULL;
    this->BP_TotalTitleText = NULL;
    this->BP_ScoreText = NULL;
    this->BP_TotalScoreText = NULL;
}

void UCSSBestScoreDisplay::UpdateState(int32 Value, TEnumAsByte<ERivalsScoreType> ScoreType) {
}

void UCSSBestScoreDisplay::SetTotalScore(int32 Value, TEnumAsByte<ERivalsScoreType> ScoreType) {
}

void UCSSBestScoreDisplay::AddScoreToTotal(int32 Value, TEnumAsByte<ERivalsScoreType> ScoreType) {
}


