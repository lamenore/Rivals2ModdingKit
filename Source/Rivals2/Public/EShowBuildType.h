#pragma once
#include "CoreMinimal.h"
#include "EShowBuildType.generated.h"

UENUM(BlueprintType)
enum class EShowBuildType : uint8 {
    None,
    ShowBuildVersus,
    ShowBuildStoryMode,
    ShowBuildOnline,
};

