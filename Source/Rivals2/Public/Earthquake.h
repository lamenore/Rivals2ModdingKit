#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleEntity.h"
#include "Earthquake.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AEarthquake : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    AEarthquake(const FObjectInitializer& ObjectInitializer);

};

