#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetInterpolation.h"
#include "SnapNetPropertyQuaternion.h"
#include "SnapNetPropertyQuaternionFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyQuaternionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyQuaternionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyQuaternion& SnapNetPropertyQuaternion, const FQuat& Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Conv_SnapNetPropertyQuaternionToQuat(const FSnapNetPropertyQuaternion& SnapNetPropertyQuaternion);
    
};

