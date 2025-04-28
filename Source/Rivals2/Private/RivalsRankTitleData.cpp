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
    this->ranked_elo_placement_wins_threshold = 0;
    this->ranked_elo_established_treshold = 0;
    this->ranked_placement_minimum_elo = 0;
    this->ranked_placement_maximum_elo = 0;
    this->ranked_placement_median_k = 0;
    this->ranked_placement_edge_k = 0;
    this->ranked_placement_median_elo = 0;
    this->ranked_placement_edge_difference = 0;
    this->ranked_elo_bronze_threshold = 0;
    this->ranked_elo_silver_threshold = 0;
    this->ranked_elo_gold_threshold = 0;
    this->ranked_elo_platinum_threshold = 0;
    this->ranked_elo_diamond_threshold = 0;
    this->ranked_elo_master_threshold = 0;
    this->ranked_elo_grandmaster_threshold = 0;
    this->ranked_elo_aetherean_threshold = 0;
    this->ranked_aetherean_leaderboard_cap = 0;
    this->ranked_reset_target_elo = 0;
    this->ranked_reset_percentage_to_target = 0.00f;
    this->ranked_reset_min_elo = 0;
    this->ranked_reset_max_elo = 0;
    this->ranked_winstreak_global_multiplier = 0.00f;
    this->ranked_winstreak_display_start = 0;
    this->winstreak_start_threshold = 0;
    this->winstreak_base_threshold = 0;
    this->winstreak_increasing_threshold = 0;
    this->winstreak_high_threshold = 0;
    this->winstreak_peak_threshold = 0;
    this->skill_beginner_elo_start = 0;
    this->skill_intermediate_elo_start = 0;
    this->skill_expert_elo_start = 0;
    this->separator_reset_time = 0;
}

