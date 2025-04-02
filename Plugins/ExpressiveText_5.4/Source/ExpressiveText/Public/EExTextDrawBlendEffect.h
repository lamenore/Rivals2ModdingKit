#pragma once
#include "CoreMinimal.h"
#include "EExTextDrawBlendEffect.generated.h"

UENUM(BlueprintType)
enum class EExTextDrawBlendEffect : uint8 {
    None,
    NoBlending,
    PreMultipliedAlpha,
    NoGamma = 4,
    InvertAlpha = 8,
    NoPixelSnapping = 16,
    DisabledEffect = 32,
    IgnoreTextureAlpha = 64,
    ReverseGamma = 128,
};

