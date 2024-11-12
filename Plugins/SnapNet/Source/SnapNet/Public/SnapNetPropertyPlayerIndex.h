#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32Base.h"
#include "SnapNetPropertyPlayerIndex.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyPlayerIndex : public FSnapNetPropertyInt32Base {
    GENERATED_BODY()
public:
    FSnapNetPropertyPlayerIndex();
};

