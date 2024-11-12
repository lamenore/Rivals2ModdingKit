#pragma once
#include "CoreMinimal.h"
#include "RivalsAIController.h"
#include "ZetterburnBattleAI.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AZetterburnBattleAI : public ARivalsAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveVertDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveHorizDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveJumpChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveZoneChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveStrongChance;
    
    AZetterburnBattleAI(const FObjectInitializer& ObjectInitializer);

};

