#include "RegionOverridePopup.h"

URegionOverridePopup::URegionOverridePopup() {
    this->WBP_RegionPreferenceEntry = NULL;
    this->BP_ChoiceContainer = NULL;
    this->BP_CloseButton = NULL;
    this->BP_PageForwardButton = NULL;
    this->BP_PageBackButton = NULL;
    this->BP_CurrentPage = NULL;
}

void URegionOverridePopup::OnRegionOverrideChanged() {
}

void URegionOverridePopup::OnPageForward() {
}

void URegionOverridePopup::OnPageBack() {
}

UWidget* URegionOverridePopup::OnNavigateUpFromBottomBar(EUINavigation NavigationDirection) {
    return NULL;
}

UWidget* URegionOverridePopup::OnNavigateDownFromTopBar(EUINavigation NavigationDirection) {
    return NULL;
}


