#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyClientIndex.h"
#include "SnapNetPropertyClientIndexFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyClientIndexFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyClientIndexFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyClientIndex& SnapNetPropertyClientIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_SnapNetPropertyClientIndexToInt(const FSnapNetPropertyClientIndex& SnapNetPropertyClientIndex);
    
};

