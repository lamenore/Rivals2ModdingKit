#include "RivalsRenderWorldTickSubsystem.h"

URivalsRenderWorldTickSubsystem::URivalsRenderWorldTickSubsystem() {
    this->PreviousGlobalTimeDilation = 1.00f;
}

URivalsRenderWorldTickSubsystem* URivalsRenderWorldTickSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}


