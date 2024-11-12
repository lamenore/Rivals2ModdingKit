#pragma once
#include "CoreMinimal.h"
#include "ERivalsShadowMode.generated.h"

UENUM(BlueprintType)
enum class ERivalsShadowMode : uint8 {
    None,
    CapsuleShadows,
    MeshShadows,
};

