#pragma once
#include "CoreMinimal.h"
#include "MatchmakingQueueWidget.h"
#include "RankedMatchmakingWidget.generated.h"

class URankedMatchmakingQueueButton;
class URivalsMenuButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URankedMatchmakingWidget : public UMatchmakingQueueWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URankedMatchmakingQueueButton* BP_RankedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SeasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SeasonEndTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_ViewLeaderboardButton;
    
public:
    URankedMatchmakingWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OpenLeaderboard();
    
};

