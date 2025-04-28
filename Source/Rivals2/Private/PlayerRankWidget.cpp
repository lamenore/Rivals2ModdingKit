#include "PlayerRankWidget.h"

UPlayerRankWidget::UPlayerRankWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_SizeBox_RankIcon = NULL;
    this->BP_ScaleBox_RankIcon = NULL;
    this->BP_RankIconImage = NULL;
    this->BP_OuterBorderLight = NULL;
    this->BP_OuterBorderDark = NULL;
    this->BP_OuterBorderSheen = NULL;
    this->BP_InnerBorderDark = NULL;
    this->BP_InnerBorder = NULL;
    this->BP_ScaleBox_RankText = NULL;
    this->BP_RankEloText = NULL;
}

void UPlayerRankWidget::SetupWithRank(int32 InElo, int32 InSeasonMatchCount, int32 InSeasonWinCount, int32 InSeasonIndex, int32 InLeaderboardPos) {
}


