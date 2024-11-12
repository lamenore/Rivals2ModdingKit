#include "ZetterburnBattleAI.h"

AZetterburnBattleAI::AZetterburnBattleAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PassiveVertDistance = 200.00f;
    this->PassiveHorizDistance = 400.00f;
    this->PassiveJumpChance = 0.02f;
    this->PassiveZoneChance = 0.00f;
    this->PassiveStrongChance = 0.00f;
}


