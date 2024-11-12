#include "PreviewItemEntry.h"

UPreviewItemEntry::UPreviewItemEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_BGBorder = NULL;
    this->BP_ItemImage = NULL;
    this->BP_ItemNameTextBlock = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->AssetData = NULL;
}

void UPreviewItemEntry::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UPreviewItemEntry::OnReleaseByPlayer(const int32 UserIndex) {
}

UWidget* UPreviewItemEntry::OnNavigateButtons(EUINavigation InNavigation) {
    return NULL;
}

void UPreviewItemEntry::OnHoverByPlayer(const int32 UserIndex) {
}


