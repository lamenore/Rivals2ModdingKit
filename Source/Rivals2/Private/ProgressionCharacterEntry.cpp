#include "ProgressionCharacterEntry.h"

UProgressionCharacterEntry::UProgressionCharacterEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_HoveredPanel = NULL;
    this->BP_NormalPanel = NULL;
    this->BP_CharacterText = NULL;
    this->BP_XpProgressBar = NULL;
    this->BP_CharacterImage = NULL;
    this->BP_ButtonInteract = NULL;
    this->CharacterDefinition = NULL;
}

void UProgressionCharacterEntry::OnUnhoveredByPlayer(const int32 PlayerIndex) {
}

void UProgressionCharacterEntry::OnReleasedByPlayer(const int32 PlayerIndex) {
}

UWidget* UProgressionCharacterEntry::OnNavigateButtons(EUINavigation InNavigation) {
    return NULL;
}

void UProgressionCharacterEntry::OnHoveredByPlayer(const int32 PlayerIndex) {
}


