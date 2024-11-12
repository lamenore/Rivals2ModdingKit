#include "PlayerStatusHUDWidget.h"

UPlayerStatusHUDWidget::UPlayerStatusHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerIndex = -1;
    this->OwnerPlayerEntityIndex = -1;
    this->bIsOwnerEntityActive = false;
    this->PlayerPing = 0;
    this->CharacterPortrait = NULL;
    this->CharacterDefinition = NULL;
    this->SkinDefinition = NULL;
    this->ColorSlotData = NULL;
    this->StockCount = 0;
    this->bCanStealStock = false;
    this->bIsTimeMatch = false;
    this->Damage = 0;
    this->bDrawDebugText = false;
    this->StateTimer = 0;
    this->WindowNumber = 0;
    this->WindowTimer = 0;
    this->WindowLength = 0;
    this->HitpauseRemaining = 0;
    this->bGrounded = false;
    this->TargetOpacity = 1.00f;
    this->AbyssArmor = 0;
    this->OpacityHitbox = NULL;
    this->bIsTopBarSlot = false;
}

void UPlayerStatusHUDWidget::UpdatePlayerStatus() {
}


void UPlayerStatusHUDWidget::TickOpacity() {
}

void UPlayerStatusHUDWidget::SetPlayerIndex(const int32& InPlayerIndex) {
}

void UPlayerStatusHUDWidget::ResetSlot() {
}

ARivalsPlayerController* UPlayerStatusHUDWidget::GetPlayerController() const {
    return NULL;
}

FKey UPlayerStatusHUDWidget::GetKeyForInputAction(FName InputActionName) const {
    return FKey{};
}


