#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsRank.h"
#include "ESkillStartSetting.h"
#include "RivalsRankMedalsSettings.h"
#include "RivalsRankSeasonEntryData.h"
#include "RivalsRankSeasonTitleData.h"
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
    FRivalsRankSeasonTitleData RankSeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsRankMedalsSettings RankMedalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualMonthlyMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualMonthlyWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualWinStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedSeasonMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedSeasonWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedWinStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRankLosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankedLeaderboardPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSeasonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillStartSetting SkillStartSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeeklyBonusAvailable;
    
public:
    URivalsRankedSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateSkillStartSetting(const ESkillStartSetting InSkillStartSetting);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedWinStreak(const int32 InRankedWinStreak);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedSeasonWins(const int32 InRankedSeasonWins);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedSeasonMatches(const int32 InRankedSeasonMatches);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedLeaderboardPosition(const int32 InRankedLeaderboardPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRankedElo(const int32 InRankedElo, const bool bIsAuthoritative);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentRankLosses(const int32 InCurrentRankLosses);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCasualWinStreak(const int32 InCasualWinStreak);
    
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
    bool IsWeeklyBonusAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFetchedTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetWinStreakColor(const int32 InWinStreak);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWinStreakBonusPercent(const int32 InWinStreak, const ERivalsRank InRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetV2Rank(const int32 InElo, const int32 InWinCount, const int32 InLeaderboardPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetV1Rank(const int32 InElo, const int32 InMatchCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSeasonTitleByIndex(const int32& InSeasonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSeasonQuarterNameByIndex(const int32& InQuarterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankUpBonusAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsRankTitleData GetRankTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsRankSeasonTitleData GetRankSeasonFullTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsRankSeasonEntryData GetRankSeasonEntry(const int32& InEntryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetRankNoPlacements(const int32 InElo, const int32 InLeaderboardPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsRankMedalsSettings GetRankMedalSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetRankMatchmakingTier(const ERivalsRank& InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetRankInCurrentSeason(const int32 InElo, const int32 InMatchCount, const int32 InWinCount, const int32 InLeaderboardPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRankEloText(const int32 InElo, const int32 InMatchCount, const int32 InWinCount, const int32 InSeasonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedWinStreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedSeasonWins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedSeasonMatches();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedLeaderboardPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedKValue(const int32 InMatchCount, const int32 InWinCount, const bool bIsRanked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankedElo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetRank(const int32 InElo, const int32 InMatchCount, const int32 InWinCount, const int32 InSeasonIndex, const int32 InLeaderboardPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlusMedalsText(const int32 InMedalCount);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayFabRankStatistics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESkillStartSetting GetPlayerSkillSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetPlayerRankNoPlacements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetPlayerRankMatchmakingTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsRank GetPlayerRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNameForRank(const ERivalsRank InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconForRank(const ERivalsRank InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSeasonYear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCurrentSeasonRolloverDate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSeasonQuarter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSeasonIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRivalsRankSeasonEntryData GetCurrentRankSeasonEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRankLosses();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColorForRank(const ERivalsRank InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualWinStreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualMonthlyWins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualMonthlyMatches();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualElo();
    
};

