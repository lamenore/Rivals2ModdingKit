#include "PersistentScreenWidget.h"

UPersistentScreenWidget::UPersistentScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_TempMatchmakingStatusText = NULL;
    this->BP_VersionText = NULL;
    this->BP_BottomLeftContainer = NULL;
}

void UPersistentScreenWidget::SetVersionVisibility(ESlateVisibility InVisibility) {
}


