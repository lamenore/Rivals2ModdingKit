#include "FeaturedStoreBanner.h"

UFeaturedStoreBanner::UFeaturedStoreBanner() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_NormalMat = NULL;
    this->BP_HoveredMat = NULL;
    this->BP_OuterNormalMat = NULL;
    this->BP_OuterHoveredMat = NULL;
    this->BP_CoinBurst = NULL;
    this->BP_OuterBorder = NULL;
    this->BP_InnerBorder = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UFeaturedStoreBanner::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UFeaturedStoreBanner::OnReleasedByPlayer(const int32 UserIndex) {
}

void UFeaturedStoreBanner::OnReceivedFocusByPlayer(const int32 UserIndex) {
}

UWidget* UFeaturedStoreBanner::OnNavigateFromWidget(EUINavigation Direction) {
    return NULL;
}

void UFeaturedStoreBanner::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UFeaturedStoreBanner::OnHoverByPlayer(const int32 UserIndex) {
}


