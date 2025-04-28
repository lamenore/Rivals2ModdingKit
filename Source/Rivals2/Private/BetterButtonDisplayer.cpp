#include "BetterButtonDisplayer.h"

UBetterButtonDisplayer::UBetterButtonDisplayer() : UUserWidget(FObjectInitializer::Get()) {
    this->BindingIndex = 0;
    this->Style = EDisplayStyle::Normal;
    this->Colored = false;
    this->DisplayFor = EDisplayType::Both;
    this->ShouldListenForInputChange = true;
    this->bPlayAnimation = false;
    this->bLoopAnim = false;
    this->AnimationToPlay = EAnimationToPlay::Press;
    this->PlayedAnim = NULL;
    this->BP_PressAnim = NULL;
    this->BP_LeftTiltAnim = NULL;
    this->BP_RightTiltAnim = NULL;
    this->BP_UpTiltAnim = NULL;
    this->BP_DownTiltAnim = NULL;
    this->BP_LeftStrongAnim = NULL;
    this->BP_RightStrongAnim = NULL;
    this->BP_UpStrongAnim = NULL;
    this->BP_DownStrongAnim = NULL;
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
    this->BP_ScaleBox = NULL;
    this->BP_ButtonIconPanel = NULL;
    this->BP_SizeBox = NULL;
    this->BP_Switcher = NULL;
    this->BP_NothingIcon = NULL;
    this->BP_ButtonIcon = NULL;
    this->BP_KeyboardPanel = NULL;
    this->BP_KeyboardGlyphSwitcher = NULL;
    this->BP_KeyboardText = NULL;
    this->BP_KeyboardGlyphImage = NULL;
    this->CurrentPlayerController = NULL;
}

void UBetterButtonDisplayer::SetWidthOverride(float InWidthOverride) {
}

void UBetterButtonDisplayer::SetUserSpecifiedScale(float InUserSpecifiedScale) {
}

void UBetterButtonDisplayer::SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection) {
}

void UBetterButtonDisplayer::SetStretch(TEnumAsByte<EStretch::Type> InStretch) {
}

void UBetterButtonDisplayer::SetPlayerController(ARivalsPlayerController* InPlayerController) {
}

void UBetterButtonDisplayer::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void UBetterButtonDisplayer::SetMinDesiredHeight(float InMinDesiredHeight) {
}

void UBetterButtonDisplayer::SetMaxDesiredWidth(float InMaxDesiredWidth) {
}

void UBetterButtonDisplayer::SetMaxDesiredHeight(float InMaxDesiredHeight) {
}

void UBetterButtonDisplayer::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
}

void UBetterButtonDisplayer::SetHeightOverride(float InHeightOverride) {
}

void UBetterButtonDisplayer::SetAnimationToPlay(EAnimationToPlay InAnimationToPlay) {
}

void UBetterButtonDisplayer::DisplayNothing() {
}

void UBetterButtonDisplayer::DisplayKey(const FKey Key) {
}

void UBetterButtonDisplayer::DisplayAction(FName InActionName, ARivalsPlayerController* InPlayerController, const int32 InBindingIndex) {
}

void UBetterButtonDisplayer::ClearWidthOverride() {
}

void UBetterButtonDisplayer::ClearMinDesiredWidth() {
}

void UBetterButtonDisplayer::ClearMinDesiredHeight() {
}

void UBetterButtonDisplayer::ClearMaxDesiredWidth() {
}

void UBetterButtonDisplayer::ClearMaxDesiredHeight() {
}

void UBetterButtonDisplayer::ClearHeightOverride() {
}


