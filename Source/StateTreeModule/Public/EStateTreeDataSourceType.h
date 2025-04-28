#pragma once
#include "CoreMinimal.h"
#include "EStateTreeDataSourceType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeDataSourceType : uint8 {
    None,
    GlobalInstanceData,
    GlobalInstanceDataObject,
    ActiveInstanceData,
    ActiveInstanceDataObject,
    SharedInstanceData,
    SharedInstanceDataObject,
    ContextData,
    ExternalData,
    GlobalParameterData,
    SubtreeParameterData,
    StateParameterData,
};

