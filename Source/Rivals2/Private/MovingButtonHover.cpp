#include "MovingButtonHover.h"

UMovingButtonHover::UMovingButtonHover() : UUserWidget(FObjectInitializer::Get()) {
    this->TargetWidth = 0.00f;
    this->SidePadding = 0.00f;
    this->BP_SizeBox = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_MoveAnim = NULL;
}


