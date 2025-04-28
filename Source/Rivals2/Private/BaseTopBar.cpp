#include "BaseTopBar.h"

UBaseTopBar::UBaseTopBar() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ScreenNameTextBox = NULL;
    this->BP_BackAreaButton = NULL;
}

void UBaseTopBar::OnBackAreaButtonReleased(const int32 UserIndex) {
}


