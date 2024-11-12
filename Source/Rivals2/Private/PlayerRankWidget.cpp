#include "PlayerRankWidget.h"

UPlayerRankWidget::UPlayerRankWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ScaleBox_RankIcon = NULL;
    this->BP_RankIconImage = NULL;
    this->BP_ScaleBox_RankText = NULL;
    this->BP_RankEloText = NULL;
}

void UPlayerRankWidget::SetupWithRank(int32 InElo, int32 InSeasonMatchCount) {
}


