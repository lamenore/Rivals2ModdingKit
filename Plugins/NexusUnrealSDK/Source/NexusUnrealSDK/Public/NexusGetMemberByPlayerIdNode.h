#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusAttributionGetMemberByPlayerIdRequestParams.h"
#include "NexusAttributionMember.h"
#include "NexusGetMemberByPlayerIdNode.generated.h"

class UNexusGetMemberByPlayerIdNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetMemberByPlayerIdNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetMemberByPlayerIdError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetMemberByPlayerId200Response, const FNexusAttributionMember&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMemberByPlayerId200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetMemberByPlayerIdError OnError;
    
    UNexusGetMemberByPlayerIdNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetMemberByPlayerIdNode* GetMemberByPlayerId(UObject* WorldContextObject, const FNexusAttributionGetMemberByPlayerIdRequestParams& InRequestParams);
    
};

