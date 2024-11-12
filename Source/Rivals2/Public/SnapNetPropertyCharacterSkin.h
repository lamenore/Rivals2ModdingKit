#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyCharacterSkin.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FSnapNetPropertyCharacterSkin : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    FSnapNetPropertyCharacterSkin();
};

