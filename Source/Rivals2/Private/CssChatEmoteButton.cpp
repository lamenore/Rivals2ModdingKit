#include "CssChatEmoteButton.h"

UCssChatEmoteButton::UCssChatEmoteButton() : UUserWidget(FObjectInitializer::Get()) {
    this->bUseNavigationDelegate = false;
    this->BP_Border = NULL;
    this->BP_EmoteImage = NULL;
    this->BP_ButtonLabelTextBlock = NULL;
    this->BP_FavoriteBox = NULL;
    this->BP_ButtonInteract = NULL;
    this->ParentTab = NULL;
    this->EmoteData = NULL;
}

void UCssChatEmoteButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UCssChatEmoteButton::OnPressedByPlayer(const int32 UserIndex) {
}

UWidget* UCssChatEmoteButton::OnNavigateButtons(EUINavigation NavigationDirection) {
    return NULL;
}

void UCssChatEmoteButton::OnFocusLostByPlayer(const int32 UserIndex) {
}

void UCssChatEmoteButton::OnFocusedByPlayer(const int32 UserIndex) {
}

void UCssChatEmoteButton::OnAction3ReleasedByPlayer(const int32 UserIndex) {
}






