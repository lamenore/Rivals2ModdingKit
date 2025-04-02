#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusReferralGetPlayerCurrentReferral404Response.h"
#include "NexusReferralGetPlayerCurrentReferralRequestParams.h"
#include "NexusGetPlayerCurrentReferralNode.generated.h"

class UNexusGetPlayerCurrentReferralNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetPlayerCurrentReferralNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetPlayerCurrentReferralError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetPlayerCurrentReferral404Response, const FNexusReferralGetPlayerCurrentReferral404Response&, Param0);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetPlayerCurrentReferral200Response, const FString&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayerCurrentReferral200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayerCurrentReferral404Response On404Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetPlayerCurrentReferralError OnError;
    
    UNexusGetPlayerCurrentReferralNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetPlayerCurrentReferralNode* GetPlayerCurrentReferral(UObject* WorldContextObject, const FNexusReferralGetPlayerCurrentReferralRequestParams& InRequestParams);
    
};

