#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusBountyBountyError.h"
#include "NexusBountyGetMemberBountiesByID200Response.h"
#include "NexusBountyGetMemberBountiesByIDRequestParams.h"
#include "NexusGetMemberBountiesByIDNode.generated.h"

class UNexusGetMemberBountiesByIDNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetMemberBountiesByIDNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetMemberBountiesByIDError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetMemberBountiesByID400Response, const FNexusBountyBountyError&, Param0);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetMemberBountiesByID200Response, const FNexusBountyGetMemberBountiesByID200Response&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMemberBountiesByID200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMemberBountiesByID400Response On400Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetMemberBountiesByIDError OnError;
    
    UNexusGetMemberBountiesByIDNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetMemberBountiesByIDNode* GetMemberBountiesByID(UObject* WorldContextObject, const FNexusBountyGetMemberBountiesByIDRequestParams& InRequestParams);
    
};

