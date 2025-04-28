#include "RivalsCharacterArcadeReward.h"

FRivalsCharacterArcadeReward::FRivalsCharacterArcadeReward() {
    this->reward_type = ERivalsArcadeRewardType::ITEM_GUID;
    this->amount_rewarded = 0;
    this->update_character_progression_xp_response_is_set = false;
}

