#include "ProgressionHeader.h"

UProgressionHeader::UProgressionHeader() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_CharacterArtImage = NULL;
    this->BP_CharacterImage = NULL;
    this->BP_CharacterNameText = NULL;
    this->BP_LevelText = NULL;
    this->BP_CurrentLevelXpText = NULL;
    this->BP_MaxLevelXpText = NULL;
    this->BP_XpProgressBar = NULL;
    this->CharacterDefinition = NULL;
}


