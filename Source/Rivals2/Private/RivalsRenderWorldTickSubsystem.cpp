#include "RivalsRenderWorldTickSubsystem.h"

URivalsRenderWorldTickSubsystem::URivalsRenderWorldTickSubsystem() {
    this->CurrentTimeScale = 1.00f;
    this->CurrentGlobalTimeDilation = 1.00f;
    this->PreviousGlobalTimeDilation = 1.00f;
}

void URivalsRenderWorldTickSubsystem::SetTimeScale(float TimeScale) {
}

URivalsRenderWorldTickSubsystem* URivalsRenderWorldTickSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}


