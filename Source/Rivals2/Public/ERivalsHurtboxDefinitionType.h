#pragma once
#include "CoreMinimal.h"
#include "ERivalsHurtboxDefinitionType.generated.h"

UENUM(BlueprintType)
enum class ERivalsHurtboxDefinitionType : uint8 {
    Existing,
    NewSphere,
    NewCapsule,
};

