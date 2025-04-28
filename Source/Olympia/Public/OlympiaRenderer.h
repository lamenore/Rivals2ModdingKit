#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "OlympiaRenderer.generated.h"

UCLASS(Blueprintable)
class OLYMPIA_API AOlympiaRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    AOlympiaRenderer(const FObjectInitializer& ObjectInitializer);

};

