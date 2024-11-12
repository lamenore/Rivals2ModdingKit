#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32Base.h"
#include "SnapNetPropertyEnum.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyEnum : public FSnapNetPropertyInt32Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    FSnapNetPropertyEnum();
};

