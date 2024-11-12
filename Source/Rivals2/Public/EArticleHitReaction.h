#pragma once
#include "CoreMinimal.h"
#include "EArticleHitReaction.generated.h"

UENUM(BlueprintType)
enum class EArticleHitReaction : uint8 {
    None,
    Destroy,
    DestroyAfterHitpause,
    ReceiveHitpause,
    Reflect,
};

