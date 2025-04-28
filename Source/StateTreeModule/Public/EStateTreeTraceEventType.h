#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTraceEventType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTraceEventType : uint8 {
    Unset,
    OnEntering,
    OnEntered,
    OnExiting,
    OnExited,
    Push,
    Pop,
    OnStateSelected,
    OnStateCompleted,
    OnTicking,
    OnTaskCompleted,
    OnTicked,
    Passed,
    Failed,
    ForcedSuccess,
    ForcedFailure,
    InternalForcedFailure,
    OnEvaluating,
    OnTransition,
    OnTreeStarted,
    OnTreeStopped,
};

