#pragma once
#include "CoreMinimal.h"
#include "CloudScriptItemRedeemResponse.generated.h"

USTRUCT(BlueprintType)
struct FCloudScriptItemRedeemResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasSuccessful;
    
    RIVALS2_API FCloudScriptItemRedeemResponse();
};

