#include "PlayFabPlayStreamMatchReportPlayerObject.h"

FPlayFabPlayStreamMatchReportPlayerObject::FPlayFabPlayStreamMatchReportPlayerObject() {
    this->winner = false;
    this->Team = 0;
    this->damage_dealt = 0;
    this->damage_taken = 0;
    this->ko_count = 0;
    this->MatchDurationXp = 0;
    this->MatchDuration = 0;
    this->DamageDealtXp = 0;
    this->DamageDealt = 0;
    this->DamageTakenXp = 0;
    this->DamageTaken = 0;
    this->KoCountXp = 0;
    this->KoCount = 0;
    this->TotalXp = 0;
    this->beforeMatchCharXp = 0;
    this->beforeMatchCharLvl = 0;
    this->newCharXp = 0;
    this->newCharLvl = 0;
    this->bCharLvlUp = false;
    this->beforeMatchElo = 0;
    this->NewElo = 0;
    this->DeltaElo = 0;
    this->bIsLobbyMatch = false;
}

