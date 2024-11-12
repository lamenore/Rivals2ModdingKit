#pragma once
#include "CoreMinimal.h"
#include "RivalsEntityComponent.h"
#include "RivalsPlatformEntityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALS2_API URivalsPlatformEntityComponent : public URivalsEntityComponent {
    GENERATED_BODY()
public:
    URivalsPlatformEntityComponent(const FObjectInitializer& ObjectInitializer);

};

