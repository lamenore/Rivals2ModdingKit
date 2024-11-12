#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetInterpolation.h"
#include "SnapNetPropertyDouble.h"
#include "SnapNetPropertyDoubleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyDoubleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyDoubleFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyDouble& SnapNetPropertyDouble, double Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintPure)
    static double Conv_SnapNetPropertyDoubleToDouble(const FSnapNetPropertyDouble& SnapNetPropertyDouble);
    
};

