#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeleteMasterPlayerEventDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteMasterPlayerEventDataRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminDeleteMasterPlayerEventDataRequest();
};

