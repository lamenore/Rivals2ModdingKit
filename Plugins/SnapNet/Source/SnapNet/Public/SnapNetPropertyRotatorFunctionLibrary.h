#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetInterpolation.h"
#include "SnapNetPropertyRotator.h"
#include "SnapNetPropertyRotatorFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyRotatorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyRotatorFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyRotator& SnapNetPropertyRotator, const FRotator& Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Conv_SnapNetPropertyRotatorToRotator(const FSnapNetPropertyRotator& SnapNetPropertyRotator);
    
};

