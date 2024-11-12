#include "ProgressionTrackEntry.h"

UProgressionTrackEntry::UProgressionTrackEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->EntryNumber = 0;
    this->BP_NumberNormal = NULL;
    this->BP_NumberUnlocked = NULL;
    this->BP_NumberHovered = NULL;
    this->BP_RewardNormal = NULL;
    this->BP_RewardUnlocked = NULL;
    this->BP_RewardHovered = NULL;
    this->BP_SelectedPanel = NULL;
    this->BP_RewardBorder = NULL;
    this->BP_RewardImage = NULL;
    this->BP_TintImage = NULL;
    this->BP_UnlockedImage = NULL;
    this->BP_NumberBorder = NULL;
    this->BP_EntryNumberText = NULL;
}

void UProgressionTrackEntry::OnUnhover(const int32 UserIndex) {
}

void UProgressionTrackEntry::OnReleasedByPlayer(const int32 UserIndex) {
}

void UProgressionTrackEntry::OnHover(const int32 UserIndex) {
}


