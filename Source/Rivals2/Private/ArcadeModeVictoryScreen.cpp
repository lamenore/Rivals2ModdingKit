#include "ArcadeModeVictoryScreen.h"

UArcadeModeVictoryScreen::UArcadeModeVictoryScreen() {
    this->BP_OverallMedal = NULL;
    this->BP_TimeText = NULL;
    this->BP_ResultsXP = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_BackgroundImage = NULL;
    this->BP_EntryAnim = NULL;
    this->BP_TransitionAnim = NULL;
    this->BP_ExitAnim = NULL;
    this->BP_BonusXPAnim = NULL;
}

void UArcadeModeVictoryScreen::StartXpAnimation() {
}

void UArcadeModeVictoryScreen::StartCoinSFX() {
}

bool UArcadeModeVictoryScreen::ShouldDisplayXpForSlot(const int32& PlayerSlot) {
    return false;
}

void UArcadeModeVictoryScreen::SetCharacterBackground(FName CharacterName) {
}

void UArcadeModeVictoryScreen::ProcessXpUpdate(const FResultsXpUpdateInfo XpUpdate) {
}

void UArcadeModeVictoryScreen::ProcessNextReward() {
}

void UArcadeModeVictoryScreen::PlayCoinTotalAppearSFX() {
}

void UArcadeModeVictoryScreen::PlayCharacterBGM(FName CharacterName) {
}

FResultsXpUpdateInfo UArcadeModeVictoryScreen::GetXpUpdateForSlot(const int32& PlayerSlot) {
    return FResultsXpUpdateInfo{};
}

TScriptInterface<IXpUpdateDisplayInterface> UArcadeModeVictoryScreen::GetXpUpdateDisplayInterface() {
    return NULL;
}

FString UArcadeModeVictoryScreen::GetTimeString(int32 Frames) {
    return TEXT("");
}

void UArcadeModeVictoryScreen::EndCoinSFX() {
}




void UArcadeModeVictoryScreen::AttemptReturnToCSS() {
}


