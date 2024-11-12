#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyVectorBase.h"
#include "SnapNetPropertyAngularVelocity.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyAngularVelocity : public FSnapNetPropertyVectorBase {
    GENERATED_BODY()
public:
    FSnapNetPropertyAngularVelocity();
};

