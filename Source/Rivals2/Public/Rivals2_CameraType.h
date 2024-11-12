#pragma once
#include "CoreMinimal.h"
#include "Rivals2_CameraType.generated.h"

UENUM(BlueprintType)
enum Rivals2_CameraType {
    NoOverride,
    FollowLocal,
    FollowActor,
    Static,
};

