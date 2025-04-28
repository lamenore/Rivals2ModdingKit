#include "StageSelectPlayerSlot.h"

UStageSelectPlayerSlot::UStageSelectPlayerSlot() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_RightSidePlayerColorMat = NULL;
    this->BP_LeftSidePlayerColorMat = NULL;
    this->BP_RightSidePlayerColorBorder = NULL;
    this->BP_CharacterStockIconImage = NULL;
    this->BP_UsernameText = NULL;
    this->BP_CharacterText = NULL;
    this->BP_LeftSidePlayerColorBorder = NULL;
    this->BP_PlayerNumText = NULL;
    this->BP_PlayerRankBox = NULL;
    this->BP_PlayerRankDisplay = NULL;
    this->BP_PlayerPingBox = NULL;
    this->BP_PlayerNetStats = NULL;
    this->BP_PlayerWinStreakBox = NULL;
    this->BP_PlayerWinStreakDisplay = NULL;
    this->ParentStageSelect = NULL;
}


