#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "EconomyGetInventoryCollectionIdsRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyGetInventoryCollectionIdsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContinuationToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    FEconomyGetInventoryCollectionIdsRequest();
};

