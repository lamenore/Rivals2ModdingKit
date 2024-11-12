#pragma once
#include "CoreMinimal.h"
#include "EArticleCollisionResponse.generated.h"

UENUM(BlueprintType)
enum class EArticleCollisionResponse : uint8 {
    None,
    Destroy,
    Stop,
    Bounce,
    Custom,
};

