#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Bezier.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UBezier : public UObject {
    GENERATED_BODY()
public:
    UBezier();

    UFUNCTION(BlueprintCallable)
    static FVector Interpolate(float T, const TArray<FVector>& Points);
    
};

