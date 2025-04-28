#include "ActionDisplayer.h"

UActionDisplayer::UActionDisplayer() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ActionImage = NULL;
}

void UActionDisplayer::SetAction(ERivalsBufferedInputAction Action) {
}

UTexture2D* UActionDisplayer::GetActionTexture(ERivalsBufferedInputAction Action) {
    return NULL;
}


