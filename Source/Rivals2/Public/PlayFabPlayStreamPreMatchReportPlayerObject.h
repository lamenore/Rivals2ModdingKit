#pragma once
#include "CoreMinimal.h"
#include "PlayFabPlayStreamPreMatchReportPlayerObject.generated.h"

USTRUCT(BlueprintType)
struct FPlayFabPlayStreamPreMatchReportPlayerObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playfab_title_player_account_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playfab_master_player_account_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> locations;
    
    RIVALS2_API FPlayFabPlayStreamPreMatchReportPlayerObject();
};

