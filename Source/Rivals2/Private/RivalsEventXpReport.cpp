#include "RivalsEventXpReport.h"

FRivalsEventXpReport::FRivalsEventXpReport() {
    this->MatchDuration = 0;
    this->MatchDurationXp = 0;
    this->DamageDealt = 0;
    this->DamageDealtXp = 0;
    this->DamageTaken = 0;
    this->DamageTakenXp = 0;
    this->KoCount = 0;
    this->KoCountXp = 0;
    this->TotalXp = 0;
    this->beforeMatchEventXp = 0;
    this->beforeMatchEventLvl = 0;
    this->newEventXp = 0;
    this->newEventLvl = 0;
    this->bEventLvlUp = false;
    this->localOrLobbyMatchXpNerfPercent = 0;
    this->eventSkinXpBuffPercent = 0;
    this->xpBuffPercent = 0;
}

