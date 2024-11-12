#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlayerInputType.h"
#include "RivalsPlayerInputTypeState.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayerInputTypeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsPlayerInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Consumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    RIVALS2_API FRivalsPlayerInputTypeState();
};

