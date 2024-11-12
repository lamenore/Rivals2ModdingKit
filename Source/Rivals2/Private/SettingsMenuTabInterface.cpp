#include "SettingsMenuTabInterface.h"

USettingsMenuTabInterface::USettingsMenuTabInterface() : UUserWidget(FObjectInitializer::Get()) {
    this->CSSWidget = NULL;
    this->BP_RowContainer = NULL;
    this->SettingsMenu = NULL;
    this->FocusedRow = NULL;
    this->CurrentController = NULL;
}


