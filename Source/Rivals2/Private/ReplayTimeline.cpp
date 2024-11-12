#include "ReplayTimeline.h"

UReplayTimeline::UReplayTimeline() {
    this->MarkerWidgetInstance = NULL;
    this->BP_TimelineCanvas = NULL;
    this->BP_TimelinePanel = NULL;
    this->BP_CameraPreview = NULL;
    this->RenderTarget = NULL;
    this->SelectedMarker = NULL;
    this->bWidgetVisibility = true;
    this->bPauseMenu = false;
    this->bPaused = false;
    this->DollyCamera = NULL;
}

void UReplayTimeline::UpdateMarkers() {
}

void UReplayTimeline::ToggleTimeline() {
}

void UReplayTimeline::ShowTimeline() {
}

void UReplayTimeline::SetTimelineVisibility(bool IsVisible) {
}

void UReplayTimeline::SetReplayPaused(bool ReplayPaused) {
}

void UReplayTimeline::RemoveMarker(UKeyframe* Keyframe) {
}

bool UReplayTimeline::IsReplayPaused() {
    return false;
}

void UReplayTimeline::HideTimeline() {
}

UTimelineMarker* UReplayTimeline::CanEditMarker() {
    return NULL;
}

void UReplayTimeline::AddMarker(UKeyframe* Keyframe) {
}


