#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyVectorBase.h"
#include "SnapNetPropertyVelocity.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyVelocity : public FSnapNetPropertyVectorBase {
    GENERATED_BODY()
public:
    FSnapNetPropertyVelocity();
};

