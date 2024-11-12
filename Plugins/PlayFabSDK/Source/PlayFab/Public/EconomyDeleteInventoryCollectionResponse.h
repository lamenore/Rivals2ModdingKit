#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteInventoryCollectionResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteInventoryCollectionResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyDeleteInventoryCollectionResponse();
};

