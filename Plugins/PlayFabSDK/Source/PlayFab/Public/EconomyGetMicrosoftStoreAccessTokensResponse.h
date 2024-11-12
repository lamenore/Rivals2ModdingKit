#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyGetMicrosoftStoreAccessTokensResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyGetMicrosoftStoreAccessTokensResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectionsAccessToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectionsAccessTokenExpirationDate;
    
    FEconomyGetMicrosoftStoreAccessTokensResponse();
};

