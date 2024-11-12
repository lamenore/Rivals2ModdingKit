#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyPlayerIndex.h"
#include "SnapNetPropertyPlayerIndexFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyPlayerIndexFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyPlayerIndexFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyPlayerIndex& SnapNetPropertyPlayerIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_SnapNetPropertyPlayerIndexToInt(const FSnapNetPropertyPlayerIndex& SnapNetPropertyPlayerIndex);
    
};

