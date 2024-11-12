#include "ResultsXpUpdateInfo.h"

FResultsXpUpdateInfo::FResultsXpUpdateInfo() {
    this->PlayerSlot = 0;
    this->bWasSuccessful = false;
    this->TotalXp = 0;
    this->PreMatchXp = 0;
    this->PreMatchLvl = 0;
    this->NewXp = 0;
    this->NewLvl = 0;
    this->bDidLvlUp = false;
    this->MatchDuration = 0;
    this->MatchDurationXp = 0;
    this->DamageDealt = 0;
    this->DamageDealtXp = 0;
    this->DamageTaken = 0;
    this->DamageTakenXp = 0;
    this->KoCount = 0;
    this->KoCountXp = 0;
    this->XpCoins = 0;
}

