#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RivalsRecordingSubsystem.generated.h"

class ACameraActor;
class ULevelSequence;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UMovieSceneCameraCutTrack;
class UObject;
class URivalsRecordingSubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsRecordingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> OutputWav;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* CurrentJob;
    
public:
    URivalsRecordingSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAudioCapture();
    
    UFUNCTION(BlueprintCallable)
    void StartAudioCapture();
    
    UFUNCTION(BlueprintCallable)
    static void LinkCameraToCameraCutTrack(ULevelSequence* LevelSequence, ACameraActor* CameraActor, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable)
    static FGuid GetCameraGuidFromLevelSequence(ACameraActor* CameraActor, ULevelSequence* LevelSequence);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneCameraCutTrack* GetCameraCutTrackFromLevelSequence(ULevelSequence* LevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsRecordingSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CreateRenderJob(ULevelSequence* LevelSequence, UMoviePipelinePrimaryConfig* Config);
    
    UFUNCTION(BlueprintCallable)
    static FGuid AddCameraToLevelSequence(ACameraActor* CameraActor, ULevelSequence* LevelSequence);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneCameraCutTrack* AddCameraCutTrackToLevelSequence(ULevelSequence* LevelSequence);
    
};

