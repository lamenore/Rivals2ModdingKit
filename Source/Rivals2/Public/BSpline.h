#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BSpline.generated.h"

UCLASS(Blueprintable)
class UBSpline : public UObject {
    GENERATED_BODY()
public:
    UBSpline();

    UFUNCTION(BlueprintCallable)
    static FVector Interpolate(float T, const TArray<FVector>& Points, const int32 D);
    
};

