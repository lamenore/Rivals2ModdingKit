#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "ERivalsRank.h"
#include "ERivalsWinStreakQuality.h"
#include "RivalsRankSettings.generated.h"

class UTexture2D;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsRankSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsRank, TSoftObjectPtr<UTexture2D>> RankToIconMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsRank, FLinearColor> RankToColorMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsRank, FText> RankToRankNameMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsWinStreakQuality, FLinearColor> WinStreakToColorMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FText> QuarterIndexToNameMap;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FText> SeasonIndexToNameMap;
    
    URivalsRankSettings();

};

