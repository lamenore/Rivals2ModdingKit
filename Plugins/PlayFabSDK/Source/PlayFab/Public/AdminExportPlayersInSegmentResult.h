#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminExportPlayersInSegmentResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminExportPlayersInSegmentResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExportId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentId;
    
    FAdminExportPlayersInSegmentResult();
};

