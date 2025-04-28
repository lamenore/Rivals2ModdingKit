#include "MainMenuButtonWidget.h"

UMainMenuButtonWidget::UMainMenuButtonWidget() {
    this->NotificationCount = 0;
    this->bIsRanked = false;
    this->bIsExperimental = false;
    this->bIsAbyss = false;
    this->bShowCheckbox = false;
    this->bShowCheckmark = false;
    this->BP_NotificationSwitcher = NULL;
    this->BP_NotificationTextBlock = NULL;
    this->BP_CharacterImageR = NULL;
    this->BP_CharacterImageL = NULL;
    this->BP_CharacterSizeBoxR = NULL;
    this->BP_CharacterSizeBoxL = NULL;
    this->BP_AbyssContainer = NULL;
    this->BP_TextOnHoverImage = NULL;
    this->BP_AdditionalTextBlock = NULL;
    this->BP_NormalStateImage = NULL;
    this->BP_ExperimentalBanner = NULL;
    this->BP_CheckboxContainer = NULL;
    this->BP_Checkmark = NULL;
}

UWidget* UMainMenuButtonWidget::OnNavigate(EUINavigation Direction) {
    return NULL;
}


