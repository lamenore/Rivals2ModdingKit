#include "CssPuckButton.h"

UCssPuckButton::UCssPuckButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_CSSPuck = NULL;
    this->BP_ButtonInteract = NULL;
    this->ParentCSSMenu = NULL;
    this->ParentCharacterButton = NULL;
    this->ParentRandomButton = NULL;
}

void UCssPuckButton::OnButtonUnhovered(const int32 UserIndex) {
}

void UCssPuckButton::OnButtonReleased(const int32 UserIndex) {
}

void UCssPuckButton::OnButtonHovered(const int32 UserIndex) {
}


