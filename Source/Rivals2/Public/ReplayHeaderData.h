#pragma once
#include "CoreMinimal.h"
#include "RivalCharacterSelectionData.h"
#include "ReplayHeaderData.generated.h"

class URivalsStageSkinData;

USTRUCT(BlueprintType)
struct FReplayHeaderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplayStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplayEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsStageSkinData* StageSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalCharacterSelectionData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ReplayInOutTimestamp;
    
    RIVALS2_API FReplayHeaderData();
};

