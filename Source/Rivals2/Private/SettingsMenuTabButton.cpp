#include "SettingsMenuTabButton.h"

USettingsMenuTabButton::USettingsMenuTabButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_Background = NULL;
    this->BP_NameText = NULL;
}

void USettingsMenuTabButton::OnReleasedByPlayer(const int32 Index) {
}


