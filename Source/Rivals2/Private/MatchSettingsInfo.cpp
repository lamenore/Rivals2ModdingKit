#include "MatchSettingsInfo.h"

FMatchSettingsInfo::FMatchSettingsInfo() {
    this->TimeSettingInMinutes = 0;
    this->StockSetting = 0;
    this->bTeamsEnabled = false;
    this->bTeamAttackEnabled = false;
    this->bRandomizeTeams = false;
    this->bTourneyModeEnabled = false;
    this->WinsRequired = 0;
    this->InitialPlayerCount = 0;
}

