#pragma once
#include "CoreMinimal.h"
#include "RivalsAfterSteamInventoryRedeemedRefundReceipt.h"
#include "AfterSteamInventoryRedeemedRefundResponse.generated.h"

USTRUCT(BlueprintType)
struct FAfterSteamInventoryRedeemedRefundResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsAfterSteamInventoryRedeemedRefundReceipt> fail_refunds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsAfterSteamInventoryRedeemedRefundReceipt> ok_refunds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mkt_trans_id_partial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mkt_trans_id_full;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trans_id;
    
    RIVALS2_API FAfterSteamInventoryRedeemedRefundResponse();
};

