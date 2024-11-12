#include "CssChatEmoteTab.h"

UCssChatEmoteTab::UCssChatEmoteTab() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_CurrentPageText = NULL;
    this->BP_PageSeparatorTextBlock = NULL;
    this->BP_MaxPageText = NULL;
    this->BP_CurrentEmoteText = NULL;
    this->BP_ButtonGrid = NULL;
    this->BP_FavoriteBinding = NULL;
    this->BP_PrevPageBinding = NULL;
    this->BP_NextPageBinding = NULL;
    this->BP_EmoteButtonInstance = NULL;
    this->ParentMenu = NULL;
}

void UCssChatEmoteTab::OpenTab(ARivalsPlayerController* InPlayerController) {
}

int32 UCssChatEmoteTab::GetPlayerSlot() {
    return 0;
}

ARivalsPlayerController* UCssChatEmoteTab::GetPlayerController() {
    return NULL;
}


