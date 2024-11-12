#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetInterpolation.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyInt32FunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyInt32FunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyInt32FunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyInt32& SnapNetPropertyInt32, int32 Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_SnapNetPropertyInt32ToInt(const FSnapNetPropertyInt32& SnapNetPropertyInt32);
    
};

