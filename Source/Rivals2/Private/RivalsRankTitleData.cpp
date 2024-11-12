#include "RivalsRankTitleData.h"

FRivalsRankTitleData::FRivalsRankTitleData() {
    this->casual_elo_start_value = 0;
    this->casual_elo_placement_k = 0;
    this->casual_elo_postplacement_k = 0;
    this->casual_elo_established_k = 0;
    this->casual_elo_placement_threshold = 0;
    this->casual_elo_established_threshold = 0;
    this->ranked_elo_start_value = 0;
    this->ranked_elo_placement_k = 0;
    this->ranked_elo_postplacement_k = 0;
    this->ranked_elo_established_k = 0;
    this->ranked_elo_placement_threshold = 0;
    this->ranked_elo_established_treshold = 0;
    this->ranked_elo_bronze_threshold = 0;
    this->ranked_elo_silver_threshold = 0;
    this->ranked_elo_gold_threshold = 0;
    this->ranked_elo_platinum_threshold = 0;
    this->ranked_elo_diamond_threshold = 0;
    this->ranked_elo_master_threshold = 0;
    this->skill_beginner_elo_start = 0;
    this->skill_intermediate_elo_start = 0;
    this->skill_expert_elo_start = 0;
}

