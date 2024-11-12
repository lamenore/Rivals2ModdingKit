#pragma once
#include "CoreMinimal.h"
#include "SnapNetProperty.h"
#include "SnapNetPropertyStringBase.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyStringBase : public FSnapNetProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StringPoolStringIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool StringPoolStringIndexCached;
    
public:
    FSnapNetPropertyStringBase();
};

