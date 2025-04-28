#include "ReplaySettingsTabInterface.h"

UReplaySettingsTabInterface::UReplaySettingsTabInterface() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_RowContainer = NULL;
    this->SettingsMenu = NULL;
    this->FocusedRow = NULL;
    this->CurrentController = NULL;
}


