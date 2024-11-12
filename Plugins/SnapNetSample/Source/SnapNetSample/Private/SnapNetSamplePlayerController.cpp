#include "SnapNetSamplePlayerController.h"

ASnapNetSamplePlayerController::ASnapNetSamplePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->ScoreboardWidget = NULL;
}


