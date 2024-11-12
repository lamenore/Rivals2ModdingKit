#include "RivalsRecordingSubsystem.h"

URivalsRecordingSubsystem::URivalsRecordingSubsystem() {
    this->CurrentJob = NULL;
}

void URivalsRecordingSubsystem::StopAudioCapture() {
}

void URivalsRecordingSubsystem::StartAudioCapture() {
}

void URivalsRecordingSubsystem::LinkCameraToCameraCutTrack(ULevelSequence* LevelSequence, ACameraActor* CameraActor, int32 StartFrame, int32 EndFrame) {
}

FGuid URivalsRecordingSubsystem::GetCameraGuidFromLevelSequence(ACameraActor* CameraActor, ULevelSequence* LevelSequence) {
    return FGuid{};
}

UMovieSceneCameraCutTrack* URivalsRecordingSubsystem::GetCameraCutTrackFromLevelSequence(ULevelSequence* LevelSequence) {
    return NULL;
}

URivalsRecordingSubsystem* URivalsRecordingSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void URivalsRecordingSubsystem::CreateRenderJob(ULevelSequence* LevelSequence, UMoviePipelinePrimaryConfig* Config) {
}

FGuid URivalsRecordingSubsystem::AddCameraToLevelSequence(ACameraActor* CameraActor, ULevelSequence* LevelSequence) {
    return FGuid{};
}

UMovieSceneCameraCutTrack* URivalsRecordingSubsystem::AddCameraCutTrackToLevelSequence(ULevelSequence* LevelSequence) {
    return NULL;
}


