#include "SSSTopBar.h"

USSSTopBar::USSSTopBar() {
    this->BP_RegionNameHorizontalBox = NULL;
    this->BP_RegionNameTextBox = NULL;
    this->BP_BackAreaBorder = NULL;
    this->BP_BackAreaHoverBorder = NULL;
    this->BP_OnHoldVisualContainer = NULL;
    this->BP_BackProgressBar = NULL;
    this->BP_BackHeldAnim = NULL;
    this->BP_BackReleasedAnim = NULL;
    this->BP_BackOnHoverAnim = NULL;
    this->BP_BackOnUnHoverAnim = NULL;
    this->ParentScreen = NULL;
}

void USSSTopBar::OnBackAreaButtonUnhovered() {
}

void USSSTopBar::OnBackAreaButtonLostFocus(const int32 UserIndex) {
}

void USSSTopBar::OnBackAreaButtonHovered() {
}

void USSSTopBar::OnBackAreaButtonFocus(const int32 UserIndex) {
}


