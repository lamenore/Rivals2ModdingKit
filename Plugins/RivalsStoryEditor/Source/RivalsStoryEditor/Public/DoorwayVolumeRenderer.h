#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderRenderer.h"
#include "DoorwayVolumeRenderer.generated.h"

UCLASS(Blueprintable)
class ADoorwayVolumeRenderer : public ARivalsColliderRenderer {
    GENERATED_BODY()
public:
    ADoorwayVolumeRenderer(const FObjectInitializer& ObjectInitializer);

};

