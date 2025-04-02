#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusBountyBountyError.h"
#include "NexusBountyGetBounties200Response.h"
#include "NexusBountyGetBountiesRequestParams.h"
#include "NexusGetBountiesNode.generated.h"

class UNexusGetBountiesNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetBountiesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetBountiesError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetBounties400Response, const FNexusBountyBountyError&, Param0);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetBounties200Response, const FNexusBountyGetBounties200Response&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBounties200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBounties400Response On400Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetBountiesError OnError;
    
    UNexusGetBountiesNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetBountiesNode* GetBounties(UObject* WorldContextObject, const FNexusBountyGetBountiesRequestParams& InRequestParams);
    
};

