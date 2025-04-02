#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusAttributionGetMembers200Response.h"
#include "NexusAttributionGetMembersRequestParams.h"
#include "NexusGetMembersNode.generated.h"

class UNexusGetMembersNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetMembersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetMembersError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetMembers200Response, const FNexusAttributionGetMembers200Response&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMembers200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetMembersError OnError;
    
    UNexusGetMembersNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetMembersNode* GetMembers(UObject* WorldContextObject, const FNexusAttributionGetMembersRequestParams& InRequestParams);
    
};

