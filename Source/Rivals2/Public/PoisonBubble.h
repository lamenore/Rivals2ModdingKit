#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "PoisonBubble.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API APoisonBubble : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 BubbleControlLockoutTimer;
    
    APoisonBubble(const FObjectInitializer& ObjectInitializer);

};

