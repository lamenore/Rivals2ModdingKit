#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyInt32Base.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyInt32Base : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Clamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    FSnapNetPropertyInt32Base();
};

