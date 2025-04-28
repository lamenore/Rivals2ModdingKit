#pragma once
#include "CoreMinimal.h"
#include "MatchmakingQueueButton.h"
#include "RankedMatchmakingQueueButton.generated.h"

class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URankedMatchmakingQueueButton : public UMatchmakingQueueButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_BonusMedalAmountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_AetherianLeaderboardPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AetherianLeaderboardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_BonusMedalPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_WeeklyWinBonusMedalPanel;
    
    URankedMatchmakingQueueButton();

};

