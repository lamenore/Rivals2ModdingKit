#include "StoreDropdown.h"

UStoreDropdown::UStoreDropdown() : UUserWidget(FObjectInitializer::Get()) {
    this->UsePrefix = false;
    this->SelectedOptionIndex = 0;
    this->BP_BGNormalMaterial = NULL;
    this->BP_BGHoverMaterial = NULL;
    this->BP_BGBorder = NULL;
    this->BP_NameText = NULL;
    this->BP_ArrowImage = NULL;
    this->BP_ButtonInteract = NULL;
}

void UStoreDropdown::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UStoreDropdown::OnReleaseByPlayer(const int32 UserIndex) {
}

UWidget* UStoreDropdown::OnNavigateFromWidget(EUINavigation Direction) {
    return NULL;
}

void UStoreDropdown::OnHoverByPlayer(const int32 UserIndex) {
}


