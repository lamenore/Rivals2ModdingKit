#include "CSSGenericButton.h"

UCSSGenericButton::UCSSGenericButton() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerIcon = NULL;
    this->CPUIcon = NULL;
    this->LeftArrowIcon = NULL;
    this->RightArrowIcon = NULL;
    this->bShowIcon = true;
    this->bShowCPUIcon = false;
    this->bShowLeftArrowIcon = false;
    this->bShowRightArrowIcon = false;
    this->BP_ButtonTextPlus = NULL;
    this->BP_ButtonText = NULL;
    this->BP_ButtonIcon = NULL;
    this->BP_ButtonIconScaleBox = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_BGOuterBorder = NULL;
    this->BP_BGMidBorder = NULL;
    this->BP_BGInnerBorderLight = NULL;
    this->BP_BGInnerBorderDark = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressedAnim = NULL;
    this->BP_OnReleasedAnim = NULL;
}

void UCSSGenericButton::OnButtonUnhovered(const int32 UserIndex) {
}

void UCSSGenericButton::OnButtonReleased(const int32 UserIndex) {
}

void UCSSGenericButton::OnButtonPressed(const int32 UserIndex) {
}

void UCSSGenericButton::OnButtonHovered(const int32 UserIndex) {
}


