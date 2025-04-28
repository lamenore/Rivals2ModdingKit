#include "RivalsStageData.h"

URivalsStageData::URivalsStageData() {
    this->SideBlastzoneXPos = 0.00f;
    this->TopBlastzoneZPos = 0.00f;
    this->BottomBlastzoneZPos = 0.00f;
    this->RespawnZPos = 700.00f;
    this->bIsTourneyModeAuxPage = false;
    this->bIsDoublesStage = false;
    this->StagePickType = EStagePickType::None;
    this->StageType = EStageType::None;
    this->DoublesOverrideStageData = NULL;
}

float URivalsStageData::GetStageWidth() const {
    return 0.0f;
}

TArray<URivalsStageSkinData*> URivalsStageData::GetStageSkins() {
    return TArray<URivalsStageSkinData*>();
}

float URivalsStageData::GetSideBlastzoneDistance() const {
    return 0.0f;
}

FVector2D URivalsStageData::GetPrimaryPlatformAlignment() const {
    return FVector2D{};
}

UTexture2D* URivalsStageData::GetBoundsPreviewTexture(UObject* WorldContextObj, FLinearColor LineColor, int32 LineThickness, int32 ScaleFactor) {
    return NULL;
}


