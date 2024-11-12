#include "VersusScreenPlayerInfo.h"

FVersusScreenPlayerInfo::FVersusScreenPlayerInfo() {
    this->bIsActive = false;
    this->Character = NULL;
    this->Skin = NULL;
    this->RandomSetting = ERivalsRandomCharacterSetting::None;
    this->ColorSlot = ERivalsColorSlot::None;
    this->PlayerTeam = ERivalsColorSlot::None;
    this->Wins = 0;
}

