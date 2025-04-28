#include "PlayerWinStreakWidget.h"

UPlayerWinStreakWidget::UPlayerWinStreakWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsRightSide = false;
    this->BP_Text_WinStreak = NULL;
    this->BP_StreakFire = NULL;
    this->BP_StreakEmbers = NULL;
    this->BP_FireLoopAnim = NULL;
}

void UPlayerWinStreakWidget::SetupWithWinStreak(const int32 InWinStreak) {
}

void UPlayerWinStreakWidget::SetupText(const int32 InWinStreak) {
}

void UPlayerWinStreakWidget::SetupForResults(const int32 InPrevWinStreak, const int32 InNewWinStreak) {
}





