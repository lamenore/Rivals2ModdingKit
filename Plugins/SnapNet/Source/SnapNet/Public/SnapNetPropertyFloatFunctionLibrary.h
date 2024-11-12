#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetInterpolation.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyFloatFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyFloatFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyFloatFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyFloat& SnapNetPropertyFloat, float Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_SnapNetPropertyFloatToFloat(const FSnapNetPropertyFloat& SnapNetPropertyFloat);
    
};

