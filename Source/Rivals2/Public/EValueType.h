#pragma once
#include "CoreMinimal.h"
#include "EValueType.generated.h"

UENUM()
enum class EValueType : int32 {
    String,
    Number,
    Bool,
    IntPoint,
    Button,
};

