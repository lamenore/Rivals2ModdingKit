#pragma once
#include "CoreMinimal.h"
#include "ESkillStartSetting.generated.h"

UENUM(BlueprintType)
enum class ESkillStartSetting : uint8 {
    None,
    Beginner,
    Intermediate,
    Advanced,
};

