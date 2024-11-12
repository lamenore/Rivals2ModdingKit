#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyRespawnPlatform.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FSnapNetPropertyRespawnPlatform : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    FSnapNetPropertyRespawnPlatform();
};

