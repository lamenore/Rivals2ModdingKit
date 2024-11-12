#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyString.h"
#include "SnapNetPropertyStringFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyStringFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyStringFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyString& SnapNetPropertyString, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_SnapNetPropertyStringToString(const FSnapNetPropertyString& SnapNetPropertyString);
    
};

