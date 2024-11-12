#pragma once
#include "CoreMinimal.h"
#include "FlamePuddle.h"
#include "MovingFlamePuddle.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AMovingFlamePuddle : public AFlamePuddle {
    GENERATED_BODY()
public:
    AMovingFlamePuddle(const FObjectInitializer& ObjectInitializer);

};

