#include "StageSelectScreen.h"

UStageSelectScreen::UStageSelectScreen() {
    this->MinBackPressTime = 0.16f;
    this->MaxBackPressTime = 0.75f;
    this->StageSelectPageClass = NULL;
    this->StageSelectSkinButtonClass = NULL;
    this->HoldingBackPlayer = NULL;
    this->BP_StageBoundBorder = NULL;
    this->BP_StageBoundCanvas = NULL;
    this->BP_StageSelectedBoundCanvas = NULL;
    this->BP_StageDetailBox = NULL;
    this->BP_TopBlastzoneValue = NULL;
    this->BP_SideBlastzoneValue = NULL;
    this->BP_BottomBlastzoneValue = NULL;
    this->BP_StageWidthValue = NULL;
    this->BP_StrikeBindingBox = NULL;
    this->BP_StrikeButtonDisaplyer = NULL;
    this->BP_StrikeStageText = NULL;
    this->BP_CallToActionPanel = NULL;
    this->BP_CallToActionBorder = NULL;
    this->BP_AlertPlayerContainer = NULL;
    this->BP_AlertPlayerNumTextBlock = NULL;
    this->BP_AlertActionTextBlock = NULL;
    this->BP_AlertActionObjectTextBlock = NULL;
    this->BP_RPSCTABinding = NULL;
    this->BP_StageImage = NULL;
    this->BP_StageSelectStageText = NULL;
    this->BP_RandomImageOverlay = NULL;
    this->BP_ArrowContainer = NULL;
    this->BP_CompBGOverlay = NULL;
    this->BP_StageEntrySwitcher = NULL;
    this->BP_LeftPageButton = NULL;
    this->BP_RightPageButton = NULL;
    this->BP_StageSkinPanel = NULL;
    this->BP_StageSkinBox = NULL;
    this->BP_PlayerSlot1 = NULL;
    this->BP_MatchHistoryBox = NULL;
    this->BP_PlayerSlot2 = NULL;
    this->BP_PlayerSlot3 = NULL;
    this->BP_PlayerSlot4 = NULL;
    this->BP_OnlineStateTimer = NULL;
    this->BP_SwitchStageAnim = NULL;
    this->BP_SwitchPageAnim = NULL;
    this->BP_StageSkinPanelAppearAnim = NULL;
    this->BP_StageSkinPanelHideAnim = NULL;
    this->RPSWidget = NULL;
}

void UStageSelectScreen::OnInitSessionState(const ERivalsSessionState SessionState) {
}


