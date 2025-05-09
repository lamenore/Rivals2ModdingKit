#include "CharacterSelectScreen.h"

UCharacterSelectScreen::UCharacterSelectScreen() {
    this->MaxBackPressTime = 0.75f;
    this->MinBackPressTime = 0.16f;
    this->MaxItemsPerRow = 4;
    this->WBP_CharacterButtonClass = NULL;
    this->WBP_EmptyCharacterButtonClass = NULL;
    this->BP_LeftSideVerticalBox = NULL;
    this->BP_LeftSideRow1 = NULL;
    this->BP_LeftSideRow2 = NULL;
    this->BP_LeftSideRow3 = NULL;
    this->BP_RandomBox = NULL;
    this->BP_OnlineStateTimer = NULL;
    this->BP_RandomSelectButton = NULL;
    this->BP_RightSideVerticalBox = NULL;
    this->BP_RightSideRow1 = NULL;
    this->BP_RightSideRow2 = NULL;
    this->BP_RightSideRow3 = NULL;
    this->BP_MidScreenBGImage = NULL;
    this->BP_MidScreenText = NULL;
    this->BP_BotMatchDetails_ScaleBox = NULL;
    this->BP_BotMatchDetails = NULL;
    this->BP_CssChat_ScaleBox = NULL;
    this->BP_CSS_Chat = NULL;
    this->BP_PlayerSlot0 = NULL;
    this->BP_PlayerSlot1 = NULL;
    this->BP_PlayerSlot2 = NULL;
    this->BP_PlayerSlot3 = NULL;
    this->BP_ScaleBox_Difficulty = NULL;
    this->BP_ArcadeModeDifficulty = NULL;
    this->BP_ScaleBox_Score = NULL;
    this->BP_EntryAnim = NULL;
    this->BP_BGReadyAnim = NULL;
    this->BP_ReadyTextAnim = NULL;
    this->BP_UnreadyTextAnim = NULL;
    this->BP_ScoreSwitchAnim = NULL;
    this->BP_TrialModeScore = NULL;
    this->PreviousCharacter = NULL;
}

void UCharacterSelectScreen::OnPlaytestLoadedFor(const int32 PlayerSlot) {
}

void UCharacterSelectScreen::OnInitSessionState(const ERivalsSessionState SessionState) {
}

void UCharacterSelectScreen::OnBotMatchLevelUp() {
}


