#include "UIButtonDisplayer.h"

UUIButtonDisplayer::UUIButtonDisplayer() {
    this->DisplayFor = EDisplayFor::Both;
    this->ShouldListenForInputChange = true;
    this->BP_InputButtonSwitcher = NULL;
    this->BP_InputDisplayGamepadButtonImage = NULL;
    this->BP_InputDisplayKeyCapButtonImage = NULL;
    this->BP_InputDisplayKeyCapTextBlock = NULL;
    this->CurrentPlayerController = NULL;
}

void UUIButtonDisplayer::DisplayNothing() {
}

void UUIButtonDisplayer::DisplayKey(const FKey Key) {
}

void UUIButtonDisplayer::DisplayIconForAction(const FName ActionName, ARivalsPlayerController* PlayerController, const int32 BindingIndex) {
}


