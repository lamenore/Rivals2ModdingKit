#pragma once
#include "CoreMinimal.h"
#include "RivalsEntityComponent.h"
#include "RivalsArticleEntityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALS2_API URivalsArticleEntityComponent : public URivalsEntityComponent {
    GENERATED_BODY()
public:
    URivalsArticleEntityComponent(const FObjectInitializer& ObjectInitializer);

};

