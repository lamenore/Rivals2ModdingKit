#include "StringDropdownOption.h"

UStringDropdownOption::UStringDropdownOption() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_SizeBox = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_BGBorder = NULL;
    this->BP_OptionNameTextBlock = NULL;
}

void UStringDropdownOption::OnReleasedByPlayer(const int32 UserIndex) {
}

UWidget* UStringDropdownOption::OnNavigateFromWidget(EUINavigation Direction) {
    return NULL;
}

void UStringDropdownOption::OnFocusLostByPlayer(const int32 UserIndex) {
}

void UStringDropdownOption::OnFocusedByPlayer(const int32 UserIndex) {
}


