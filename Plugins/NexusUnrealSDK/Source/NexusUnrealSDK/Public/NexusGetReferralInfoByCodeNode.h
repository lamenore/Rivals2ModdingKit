#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusReferralGetReferralInfoByCode200Response.h"
#include "NexusReferralGetReferralInfoByCodeRequestParams.h"
#include "NexusReferralReferralError.h"
#include "NexusGetReferralInfoByCodeNode.generated.h"

class UNexusGetReferralInfoByCodeNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetReferralInfoByCodeNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetReferralInfoByCodeError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetReferralInfoByCode400Response, const FNexusReferralReferralError&, Param0);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetReferralInfoByCode200Response, const FNexusReferralGetReferralInfoByCode200Response&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetReferralInfoByCode200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetReferralInfoByCode400Response On400Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetReferralInfoByCodeError OnError;
    
    UNexusGetReferralInfoByCodeNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetReferralInfoByCodeNode* GetReferralInfoByCode(UObject* WorldContextObject, const FNexusReferralGetReferralInfoByCodeRequestParams& InRequestParams);
    
};

