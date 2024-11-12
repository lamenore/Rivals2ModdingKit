#include "BaseScreenWidget.h"

UBaseScreenWidget::UBaseScreenWidget() {
    this->MenuState = ERivalsMenuState::None;
    this->ShowCursor = true;
    this->MenuMusicEnabled = false;
    this->AllowedUiInputMode = EInputMode::Any;
    this->MenuNavigationType = EMenuNavigationType::MultiUser;
    this->ShouldLockMouseToViewport = false;
    this->BP_TopBar = NULL;
}


