#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyDeathEffect.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FSnapNetPropertyDeathEffect : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    FSnapNetPropertyDeathEffect();
};

