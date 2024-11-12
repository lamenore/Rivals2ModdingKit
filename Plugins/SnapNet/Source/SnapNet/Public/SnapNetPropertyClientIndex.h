#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32Base.h"
#include "SnapNetPropertyClientIndex.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyClientIndex : public FSnapNetPropertyInt32Base {
    GENERATED_BODY()
public:
    FSnapNetPropertyClientIndex();
};

