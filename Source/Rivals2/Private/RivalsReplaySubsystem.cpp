#include "RivalsReplaySubsystem.h"

URivalsReplaySubsystem::URivalsReplaySubsystem() {
    this->bReplayPaused = false;
    this->TimelineInOut.AddDefaulted(2);
    this->ReplayTimeline = NULL;
}

void URivalsReplaySubsystem::SetTimelineInOut(float TimelineWidth, UImage* SliderBackground, bool OffsetLeft, float NewOffset, int32 CurrentTime) {
}

void URivalsReplaySubsystem::SetTimelineFromKeyframes(float TimelineWidth, UImage* SliderBackground) {
}

void URivalsReplaySubsystem::SetReplayFilename(const FString& Name) {
}

void URivalsReplaySubsystem::SeekReplayFromStick(float RightStickAxis) {
}

void URivalsReplaySubsystem::SeekReplay(int32 Time) {
}

void URivalsReplaySubsystem::OnGameplayAssetsLoaded() {
}

bool URivalsReplaySubsystem::IsReplayValid(FReplayHeaderData HeaderData) {
    return false;
}

bool URivalsReplaySubsystem::IsLoadingReplay() {
    return false;
}

void URivalsReplaySubsystem::InitProtocolID() {
}

UReplayTimeline* URivalsReplaySubsystem::GetReplayTimeline() {
    return NULL;
}

int32 URivalsReplaySubsystem::GetReplayStartTime() {
    return 0;
}

FReplayHeaderData URivalsReplaySubsystem::GetReplayHeaderData(const FString& Filename) const {
    return FReplayHeaderData{};
}

FString URivalsReplaySubsystem::GetReplayFilename() {
    return TEXT("");
}

int32 URivalsReplaySubsystem::GetReplayEndTime() {
    return 0;
}

int32 URivalsReplaySubsystem::GetCurrentReplayMs() {
    return 0;
}

int32 URivalsReplaySubsystem::GetCurrentReplayFrame() {
    return 0;
}

URivalsReplaySubsystem* URivalsReplaySubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

TArray<int32> URivalsReplaySubsystem::GenerateSeekMarkers() {
    return TArray<int32>();
}


