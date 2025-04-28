#include "RockPaperScissorsWidget.h"

URockPaperScissorsWidget::URockPaperScissorsWidget() {
    this->BP_Team1RivalsButtonWidget = NULL;
    this->BP_Team2RivalsButtonWidget = NULL;
    this->BP_Team1TextBlock = NULL;
    this->BP_Team2TextBlock = NULL;
    this->BP_TimerBlock = NULL;
    this->BP_PostGameMessageTextBlock = NULL;
    this->Team1State = Choosing;
    this->Team2State = Choosing;
    this->BP_Team1Switcher = NULL;
    this->BP_Team2Switcher = NULL;
    this->BP_Team1MoveRevealSwitcher = NULL;
    this->BP_Team2MoveRevealSwitcher = NULL;
    this->BP_Team1CharacterSwitcher = NULL;
    this->BP_Team2CharacterSwitcher = NULL;
    this->BP_Team1RockGestureDisplayer = NULL;
    this->BP_Team1PaperGestureDisplayer = NULL;
    this->BP_Team1ScissorsGestureDisplayer = NULL;
    this->BP_Team1PassGestureDisplayer = NULL;
    this->BP_Team2RockGestureDisplayer = NULL;
    this->BP_Team2PaperGestureDisplayer = NULL;
    this->BP_Team2ScissorsGestureDisplayer = NULL;
    this->BP_Team2PassGestureDisplayer = NULL;
    this->MaxRoundTime = 0.00f;
}

void URockPaperScissorsWidget::BP_OnButtonActionPressed(const TEnumAsByte<RPSGesture> GesturePressed, const int32& PlayerIndex) {
}


