#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32Base.h"
#include "SnapNetPropertyInt32.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyInt32 : public FSnapNetPropertyInt32Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
public:
    FSnapNetPropertyInt32();
};

