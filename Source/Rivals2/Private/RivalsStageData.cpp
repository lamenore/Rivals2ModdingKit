#include "RivalsStageData.h"

URivalsStageData::URivalsStageData() {
    this->ExcludeFromBuild = true;
    this->SideBlastzoneXPos = 0.00f;
    this->TopBlastzoneZPos = 0.00f;
    this->BottomBlastzoneZPos = 0.00f;
    this->RespawnZPos = 700.00f;
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


