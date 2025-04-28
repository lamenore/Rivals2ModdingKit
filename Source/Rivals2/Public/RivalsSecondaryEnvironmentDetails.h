#pragma once
#include "CoreMinimal.h"
#include "RivalsSecondaryEnvironmentDetails.generated.h"

USTRUCT(BlueprintType)
struct FRivalsSecondaryEnvironmentDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFallback;
    
    RIVALS2_API FRivalsSecondaryEnvironmentDetails();
};

