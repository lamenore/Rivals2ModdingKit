#include "ArcadeMedalWidget.h"

UArcadeMedalWidget::UArcadeMedalWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ArcadeMedalType = ERivalsArcadeMedalType::None;
    this->bIsSmall = false;
    this->BP_MedalImage = NULL;
    this->BP_MedalShine = NULL;
    this->BP_MedalFlash = NULL;
    this->BP_SizeBox = NULL;
    this->SizeBoxWidthOverride = 0.00f;
    this->SizeBoxHeightOverride = 0.00f;
    this->BP_Particles = NULL;
    this->BP_EntryAnim = NULL;
    this->BP_QualityMedalIdle = NULL;
}

void UArcadeMedalWidget::SetMedalType(ERivalsArcadeMedalType MedalType) {
}

void UArcadeMedalWidget::PlayEntryAnim() {
}

UTexture2D* UArcadeMedalWidget::GetMedalTexture(ERivalsArcadeMedalType MedalType) {
    return NULL;
}


