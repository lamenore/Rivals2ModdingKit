#pragma once
#include "CoreMinimal.h"
#include "ERivalsHitboxGrabPartnerInteraction.generated.h"

UENUM(BlueprintType)
enum class ERivalsHitboxGrabPartnerInteraction : uint8 {
    None,
    CannotHitGrabPartner,
    CanOnlyHitGrabPartner,
};

