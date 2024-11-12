#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyEnumFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyEnumFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyEnumFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValueInt(UPARAM(Ref) FSnapNetPropertyEnum& SnapNetPropertyEnum, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueByte(UPARAM(Ref) FSnapNetPropertyEnum& SnapNetPropertyEnum, uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_SnapNetPropertyEnumToInt(const FSnapNetPropertyEnum& SnapNetPropertyEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Conv_SnapNetPropertyEnumToByte(const FSnapNetPropertyEnum& SnapNetPropertyEnum);
    
};

