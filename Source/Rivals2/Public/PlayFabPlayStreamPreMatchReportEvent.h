#pragma once
#include "CoreMinimal.h"
#include "PlayFabPlayStreamPreMatchReportPlayerObject.h"
#include "PlayFabPlayStreamPreMatchReportEvent.generated.h"

USTRUCT(BlueprintType)
struct FPlayFabPlayStreamPreMatchReportEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString request_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString server_region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> shared_locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_fallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayFabPlayStreamPreMatchReportPlayerObject> players;
    
    RIVALS2_API FPlayFabPlayStreamPreMatchReportEvent();
};

