#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StageSkinVectorParameterContainer.generated.h"

USTRUCT(BlueprintType)
struct FStageSkinVectorParameterContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LastStockValue;
    
    RIVALS2_API FStageSkinVectorParameterContainer();
};

