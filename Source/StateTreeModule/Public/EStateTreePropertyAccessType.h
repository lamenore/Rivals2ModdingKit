#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyAccessType.generated.h"

UENUM(BlueprintType)
enum class EStateTreePropertyAccessType : uint8 {
    Offset,
    Object,
    WeakObject,
    SoftObject,
    ObjectInstance,
    StructInstance,
    IndexArray,
};

