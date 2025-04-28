#include "UpdateCharacterProgressionXpResponse.h"

FUpdateCharacterProgressionXpResponse::FUpdateCharacterProgressionXpResponse() {
    this->MatchDuration = 0;
    this->MatchDurationXp = 0;
    this->DamageDealt = 0;
    this->DamageDealtXp = 0;
    this->DamageTaken = 0;
    this->DamageTakenXp = 0;
    this->KoCount = 0;
    this->KoCountXp = 0;
    this->TotalXp = 0;
    this->beforeMatchCharXp = 0;
    this->beforeMatchCharLvl = 0;
    this->beforeMatchCumulatedCharXp = 0;
    this->newCumulatedCharXp = 0;
    this->newCharXp = 0;
    this->newCharLvl = 0;
    this->bCharLvlUp = false;
    this->localOrLobbyMatchXpNerfPercent = 0;
    this->xpBuffPercent = 0;
    this->xpCoinsBaseAmount = 0;
    this->xpCoinsBuffAmount = 0;
    this->XpCoins = 0;
    this->bIsArcadeModeCompletion = false;
}

