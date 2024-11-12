#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayFabLobbyMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayFabLobbyMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> MemberData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MemberEntityKeyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MemberEntityKeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PubSubConnectionHandle;
    
    RIVALS2_API FRivalsPlayFabLobbyMemberInfo();
};

