#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetInterpolation.h"
#include "SnapNetPropertyAngularVelocity.h"
#include "SnapNetPropertyPosition.h"
#include "SnapNetPropertyVector.h"
#include "SnapNetPropertyVelocity.h"
#include "SnapNetPropertyVectorFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyVectorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyVectorFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue_Velocity(UPARAM(Ref) FSnapNetPropertyVelocity& SnapNetPropertyVelocity, const FVector& Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue_Vector(UPARAM(Ref) FSnapNetPropertyVector& SnapNetPropertyVector, const FVector& Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue_Position(UPARAM(Ref) FSnapNetPropertyPosition& SnapNetPropertyPosition, const FVector& Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue_AngularVelocity(UPARAM(Ref) FSnapNetPropertyAngularVelocity& SnapNetPropertyAngularVelocity, const FVector& Value, ESnapNetInterpolation Interpolation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_SnapNetPropertyVelocityToVector(const FSnapNetPropertyVelocity& SnapNetPropertyVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_SnapNetPropertyVectorToVector(const FSnapNetPropertyVector& SnapNetPropertyVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_SnapNetPropertyPositionToVector(const FSnapNetPropertyPosition& SnapNetPropertyPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_SnapNetPropertyAngularVelocityToVector(const FSnapNetPropertyAngularVelocity& SnapNetPropertyAngularVelocity);
    
};

