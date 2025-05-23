#include "CharacterSelectPlayerInfo.h"

FCharacterSelectPlayerInfo::FCharacterSelectPlayerInfo() {
    this->PlayerSlot = 0;
    this->LocalPlayerIndex = 0;
    this->bPlayerActive = false;
    this->bPlayerReady = false;
    this->PlayerTeam = ERivalsColorSlot::None;
    this->PlayerState = ECharacterSelectPlayerState::NoChange;
    this->bRemappingMode = ERemappingMode::None;
    this->ColorSlot = ERivalsColorSlot::None;
    this->bHasCharacterSelected = false;
    this->bIsChangingSettings = false;
    this->RandomSetting = ERivalsRandomCharacterSetting::None;
    this->HoverColorSlot = ERivalsColorSlot::None;
    this->bIsCpu = false;
    this->HeldPuckSlot = 0;
    this->CpuLevel = 0;
    this->Wins = 0;
    this->Ping = 0;
    this->bIsPlaytesting = false;
    this->PlayerElo = 0;
    this->WinStreak = 0;
}

