#include "RPSGestureDisplayer.h"

URPSGestureDisplayer::URPSGestureDisplayer() {
    this->CurrentHandDisplayState = Rock;
    this->DisplaySide = Left;
    this->BP_InputButtonSwitcher = NULL;
    this->BP_HandGestureSwitcher = NULL;
    this->BP_HandGestureTextSwitcher = NULL;
    this->BP_InputDisplayTextBlock = NULL;
    this->BP_InputDisplayGamepadButtonImage = NULL;
    this->BP_InputDisplayKeyCapButtonImage = NULL;
    this->BP_GestureRockImage = NULL;
    this->BP_GesturePaperImage = NULL;
    this->BP_GestureScissorsImage = NULL;
}

void URPSGestureDisplayer::SetupInputDisplay(ARivalsPlayerController* PlayerController, bool IsDesignTime) {
}


