#include "GameOutroWidget.h"

UGameOutroWidget::UGameOutroWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ClearTexture = NULL;
    this->GameTexture = NULL;
    this->GameOverTexture = NULL;
    this->BP_BodyText = NULL;
}

void UGameOutroWidget::OnMatchEnd() {
}

bool UGameOutroWidget::IsGameOver() {
    return false;
}


