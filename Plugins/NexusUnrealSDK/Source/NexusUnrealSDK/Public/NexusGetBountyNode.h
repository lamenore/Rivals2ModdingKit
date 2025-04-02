#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusBountyBountyError.h"
#include "NexusBountyGetBounty200Response.h"
#include "NexusBountyGetBountyRequestParams.h"
#include "NexusGetBountyNode.generated.h"

class UNexusGetBountyNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetBountyNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetBountyError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetBounty400Response, const FNexusBountyBountyError&, Param0);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetBounty200Response, const FNexusBountyGetBounty200Response&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBounty200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBounty400Response On400Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetBountyError OnError;
    
    UNexusGetBountyNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetBountyNode* GetBounty(UObject* WorldContextObject, const FNexusBountyGetBountyRequestParams& InRequestParams);
    
};

