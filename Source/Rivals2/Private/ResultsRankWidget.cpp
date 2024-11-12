#include "ResultsRankWidget.h"

UResultsRankWidget::UResultsRankWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerSlotIndex = 0;
    this->ParentResults = NULL;
    this->BP_RankScaleBox = NULL;
    this->BP_RankIconImage = NULL;
    this->BP_RankNameText = NULL;
    this->BP_PrevEloText = NULL;
    this->BP_DeltaEloText = NULL;
    this->BP_NewEloText = NULL;
    this->BP_PlacementsScaleBox = NULL;
    this->BP_PlacementsHoriBox = NULL;
    this->BP_PlacementCountText = NULL;
}

void UResultsRankWidget::StartRankUpdateAnim() {
}

void UResultsRankWidget::ResumeRankUpdateAnim() {
}

void UResultsRankWidget::PlayRankUpSound() {
}

void UResultsRankWidget::PauseRankUpdateAnim() {
}

bool UResultsRankWidget::OnActivatedFromBP(UResultsScreenWidget* Parent) {
    return false;
}






