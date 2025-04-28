#include "PlayerNetStatsWidget.h"

UPlayerNetStatsWidget::UPlayerNetStatsWidget() {
    this->BP_Box_NetStats = NULL;
    this->BP_Box_ConnectivityBars = NULL;
    this->BP_Image_ConnectivityBars = NULL;
    this->BP_Text_Ping = NULL;
    this->BP_Text_Jitter = NULL;
}

void UPlayerNetStatsWidget::UpdateNetStats(int32 PingInMs) {
}

TSoftObjectPtr<UTexture2D> UPlayerNetStatsWidget::GetSignalImage() {
    return NULL;
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


