#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusReferralGetReferralInfoByPlayerId200Response.h"
#include "NexusReferralGetReferralInfoByPlayerIdRequestParams.h"
#include "NexusReferralReferralError.h"
#include "NexusGetReferralInfoByPlayerIdNode.generated.h"

class UNexusGetReferralInfoByPlayerIdNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetReferralInfoByPlayerIdNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetReferralInfoByPlayerIdError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetReferralInfoByPlayerId400Response, const FNexusReferralReferralError&, Param0);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetReferralInfoByPlayerId200Response, const FNexusReferralGetReferralInfoByPlayerId200Response&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetReferralInfoByPlayerId200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetReferralInfoByPlayerId400Response On400Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetReferralInfoByPlayerIdError OnError;
    
    UNexusGetReferralInfoByPlayerIdNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetReferralInfoByPlayerIdNode* GetReferralInfoByPlayerId(UObject* WorldContextObject, const FNexusReferralGetReferralInfoByPlayerIdRequestParams& InRequestParams);
    
};

