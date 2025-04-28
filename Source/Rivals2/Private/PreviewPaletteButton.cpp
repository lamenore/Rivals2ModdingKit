#include "PreviewPaletteButton.h"

UPreviewPaletteButton::UPreviewPaletteButton() : UUserWidget(FObjectInitializer::Get()) {
    this->OuterBorderActive = NULL;
    this->InnerBorderActive = NULL;
    this->OuterBorderInactive = NULL;
    this->InnerBorderInactive = NULL;
    this->SizeX = 0.00f;
    this->SizeY = 0.00f;
    this->BP_ButtonInteract = NULL;
    this->BP_SizeBox = NULL;
    this->BP_Color = NULL;
    this->BP_OuterBorder = NULL;
    this->BP_InnerBorder = NULL;
    this->BP_Glow = NULL;
    this->BP_ColorSheen = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UPreviewPaletteButton::OnReleasedByPlayer(int32 UserIndex) {
}

void UPreviewPaletteButton::OnPressedByPlayer(int32 UserIndex) {
}

void UPreviewPaletteButton::OnLostFocus(int32 UserIndex) {
}

void UPreviewPaletteButton::OnFocus(int32 UserIndex) {
}


