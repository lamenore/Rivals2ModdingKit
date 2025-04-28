#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEnum.h"
#include "RivalsInputListenerData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsInputListenerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum InputToListenFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean InputDetected;
    
    RIVALS2_API FRivalsInputListenerData();
};

