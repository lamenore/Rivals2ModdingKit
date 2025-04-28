#include "StoreTabButton.h"

UStoreTabButton::UStoreTabButton() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon = NULL;
    this->BP_IconImage = NULL;
    this->IconOffsetX = 0.00f;
    this->IconOffsetY = 0.00f;
    this->BP_OpenPanel = NULL;
    this->BP_TabName = NULL;
    this->BP_ButtonInteract = NULL;
    this->StoreTab = NULL;
    this->TabName = FText::FromString(TEXT("TAB NAME"));
    this->IsActive = false;
    this->ParentTab = NULL;
}

void UStoreTabButton::OnButtonReleased(const int32 UserIndex) {
}


