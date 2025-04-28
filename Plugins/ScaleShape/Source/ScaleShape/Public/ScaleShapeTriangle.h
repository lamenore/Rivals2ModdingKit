#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScaleShapeBase.h"
#include "ScaleShapeTriangle.generated.h"

UCLASS(Blueprintable)
class SCALESHAPE_API UScaleShapeTriangle : public UScaleShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D P0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D P1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D P2;
    
    UScaleShapeTriangle();

    UFUNCTION(BlueprintCallable)
    void SetP2(FVector2D InP2);
    
    UFUNCTION(BlueprintCallable)
    void SetP1(FVector2D InP1);
    
    UFUNCTION(BlueprintCallable)
    void SetP0(FVector2D InP0);
    
};

