#include "CSSTopBar.h"

UCSSTopBar::UCSSTopBar() {
    this->BP_RegionNameHorizontalBox = NULL;
    this->BP_RegionNameTextBox = NULL;
    this->BP_BackAreaBorder = NULL;
    this->BP_BackAreaHoverBorder = NULL;
    this->BP_OnHoldVisualContainer = NULL;
    this->BP_BackProgressBar = NULL;
    this->BP_SettingsButton = NULL;
    this->BP_GameRuleBox = NULL;
    this->BP_TourneyModeDisplay = NULL;
    this->BP_TeamsDisplay = NULL;
    this->BP_StockCountDisplay = NULL;
    this->BP_TimeDisplay = NULL;
    this->BP_BackHeldAnim = NULL;
    this->BP_BackReleasedAnim = NULL;
    this->BP_BackOnHoverAnim = NULL;
    this->BP_BackOnUnHoverAnim = NULL;
    this->ParentScreen = NULL;
}

void UCSSTopBar::OnBackAreaButtonUnhovered() {
}

void UCSSTopBar::OnBackAreaButtonLostFocus(const int32 UserIndex) {
}

void UCSSTopBar::OnBackAreaButtonHovered() {
}

void UCSSTopBar::OnBackAreaButtonFocus(const int32 UserIndex) {
}


