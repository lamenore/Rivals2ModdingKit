#include "RockPaperScissorsWidget.h"

URockPaperScissorsWidget::URockPaperScissorsWidget() {
    this->MinBackPressTime = 0.16f;
    this->MaxBackPressTime = 0.75f;
    this->BP_TitleText = NULL;
    this->BP_TitleText1 = NULL;
    this->BP_StateTimer = NULL;
    this->BP_RPSStateSwitcher = NULL;
    this->BP_Side2ChoiceDisplay = NULL;
    this->BP_Side1ChoiceDisplay = NULL;
    this->BP_Player1OuterBorder = NULL;
    this->BP_Player1MiddleBorder = NULL;
    this->BP_Player1CharacterImage = NULL;
    this->BP_Player1CharacterImageShadow = NULL;
    this->BP_Player1CharacterImageScroll = NULL;
    this->BP_Player1NumText = NULL;
    this->BP_Player1CTAText = NULL;
    this->BP_Side1CursorButton = NULL;
    this->BP_Player2MiddleBorder = NULL;
    this->BP_Player2CharacterImage = NULL;
    this->BP_Player2CharacterImageShadow = NULL;
    this->BP_Player2CharacterImageScroll = NULL;
    this->BP_Player2NumText = NULL;
    this->BP_Player2OuterBorder = NULL;
    this->BP_Player2CTAText = NULL;
    this->BP_Side2CursorButton = NULL;
    this->BP_Side1ControlContainer = NULL;
    this->BP_Player1RockImage = NULL;
    this->BP_Player1RockDisplayer = NULL;
    this->BP_Player1PaperImage = NULL;
    this->BP_Player1PaperDisplayer = NULL;
    this->BP_Player1ScissorImage = NULL;
    this->BP_Player1ScissorDisplayer = NULL;
    this->BP_Player1PassImage = NULL;
    this->BP_Player1PassDisplayer = NULL;
    this->BP_Side2ControlContainer = NULL;
    this->BP_Player2RockDisplayer = NULL;
    this->BP_Player2RockImage = NULL;
    this->BP_Player2PaperDisplayer = NULL;
    this->BP_Player2PaperImage = NULL;
    this->BP_Player2ScissorDisplayer = NULL;
    this->BP_Player2ScissorImage = NULL;
    this->BP_Player2PassDisplayer = NULL;
    this->BP_Player2PassImage = NULL;
    this->BP_EntryAnim = NULL;
    this->BP_LeftPlayerReadyAnim = NULL;
    this->BP_RightPlayerReadyAnim = NULL;
    this->BP_LeftPlayerWinsAnim = NULL;
    this->BP_RightPlayerWinsAnim = NULL;
    this->BP_LeftPlayerWinsNoCenterAnim = NULL;
    this->BP_RightPlayerWinsNoCenterAnim = NULL;
    this->BP_BothPlayersTieAnim = NULL;
    this->BP_BothPlayersPassAnim = NULL;
    this->HoldingBackPlayer = NULL;
}

void URockPaperScissorsWidget::OnSide2CursorButtonAction4Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide2CursorButtonAction3Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide2CursorButtonAction2Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide2CursorButtonAction1Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide1CursorButtonAction4Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide1CursorButtonAction3Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide1CursorButtonAction2Released(const int32 UserIndex) {
}

void URockPaperScissorsWidget::OnSide1CursorButtonAction1Released(const int32 UserIndex) {
}


