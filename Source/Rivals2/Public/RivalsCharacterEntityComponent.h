#pragma once
#include "CoreMinimal.h"
#include "RivalsEntityComponent.h"
#include "RivalsCharacterEntityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URivalsCharacterEntityComponent : public URivalsEntityComponent {
    GENERATED_BODY()
public:
    URivalsCharacterEntityComponent(const FObjectInitializer& ObjectInitializer);

};

