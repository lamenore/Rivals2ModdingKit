#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsRank.h"
#include "ESkillStartSetting.h"
#include "RivalsRankTitleData.h"
#include "RivalsRankedSubsystem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class RIVALS2_API URivalsRankedSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsRankTitleData RankTitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualMonthlyMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualMonthlyWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedSeasonMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedSeasonWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillStartSetting SkillStartSetting;
    
public:
    URivalsRankedSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateSkillStartSetting(const ESkillStartSetting InSkillStartSetting);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedSeasonWins(const int32 InRankedSeasonWins);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedSeasonMatches(const int32 InRankedSeasonMatches);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedElo(const int32 InRankedElo, const bool bIsAuthoritative);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCasualMonthlyWins(const int32 InCasualMonthlyWins);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCasualMonthlyMatches(const int32 InCasualMonthlyMatches);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCasualElo(const int32 InCasualElo, const bool bIsAuthoritative);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenSkillCheckPrompt();
    
    UFUNCTION(BlueprintCallable)
    void RequestSkillStartSettingUpdate(const ESkillStartSetting InSkillStartSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsRankTitleData GetRankTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRankEloText(const int32 InElo, const int32 InMatchCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedSeasonWins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedSeasonMatches();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedElo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetRank(const int32 InElo, const int32 InMatchCount);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayFabRankStatistics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESkillStartSetting GetPlayerSkillSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetPlayerRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNameForRank(const ERivalsRank InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKValueForMatchCount(const int32 InMatchCount, const bool bIsRanked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconForRank(const ERivalsRank InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColorForRank(const ERivalsRank InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualMonthlyWins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualMonthlyMatches();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualElo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FetchedTitleData();
    
};

