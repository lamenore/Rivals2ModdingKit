#include "OverheadHudWidget.h"

UOverheadHudWidget::UOverheadHudWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerIndex = 0;
    this->OwnerRival = NULL;
    this->BP_TagText = NULL;
}



int32 UOverheadHudWidget::GetPoisonStacks() {
    return 0;
}

int32 UOverheadHudWidget::GetFleetStamina() {
    return 0;
}

int32 UOverheadHudWidget::GetDamage() {
    return 0;
}


