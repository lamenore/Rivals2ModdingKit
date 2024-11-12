#pragma once
#include "CoreMinimal.h"
#include "MatchmakingQueueWidget.h"
#include "RankedMatchmakingWidget.generated.h"

class UMatchmakingQueueButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URankedMatchmakingWidget : public UMatchmakingQueueWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchmakingQueueButton* BP_RankedButton;
    
public:
    URankedMatchmakingWidget();

};

