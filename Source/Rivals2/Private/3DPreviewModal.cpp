#include "3DPreviewModal.h"

U3DPreviewModal::U3DPreviewModal() {
    this->Asset = NULL;
    this->OutCharacterDisplayer = NULL;
    this->ShadowCharacterDisplayer = NULL;
    this->BP_TitleText = NULL;
    this->BP_CloseButtonBox = NULL;
    this->BP_CloseButtonDisplay = NULL;
    this->BP_CycleColorsButtonBox = NULL;
    this->BP_CycleColorsButtonDisplay = NULL;
    this->BP_PlayAnimationButtonBox = NULL;
    this->BP_PlayAnimationButtonDisplay = NULL;
    this->BP_RotateButtonBox = NULL;
    this->BP_RotateButtonDisplay = NULL;
    this->BP_ItemImage = NULL;
    this->BP_CurrencyImage = NULL;
    this->BP_CostText = NULL;
    this->BP_PurchaseButton = NULL;
    this->BP_DescriptionText = NULL;
    this->BP_PaletteBox = NULL;
    this->BP_PaletteBorderDefault = NULL;
    this->BP_PaletteBorderRed = NULL;
    this->BP_PaletteBorderGreen = NULL;
    this->BP_PaletteBorderBlue = NULL;
}

void U3DPreviewModal::ReplayAnimation(int32 UserIndex) {
}

void U3DPreviewModal::Purchase() {
}

void U3DPreviewModal::PlayTaunt() {
}

void U3DPreviewModal::CycleColorsForward(int32 UserIndex) {
}

void U3DPreviewModal::CycleColorsBackward(int32 UserIndex) {
}

void U3DPreviewModal::CycleColors(bool backwards) {
}


