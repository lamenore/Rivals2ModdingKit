#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RivalsDebugTimingSubsystem.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsDebugTimingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameStartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameDurationAverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameSimStartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameSimDurationCurrent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameSimDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameSimDurationAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameSimCountCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameSimCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameRenderStartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameRenderDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameRenderDurationAverage;
    
    URivalsDebugTimingSubsystem();

};

