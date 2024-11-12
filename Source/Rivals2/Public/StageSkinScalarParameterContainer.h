#pragma once
#include "CoreMinimal.h"
#include "StageSkinScalarParameterContainer.generated.h"

USTRUCT(BlueprintType)
struct FStageSkinScalarParameterContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastStockValue;
    
    RIVALS2_API FStageSkinScalarParameterContainer();
};

