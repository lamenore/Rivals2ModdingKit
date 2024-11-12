#include "HorizonFlipbookWidget.h"

UHorizonFlipbookWidget::UHorizonFlipbookWidget() {
    this->bIsStartTick = true;
    this->NumOfLoop = 0;
    this->bAnimationFinished = false;
    this->PaperFlipbook = NULL;
}

void UHorizonFlipbookWidget::StopAnimation() {
}

void UHorizonFlipbookWidget::SetFlipbook(UPaperFlipbook* InFlipbook) {
}

void UHorizonFlipbookWidget::SetCurrentAnimationDuration(float InDuration) {
}

void UHorizonFlipbookWidget::ResumeAnimation() {
}

void UHorizonFlipbookWidget::ResetAnimation() {
}

void UHorizonFlipbookWidget::PlayAnimation() {
}

void UHorizonFlipbookWidget::PauseAnimation() {
}

float UHorizonFlipbookWidget::GetCurrentAnimationDuration() {
    return 0.0f;
}


