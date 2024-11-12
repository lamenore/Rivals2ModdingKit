#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetPlayersInSegmentExportResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayersInSegmentExportResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IndexUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    FAdminGetPlayersInSegmentExportResponse();
};

