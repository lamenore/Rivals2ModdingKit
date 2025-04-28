#pragma once
#include "CoreMinimal.h"
#include "PlayFabPlayStreamServerReportPlayerObject.h"
#include "PlayFabPlayStreamServerReportEvent.generated.h"

USTRUCT(BlueprintType)
struct FPlayFabPlayStreamServerReportEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString request_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString server_region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayFabPlayStreamServerReportPlayerObject> players;
    
    RIVALS2_API FPlayFabPlayStreamServerReportEvent();
};

