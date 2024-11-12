#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyBooleanFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyBooleanFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyBooleanFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyBoolean& SnapNetPropertyBoolean, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Conv_SnapNetPropertyBooleanToBool(const FSnapNetPropertyBoolean& SnapNetPropertyBoolean);
    
};

