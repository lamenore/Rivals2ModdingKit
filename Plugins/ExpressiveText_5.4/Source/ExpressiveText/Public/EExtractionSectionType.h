#pragma once
#include "CoreMinimal.h"
#include "EExtractionSectionType.generated.h"

UENUM(BlueprintType)
enum class EExtractionSectionType : uint8 {
    TagsDelimiterStart,
    Tags,
    TagsDelimiterEnd,
    ContentDelimiterStart,
    Content,
    ContentDelimiterEnd,
};

