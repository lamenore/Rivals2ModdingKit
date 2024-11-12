#include "InventoryTabButton.h"

UInventoryTabButton::UInventoryTabButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ActivePanel = NULL;
    this->BP_ActiveText = NULL;
    this->BP_NormalText = NULL;
    this->BP_ButtonInteract = NULL;
    this->IsActive = false;
}


