#include "RankedLeaderboardEntry.h"

URankedLeaderboardEntry::URankedLeaderboardEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_StateSwitcher = NULL;
    this->BP_EntryNumberText = NULL;
    this->BP_PlayerIconImage = NULL;
    this->BP_UsernameText = NULL;
    this->BP_PlayerIconUnrankedImage = NULL;
    this->BP_UsernameUnrankedText = NULL;
    this->BP_CharacterBox = NULL;
    this->BP_ElementPrimaryImage = NULL;
    this->BP_ElementSecondaryImage = NULL;
    this->BP_CharArt = NULL;
    this->BP_RankDividerBorder = NULL;
    this->BP_RankImage = NULL;
    this->BP_EloText = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_ButtonInteract = NULL;
}

UWidget* URankedLeaderboardEntry::OnCustomButtonNavigate(EUINavigation InNavigation) {
    return NULL;
}

void URankedLeaderboardEntry::OnButtonUnhovered(const int32 UserIndex) {
}

void URankedLeaderboardEntry::OnButtonHovered(const int32 UserIndex) {
}


