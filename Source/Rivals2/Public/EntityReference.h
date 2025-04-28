#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "EntityReference.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FEntityReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex EntityIndex;
    
    FEntityReference();
};

