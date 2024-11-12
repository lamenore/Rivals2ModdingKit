#include "StoreCheckbox.h"

UStoreCheckbox::UStoreCheckbox() : UUserWidget(FObjectInitializer::Get()) {
    this->Checked = false;
    this->BP_HoverImage = NULL;
    this->BP_CheckedBox = NULL;
    this->BP_CheckboxText = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UStoreCheckbox::SetText(FText InText) {
}

void UStoreCheckbox::SetChecked(bool InChecked) {
}

void UStoreCheckbox::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UStoreCheckbox::OnReleaseByPlayer(const int32 UserIndex) {
}

void UStoreCheckbox::OnPressedByPlayer(int32 UserIndex) {
}

UWidget* UStoreCheckbox::OnNavigateFromWidget(EUINavigation Direction) {
    return NULL;
}

void UStoreCheckbox::OnHoverByPlayer(const int32 UserIndex) {
}

bool UStoreCheckbox::IsChecked() const {
    return false;
}

FText UStoreCheckbox::GetText() const {
    return FText::GetEmpty();
}


