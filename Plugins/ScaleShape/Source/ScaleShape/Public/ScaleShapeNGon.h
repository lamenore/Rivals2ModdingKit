#pragma once
#include "CoreMinimal.h"
#include "ScaleShapeBase.h"
#include "ScaleShapeNGon.generated.h"

UCLASS(Blueprintable)
class SCALESHAPE_API UScaleShapeNGon : public UScaleShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberOfSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UScaleShapeNGon();

    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfSides(float InNumberOfSides);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleDivisor(float InAngleDivisor);
    
};

