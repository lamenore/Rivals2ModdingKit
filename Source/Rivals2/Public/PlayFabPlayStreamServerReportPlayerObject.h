#pragma once
#include "CoreMinimal.h"
#include "PlayFabPlayStreamServerReportPlayerObject.generated.h"

USTRUCT(BlueprintType)
struct FPlayFabPlayStreamServerReportPlayerObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playfab_title_player_account_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playfab_master_player_account_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString player_ip_address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_reporting_server;
    
    RIVALS2_API FPlayFabPlayStreamServerReportPlayerObject();
};

