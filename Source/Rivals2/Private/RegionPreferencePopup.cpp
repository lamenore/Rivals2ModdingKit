#include "RegionPreferencePopup.h"

URegionPreferencePopup::URegionPreferencePopup() {
    this->WBP_RegionPreferenceEntry = NULL;
    this->BP_ChoiceContainer = NULL;
    this->BP_CloseButton = NULL;
    this->BP_PresetForwardButton = NULL;
    this->BP_PresetBackButton = NULL;
    this->BP_CurrentPreset = NULL;
}

void URegionPreferencePopup::OnRegionPreferencesChanged() {
}

void URegionPreferencePopup::OnPresetForward() {
}

void URegionPreferencePopup::OnPresetBack() {
}

UWidget* URegionPreferencePopup::OnNavigateUpFromBottomBar(EUINavigation NavigationDirection) {
    return NULL;
}

UWidget* URegionPreferencePopup::OnNavigateDownFromTopBar(EUINavigation NavigationDirection) {
    return NULL;
}


