#include "TargetDisplayWidget.h"

UTargetDisplayWidget::UTargetDisplayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_TopRow = NULL;
    this->BP_BottomRow = NULL;
}

void UTargetDisplayWidget::UpdateTargets(int32 RemainingTargets) {
}


