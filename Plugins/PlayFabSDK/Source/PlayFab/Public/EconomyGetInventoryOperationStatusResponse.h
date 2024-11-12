#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyGetInventoryOperationStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyGetInventoryOperationStatusResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationStatus;
    
    FEconomyGetInventoryOperationStatusResponse();
};

