#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectPlayerState.generated.h"

UENUM(BlueprintType)
enum class ECharacterSelectPlayerState : uint8 {
    NoChange,
    Inactive,
    ActiveWaiting,
    SelectingCharacter,
    CharacterSelected,
    ChangingStyles,
    ChangingSettings,
    ChangingRules,
    NotReady,
    Ready,
    AllReady,
    AllReadySkipToStage,
    Count,
};

