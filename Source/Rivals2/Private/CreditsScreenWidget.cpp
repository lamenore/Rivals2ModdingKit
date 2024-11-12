#include "CreditsScreenWidget.h"

UCreditsScreenWidget::UCreditsScreenWidget() {
    this->ScrollSpeed = 100;
    this->MaxScrollSpeed = 1000;
    this->CreditsDataAssetClass = NULL;
    this->SectionWidgetClass = NULL;
    this->BP_CreditsContainer = NULL;
    this->BP_TextBlock = NULL;
    this->BP_KSCreditsContainer = NULL;
    this->BP_CatchAllButton = NULL;
}

void UCreditsScreenWidget::OnCatchAllButtonReleased(const int32 UserIndex) {
}


