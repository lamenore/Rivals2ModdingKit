#include "PlayerNetStatsWidget.h"

UPlayerNetStatsWidget::UPlayerNetStatsWidget() {
}

void UPlayerNetStatsWidget::UpdateNetStats(int32 PingInMs) {
}

FLinearColor UPlayerNetStatsWidget::GetPingQualityColor() {
    return FLinearColor{};
}

int32 UPlayerNetStatsWidget::GetPing() {
    return 0;
}

FLinearColor UPlayerNetStatsWidget::GetJitterQualityColor() {
    return FLinearColor{};
}

int32 UPlayerNetStatsWidget::GetJitter() {
    return 0;
}


