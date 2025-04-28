#pragma once
#include "CoreMinimal.h"
#include "RivalsRankSeasonEntryData.h"
#include "RivalsRankSeasonTitleData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsRankSeasonTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 current_season_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString fallback_base_leaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString fallback_pure_leaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsRankSeasonEntryData> seasons;
    
    RIVALS2_API FRivalsRankSeasonTitleData();
};

