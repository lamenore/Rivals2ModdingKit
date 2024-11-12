#pragma once
#include "CoreMinimal.h"
#include "SnapNetProperty.h"
#include "SnapNetPropertyBoolean.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyBoolean : public FSnapNetProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    FSnapNetPropertyBoolean();
};

