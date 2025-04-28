#pragma once
#include "CoreMinimal.h"
#include "ERivalsArcadeRewardType.h"
#include "UpdateCharacterProgressionXpResponse.h"
#include "RivalsCharacterArcadeReward.generated.h"

USTRUCT(BlueprintType)
struct FRivalsCharacterArcadeReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_id_rewarded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsArcadeRewardType reward_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 amount_rewarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString difficulty_completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString character_shortname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool update_character_progression_xp_response_is_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateCharacterProgressionXpResponse update_character_progression_xp_response;
    
    RIVALS2_API FRivalsCharacterArcadeReward();
};

