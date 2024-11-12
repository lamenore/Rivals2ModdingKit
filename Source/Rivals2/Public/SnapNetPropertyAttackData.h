#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyAttackData.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FSnapNetPropertyAttackData : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    FSnapNetPropertyAttackData();
};

