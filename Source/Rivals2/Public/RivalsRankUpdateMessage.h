#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetReliableMessage.h"
#include "RivalsRankUpdateMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsRankUpdateMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsRanked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 NewElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PrevElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SeasonMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SeasonWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SeasonWinStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 LeaderboardPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PrevLeaderboardPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 CurrentRankLosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 WinStreakBonusElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SeparatorValue;
    
    URivalsRankUpdateMessage();

};

