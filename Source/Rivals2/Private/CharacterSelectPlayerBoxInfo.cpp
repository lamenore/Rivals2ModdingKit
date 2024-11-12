#include "CharacterSelectPlayerBoxInfo.h"

FCharacterSelectPlayerBoxInfo::FCharacterSelectPlayerBoxInfo() {
    this->Character = NULL;
    this->Skin = NULL;
    this->ColorSlot = ERivalsColorSlot::None;
    this->bHasCharacterSelected = false;
    this->bIsChangingSettings = false;
    this->bIsReady = false;
    this->Wins = 0;
    this->Ping = 0;
}

