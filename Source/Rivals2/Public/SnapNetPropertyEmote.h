#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyEmote.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FSnapNetPropertyEmote : public FSnapNetPropertyPrimaryAsset {
    GENERATED_BODY()
public:
    FSnapNetPropertyEmote();
};

