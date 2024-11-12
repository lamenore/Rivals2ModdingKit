#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyCharacterDefinition.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FSnapNetPropertyCharacterDefinition : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    FSnapNetPropertyCharacterDefinition();
};

