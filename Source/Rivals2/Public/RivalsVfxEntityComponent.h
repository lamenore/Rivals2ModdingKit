#pragma once
#include "CoreMinimal.h"
#include "RivalsEntityComponent.h"
#include "RivalsVfxEntityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URivalsVfxEntityComponent : public URivalsEntityComponent {
    GENERATED_BODY()
public:
    URivalsVfxEntityComponent(const FObjectInitializer& ObjectInitializer);

};

