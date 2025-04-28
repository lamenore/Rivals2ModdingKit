#pragma once
#include "CoreMinimal.h"
#include "StateTreeAnyEnum.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeAnyEnum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
    FStateTreeAnyEnum();
};

