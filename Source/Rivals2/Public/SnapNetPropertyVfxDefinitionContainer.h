#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyVfxDefinitionContainer.generated.h"

USTRUCT(BlueprintType)
struct FSnapNetPropertyVfxDefinitionContainer : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    RIVALS2_API FSnapNetPropertyVfxDefinitionContainer();
};

