#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NexusAttributionGetMemberByCodeOrUuidRequestParams.h"
#include "NexusAttributionMember.h"
#include "NexusGetMemberByCodeOrUuidNode.generated.h"

class UNexusGetMemberByCodeOrUuidNode;
class UObject;

UCLASS(Blueprintable)
class NEXUSUNREALSDK_API UNexusGetMemberByCodeOrUuidNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusGetMemberByCodeOrUuidError, int32, ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetMemberByCodeOrUuid200Response, const FNexusAttributionMember&, Param0);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMemberByCodeOrUuid200Response On200Response;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusGetMemberByCodeOrUuidError OnError;
    
    UNexusGetMemberByCodeOrUuidNode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNexusGetMemberByCodeOrUuidNode* GetMemberByCodeOrUuid(UObject* WorldContextObject, const FNexusAttributionGetMemberByCodeOrUuidRequestParams& InRequestParams);
    
};

