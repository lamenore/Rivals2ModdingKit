#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyVector.h"
#include "CustomHurtboxData.generated.h"

USTRUCT(BlueprintType)
struct FCustomHurtboxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat HurtboxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector HurtboxOffset;
    
    RIVALS2_API FCustomHurtboxData();
};

