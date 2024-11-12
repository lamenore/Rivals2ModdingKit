#pragma once
#include "CoreMinimal.h"
#include "EShowBuildMatchType.generated.h"

UENUM(BlueprintType)
enum class EShowBuildMatchType : uint8 {
    None,
    Showbuild1v1,
    ShowbuildFFA,
};

