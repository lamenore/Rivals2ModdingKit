#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "RivalsServerNoticeData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsServerNoticeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 NotificationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 NotificationSenderSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString NotificationMessage;
    
    RIVALS2_API FRivalsServerNoticeData();
};

