#include "RivalsDebugTimingSubsystem.h"

URivalsDebugTimingSubsystem::URivalsDebugTimingSubsystem() {
    this->FrameStartTime = 0.00f;
    this->FrameDuration = 0.00f;
    this->FrameDurationAverage = 0.00f;
    this->FrameSimStartTime = 0.00f;
    this->FrameSimDurationCurrent = 0.00f;
    this->FrameSimDuration = 0.00f;
    this->FrameSimDurationAverage = 0.00f;
    this->FrameSimCountCurrent = 0;
    this->FrameSimCount = 0;
    this->FrameRenderStartTime = 0.00f;
    this->FrameRenderDuration = 0.00f;
    this->FrameRenderDurationAverage = 0.00f;
}


