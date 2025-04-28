#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "RivalsServerMatchInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsServerMatchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString QueueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString TitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString BuildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString VmId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString ServerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsRanked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsFFA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsOnlineMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SeasonIndex;
    
    RIVALS2_API FRivalsServerMatchInfo();
};

