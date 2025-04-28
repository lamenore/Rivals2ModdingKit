#include "StageSelectButton.h"

UStageSelectButton::UStageSelectButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_OuterBorder = NULL;
    this->BP_OuterBorderDark = NULL;
    this->BP_StageArtContainer = NULL;
    this->BP_StageImage = NULL;
    this->BP_StageSkinControlBorder = NULL;
    this->BP_PrevStageSkinDisplayer = NULL;
    this->BP_StageSkinIcon = NULL;
    this->BP_NextStageSkinDisplayer = NULL;
    this->BP_BanControlBorder = NULL;
    this->BP_StageBanIcon = NULL;
    this->BP_LockIconBorder = NULL;
    this->BP_StageBanDisplayer = NULL;
    this->BP_StageBannedBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_BanAnim = NULL;
    this->BP_UnBanAnim = NULL;
    this->ParentStageSelect = NULL;
    this->StageData = NULL;
}

void UStageSelectButton::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void UStageSelectButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UStageSelectButton::OnHoveredByPlayer(const int32 UserIndex) {
}

void UStageSelectButton::OnAction4ReleasedByPlayer(const int32 UserIndex) {
}

void UStageSelectButton::OnAction3ReleasedByPlayer(const int32 UserIndex) {
}

void UStageSelectButton::CyclePreviousStageSkin(const int32 UserIndex) {
}

void UStageSelectButton::CycleNextStageSkin(const int32 UserIndex) {
}


