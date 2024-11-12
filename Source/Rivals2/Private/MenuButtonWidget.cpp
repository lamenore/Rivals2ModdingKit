#include "MenuButtonWidget.h"

UMenuButtonWidget::UMenuButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonMappingDisplayer = NULL;
    this->bShowButtonIcon = false;
    this->ButtonIconTexture = NULL;
    this->bShowButtonText = false;
    this->bShowButtonMapping = false;
    this->Style = EDisplayStyle::Normal;
    this->Colored = false;
    this->DisplayFor = EDisplayType::Both;
    this->ShouldListenForInputChange = true;
    this->HorizontalAlignment = HAlign_Fill;
    this->TextPadding = 0.00f;
    this->bIsLocked = false;
    this->BP_ScaleBox = NULL;
    this->BP_SizeBox = NULL;
    this->BP_ButtonTextSizeBox = NULL;
    this->BP_BGImage = NULL;
    this->BP_BGImage_1 = NULL;
    this->BP_IconScaleBox = NULL;
    this->BP_IconImage = NULL;
    this->BP_ButtonTextTextBlock = NULL;
    this->BP_LockScaleBox = NULL;
    this->BP_LockImage = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_NormalAnim = NULL;
    this->BP_LockedAnim = NULL;
    this->WidthOverride = 0.00f;
    this->HeightOverride = 0.00f;
    this->MinDesiredWidth = 0.00f;
    this->MinDesiredHeight = 0.00f;
    this->MaxDesiredWidth = 0.00f;
    this->MaxDesiredHeight = 0.00f;
    this->bOverride_WidthOverride = false;
    this->bOverride_HeightOverride = false;
    this->bOverride_MinDesiredWidth = false;
    this->bOverride_MinDesiredHeight = false;
    this->bOverride_MaxDesiredWidth = false;
    this->bOverride_MaxDesiredHeight = false;
    this->Stretch = EStretch::None;
    this->StretchDirection = EStretchDirection::Both;
    this->UserSpecifiedScale = 0.00f;
    this->IgnoreInheritedScale = false;
    this->TextTransformPolicy = ETextTransformPolicy::None;
}

void UMenuButtonWidget::SetWidthOverride(float InWidthOverride) {
}

void UMenuButtonWidget::SetUserSpecifiedScale(float InUserSpecifiedScale) {
}

void UMenuButtonWidget::SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection) {
}

void UMenuButtonWidget::SetStretch(TEnumAsByte<EStretch::Type> InStretch) {
}

void UMenuButtonWidget::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void UMenuButtonWidget::SetMinDesiredHeight(float InMinDesiredHeight) {
}

void UMenuButtonWidget::SetMaxDesiredWidth(float InMaxDesiredWidth) {
}

void UMenuButtonWidget::SetMaxDesiredHeight(float InMaxDesiredHeight) {
}

void UMenuButtonWidget::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
}

void UMenuButtonWidget::SetHeightOverride(float InHeightOverride) {
}

void UMenuButtonWidget::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void UMenuButtonWidget::OnReleasedByPlayer(const int32 UserIndex) {
}

void UMenuButtonWidget::OnPressedByPlayer(const int32 UserIndex) {
}

void UMenuButtonWidget::OnHoveredByPlayer(const int32 UserIndex) {
}

void UMenuButtonWidget::OnButtonFocusLostByPlayer(const int32 UserIndex) {
}

void UMenuButtonWidget::OnButtonFocusedByPlayer(const int32 UserIndex) {
}

void UMenuButtonWidget::ClearWidthOverride() {
}

void UMenuButtonWidget::ClearMinDesiredWidth() {
}

void UMenuButtonWidget::ClearMinDesiredHeight() {
}

void UMenuButtonWidget::ClearMaxDesiredWidth() {
}

void UMenuButtonWidget::ClearMaxDesiredHeight() {
}

void UMenuButtonWidget::ClearHeightOverride() {
}


