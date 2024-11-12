#pragma once
#include "CoreMinimal.h"
#include "MatchmakingQueueWidget.h"
#include "CasualMatchmakingWidget.generated.h"

class UMatchmakingQueueButton;
class URivalsMenuButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCasualMatchmakingWidget : public UMatchmakingQueueWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchmakingQueueButton* BP_SinglesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchmakingQueueButton* BP_DoublesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchmakingQueueButton* BP_FFAButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_QueueAllButton;
    
public:
    UCasualMatchmakingWidget();

};

