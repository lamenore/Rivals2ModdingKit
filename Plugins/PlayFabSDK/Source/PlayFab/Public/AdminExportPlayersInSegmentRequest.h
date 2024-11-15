#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminExportPlayersInSegmentRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminExportPlayersInSegmentRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentId;
    
    FAdminExportPlayersInSegmentRequest();
};

