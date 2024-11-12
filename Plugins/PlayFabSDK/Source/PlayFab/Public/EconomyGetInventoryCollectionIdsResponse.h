#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyGetInventoryCollectionIdsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyGetInventoryCollectionIdsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectionIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContinuationToken;
    
    FEconomyGetInventoryCollectionIdsResponse();
};

