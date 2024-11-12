#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGrantItemsToUsersRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGrantItemsToUsersRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> ItemGrants;
    
    FServerGrantItemsToUsersRequest();
};

