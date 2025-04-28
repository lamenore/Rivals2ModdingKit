#pragma once
#include "CoreMinimal.h"
#include "PlayerMedalRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMedalRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlacementMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankUpMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeeklyWinMedals;
    
    RIVALS2_API FPlayerMedalRewardData();
};

