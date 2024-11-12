#pragma once
#include "CoreMinimal.h"
#include "EArticleEcbType.generated.h"

UENUM(BlueprintType)
enum class EArticleEcbType : uint8 {
    None,
    Simple,
    Complex,
    Count,
};

